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

// Function: sub_002DE2C8
// Address: 0x2de2c8 - 0x2de380
void sub_002DE2C8_0x2de2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE2C8_0x2de2c8");
#endif

    switch (ctx->pc) {
        case 0x2de2f8u: goto label_2de2f8;
        case 0x2de300u: goto label_2de300;
        case 0x2de314u: goto label_2de314;
        case 0x2de31cu: goto label_2de31c;
        case 0x2de32cu: goto label_2de32c;
        case 0x2de334u: goto label_2de334;
        case 0x2de354u: goto label_2de354;
        case 0x2de360u: goto label_2de360;
        default: break;
    }

    ctx->pc = 0x2de2c8u;

    // 0x2de2c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2de2c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2de2cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2de2ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2de2d0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2de2d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2de2d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2de2d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2d8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2de2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2de2dc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2de2dcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2de2e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2de2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2de2e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2de2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de2e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2de2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2de2ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2de2ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2de2f0: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DE2F0u;
    SET_GPR_U32(ctx, 31, 0x2DE2F8u);
    ctx->pc = 0x2DE2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE2F0u;
    // 0x2de2f4: 0xafa50004  sw          $a1, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DE2F0u, 0x2DE2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE2F8u;
label_2de2f8:
    // 0x2de2f8: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DE2F8u;
    SET_GPR_U32(ctx, 31, 0x2DE300u);
    ctx->pc = 0x2DE2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE2F8u;
    // 0x2de2fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DE2F8u, 0x2DE300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE300u;
label_2de300:
    // 0x2de300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de304: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DE304u;
    {
        const bool branch_taken_0x2de304 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de304) {
            ctx->pc = 0x2DE308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE304u;
            // 0x2de308: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE364u;
            goto label_2de364;
        }
    }
    ctx->pc = 0x2DE30Cu;
    // 0x2de30c: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2DE30Cu;
    SET_GPR_U32(ctx, 31, 0x2DE314u);
    ctx->pc = 0x2DE310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE30Cu;
    // 0x2de310: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2DE30Cu, 0x2DE314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE314u;
label_2de314:
    // 0x2de314: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2DE314u;
    SET_GPR_U32(ctx, 31, 0x2DE31Cu);
    ctx->pc = 0x2DE318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE314u;
    // 0x2de318: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2DE314u, 0x2DE31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE31Cu;
label_2de31c:
    // 0x2de31c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DE31Cu;
    {
        const bool branch_taken_0x2de31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de31c) {
            ctx->pc = 0x2DE320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DE31Cu;
            // 0x2de320: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DE364u;
            goto label_2de364;
        }
    }
    ctx->pc = 0x2DE324u;
    // 0x2de324: 0xc087502  jal         func_21D408
    ctx->pc = 0x2DE324u;
    SET_GPR_U32(ctx, 31, 0x2DE32Cu);
    ctx->pc = 0x2DE328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE324u;
    // 0x2de328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2DE324u, 0x2DE32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE32Cu;
label_2de32c:
    // 0x2de32c: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2DE32Cu;
    SET_GPR_U32(ctx, 31, 0x2DE334u);
    ctx->pc = 0x2DE330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE32Cu;
    // 0x2de330: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2DE32Cu, 0x2DE334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE334u;
label_2de334:
    // 0x2de334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2de334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de338: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE338u;
    {
        const bool branch_taken_0x2de338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE338u;
        // 0x2de33c: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de338) {
            ctx->pc = 0x2DE354u;
            goto label_2de354;
        }
    }
    ctx->pc = 0x2DE340u;
    // 0x2de340: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2de340u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2de344: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2de344u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2de348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de34c: 0xc0b78e0  jal         func_2DE380
    ctx->pc = 0x2DE34Cu;
    SET_GPR_U32(ctx, 31, 0x2DE354u);
    ctx->pc = 0x2DE350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE34Cu;
    // 0x2de350: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE380u, 0x2DE34Cu, 0x2DE354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE354u;
label_2de354:
    // 0x2de354: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2de354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de358: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2DE358u;
    SET_GPR_U32(ctx, 31, 0x2DE360u);
    ctx->pc = 0x2DE35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE358u;
    // 0x2de35c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2DE358u, 0x2DE360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE360u;
label_2de360:
    // 0x2de360: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2de360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2de364:
    // 0x2de364: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2de364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de368: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2de368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de36c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2de36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de370: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2de370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de374: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE374u;
        // 0x2de378: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE37Cu;
    // 0x2de37c: 0x0  nop
    ctx->pc = 0x2de37cu;
    // NOP
    ctx->pc = 0x2de380u;
}
