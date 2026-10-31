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

// Function: sub_002F3570
// Address: 0x2f3570 - 0x2f3600
void sub_002F3570_0x2f3570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F3570_0x2f3570");
#endif

    switch (ctx->pc) {
        case 0x2f35a4u: goto label_2f35a4;
        case 0x2f35d4u: goto label_2f35d4;
        case 0x2f35e4u: goto label_2f35e4;
        default: break;
    }

    ctx->pc = 0x2f3570u;

    // 0x2f3570: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f3570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f3574: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f3574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2f3578: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2f3578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2f357c: 0x2484b880  addiu       $a0, $a0, -0x4780
    ctx->pc = 0x2f357cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    // 0x2f3580: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2f3580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2f3584: 0x3c110056  lui         $s1, 0x56
    ctx->pc = 0x2f3584u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)86 << 16));
    // 0x2f3588: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2f3588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2f358c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x2f358cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    // 0x2f3590: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f3590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f3594: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2f3594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3598: 0x26317c08  addiu       $s1, $s1, 0x7C08
    ctx->pc = 0x2f3598u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 31752));
    // 0x2f359c: 0xc0cd4e4  jal         func_335390
    ctx->pc = 0x2F359Cu;
    SET_GPR_U32(ctx, 31, 0x2F35A4u);
    ctx->pc = 0x2F35A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F359Cu;
    // 0x2f35a0: 0x265211f8  addiu       $s2, $s2, 0x11F8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335390u, 0x2F359Cu, 0x2F35A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35A4u;
label_2f35a4:
    // 0x2f35a4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f35a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2f35a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f35a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35ac: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x2f35acu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2f35b0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2F35B0u;
    {
        const bool branch_taken_0x2f35b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f35b0) {
            ctx->pc = 0x2F35B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F35B0u;
            // 0x2f35b4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F35B8u;
            goto label_2f35b8;
        }
    }
    ctx->pc = 0x2F35B8u;
label_2f35b8:
    // 0x2f35b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f35b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35bc: 0x3010  mfhi        $a2
    ctx->pc = 0x2f35bcu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2f35c0: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x2f35c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x2f35c4: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x2f35c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2f35c8: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x2f35c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2f35cc: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x2F35CCu;
    SET_GPR_U32(ctx, 31, 0x2F35D4u);
    ctx->pc = 0x2F35D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35CCu;
    // 0x2f35d0: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x2F35CCu, 0x2F35D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35D4u;
label_2f35d4:
    // 0x2f35d4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x2f35d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x2f35d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f35d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f35dc: 0xc050fda  jal         func_143F68
    ctx->pc = 0x2F35DCu;
    SET_GPR_U32(ctx, 31, 0x2F35E4u);
    ctx->pc = 0x2F35E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F35DCu;
    // 0x2f35e0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x2F35DCu, 0x2F35E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F35E4u;
label_2f35e4:
    // 0x2f35e4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2f35e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f35e8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2f35e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f35ec: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2f35ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f35f0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f35f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f35f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F35F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F35F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F35F4u;
        // 0x2f35f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F35F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F35FCu;
    // 0x2f35fc: 0x0  nop
    ctx->pc = 0x2f35fcu;
    // NOP
    ctx->pc = 0x2f3600u;
}
