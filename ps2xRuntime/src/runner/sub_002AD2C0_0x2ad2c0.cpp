#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AD2C0
// Address: 0x2ad2c0 - 0x2ad378
void sub_002AD2C0_0x2ad2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD2C0_0x2ad2c0");
#endif

    switch (ctx->pc) {
        case 0x2ad2fcu: goto label_2ad2fc;
        case 0x2ad304u: goto label_2ad304;
        case 0x2ad314u: goto label_2ad314;
        case 0x2ad31cu: goto label_2ad31c;
        case 0x2ad348u: goto label_2ad348;
        case 0x2ad354u: goto label_2ad354;
        default: break;
    }

    ctx->pc = 0x2ad2c0u;

    // 0x2ad2c0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ad2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ad2c4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2ad2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2ad2c8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2ad2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2ad2cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ad2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2d0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ad2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ad2d4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2ad2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2ad2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2ad2dc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2ad2dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2e0: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2ad2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2ad2e4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2ad2e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad2e8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2ad2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2ad2ec: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2ad2ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2ad2f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad2f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2AD2F4u;
    SET_GPR_U32(ctx, 31, 0x2AD2FCu);
    ctx->pc = 0x2AD2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD2F4u;
    // 0x2ad2f8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2AD2F4u, 0x2AD2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD2FCu;
label_2ad2fc:
    // 0x2ad2fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2AD2FCu;
    SET_GPR_U32(ctx, 31, 0x2AD304u);
    ctx->pc = 0x2AD300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD2FCu;
    // 0x2ad300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2AD2FCu, 0x2AD304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD304u;
label_2ad304:
    // 0x2ad304: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2AD304u;
    {
        const bool branch_taken_0x2ad304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD304u;
        // 0x2ad308: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad304) {
            ctx->pc = 0x2AD358u;
            goto label_2ad358;
        }
    }
    ctx->pc = 0x2AD30Cu;
    // 0x2ad30c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2AD30Cu;
    SET_GPR_U32(ctx, 31, 0x2AD314u);
    ctx->pc = 0x2AD310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD30Cu;
    // 0x2ad310: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2AD30Cu, 0x2AD314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD314u;
label_2ad314:
    // 0x2ad314: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2AD314u;
    SET_GPR_U32(ctx, 31, 0x2AD31Cu);
    ctx->pc = 0x2AD318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD314u;
    // 0x2ad318: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2AD314u, 0x2AD31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD31Cu;
label_2ad31c:
    // 0x2ad31c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ad31cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad320: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AD320u;
    {
        const bool branch_taken_0x2ad320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD320u;
        // 0x2ad324: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad320) {
            ctx->pc = 0x2AD348u;
            goto label_2ad348;
        }
    }
    ctx->pc = 0x2AD328u;
    // 0x2ad328: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x2ad328u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x2ad32c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2ad32cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad330: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2ad330u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad334: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2ad334u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ad338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad33c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ad33cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad340: 0xc0ab4de  jal         func_2AD378
    ctx->pc = 0x2AD340u;
    SET_GPR_U32(ctx, 31, 0x2AD348u);
    ctx->pc = 0x2AD344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD340u;
    // 0x2ad344: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AD378u, 0x2AD340u, 0x2AD348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD348u;
label_2ad348:
    // 0x2ad348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ad348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad34c: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2AD34Cu;
    SET_GPR_U32(ctx, 31, 0x2AD354u);
    ctx->pc = 0x2AD350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD34Cu;
    // 0x2ad350: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2AD34Cu, 0x2AD354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2AD354u;
label_2ad354:
    // 0x2ad354: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2ad354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ad358:
    // 0x2ad358: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2ad358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ad35c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2ad35cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ad360: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ad360u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ad364: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2ad364u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ad368: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ad368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ad36c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2ad36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2ad370: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD370u;
        // 0x2ad374: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD378u;
}
