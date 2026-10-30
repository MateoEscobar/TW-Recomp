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

// Function: sub_00159538
// Address: 0x159538 - 0x1595f8
void sub_00159538_0x159538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00159538_0x159538");
#endif

    switch (ctx->pc) {
        case 0x159564u: goto label_159564;
        case 0x159594u: goto label_159594;
        case 0x15959cu: goto label_15959c;
        case 0x1595acu: goto label_1595ac;
        case 0x1595c0u: goto label_1595c0;
        case 0x1595d4u: goto label_1595d4;
        case 0x1595dcu: goto label_1595dc;
        default: break;
    }

    ctx->pc = 0x159538u;

    // 0x159538: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x159538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15953c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x159540: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x159540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x159544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x159548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15954c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15954cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x159550: 0x8c442c7c  lw          $a0, 0x2C7C($v0)
    ctx->pc = 0x159550u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C7Cu));
    // 0x159554: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x159554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x159558: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x159558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15955c: 0xc0e8b20  jal         func_3A2C80
    ctx->pc = 0x15955Cu;
    SET_GPR_U32(ctx, 31, 0x159564u);
    ctx->pc = 0x159560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15955Cu;
    // 0x159560: 0x3c120051  lui         $s2, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2C80u, 0x15955Cu, 0x159564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159564u;
label_159564:
    // 0x159564: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x159564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x159568: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x159568u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x15956c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x15956cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x159570: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x159570u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x159574: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x159574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x159578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x159578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15957c: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x15957cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x159580: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x159580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x159584: 0xace0c6e4  sw          $zero, -0x391C($a3)
    ctx->pc = 0x159584u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C6E4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C6E4u, _value); } while (0);
    // 0x159588: 0xae2000d0  sw          $zero, 0xD0($s1)
    ctx->pc = 0x159588u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
    // 0x15958c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x15958Cu;
    SET_GPR_U32(ctx, 31, 0x159594u);
    ctx->pc = 0x159590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15958Cu;
    // 0x159590: 0xae2800d4  sw          $t0, 0xD4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x15958Cu, 0x159594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x159594u;
label_159594:
    // 0x159594: 0xc0639ae  jal         func_18E6B8
    ctx->pc = 0x159594u;
    SET_GPR_U32(ctx, 31, 0x15959Cu);
    ctx->pc = 0x159598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x159594u;
    // 0x159598: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18E6B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18E6B8u, 0x159594u, 0x15959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15959Cu;
label_15959c:
    // 0x15959c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x15959cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1595a0: 0x8e44aa84  lw          $a0, -0x557C($s2)
    ctx->pc = 0x1595a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
    // 0x1595a4: 0xc04456a  jal         func_1115A8
    ctx->pc = 0x1595A4u;
    SET_GPR_U32(ctx, 31, 0x1595ACu);
    ctx->pc = 0x1595A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595A4u;
    // 0x1595a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1115A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1115A8u, 0x1595A4u, 0x1595ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595ACu;
label_1595ac:
    // 0x1595ac: 0x3c020055  lui         $v0, 0x55
    ctx->pc = 0x1595acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
    // 0x1595b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1595b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595b4: 0x2450ee50  addiu       $s0, $v0, -0x11B0
    ctx->pc = 0x1595b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962768));
    // 0x1595b8: 0xc10c313  jal         func_430C4C
    ctx->pc = 0x1595B8u;
    SET_GPR_U32(ctx, 31, 0x1595C0u);
    ctx->pc = 0x1595BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595B8u;
    // 0x1595bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1595B8u, 0x1595C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595C0u;
label_1595c0:
    // 0x1595c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1595C0u;
    {
        const bool branch_taken_0x1595c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1595C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595C0u;
        // 0x1595c4: 0x8e44aa84  lw          $a0, -0x557C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1595c0) {
            ctx->pc = 0x1595D4u;
            goto label_1595d4;
        }
    }
    ctx->pc = 0x1595C8u;
    // 0x1595c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1595c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1595cc: 0xc043e94  jal         func_10FA50
    ctx->pc = 0x1595CCu;
    SET_GPR_U32(ctx, 31, 0x1595D4u);
    ctx->pc = 0x1595D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595CCu;
    // 0x1595d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FA50u, 0x1595CCu, 0x1595D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595D4u;
label_1595d4:
    // 0x1595d4: 0xc08579e  jal         func_215E78
    ctx->pc = 0x1595D4u;
    SET_GPR_U32(ctx, 31, 0x1595DCu);
    ctx->pc = 0x1595D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1595D4u;
    // 0x1595d8: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x215E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x215E78u, 0x1595D4u, 0x1595DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1595DCu;
label_1595dc:
    // 0x1595dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1595dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1595e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1595e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1595e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1595e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1595e8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1595e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1595ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1595ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1595F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1595ECu;
        // 0x1595f0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1595ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1595F4u;
    // 0x1595f4: 0x0  nop
    ctx->pc = 0x1595f4u;
    // NOP
    ctx->pc = 0x1595f8u;
}
