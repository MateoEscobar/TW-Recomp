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

// Function: sub_00486038
// Address: 0x486038 - 0x486110
void sub_00486038_0x486038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00486038_0x486038");
#endif

    switch (ctx->pc) {
        case 0x486074u: goto label_486074;
        case 0x4860d0u: goto label_4860d0;
        default: break;
    }

    ctx->pc = 0x486038u;

    // 0x486038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x486038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48603c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x48603cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486040: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x486040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x486044: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x486044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x486048: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x486048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x48604c: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x48604cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x486050: 0x2610ad44  addiu       $s0, $s0, -0x52BC
    ctx->pc = 0x486050u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946116));
    // 0x486054: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x486054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486058: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x486058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x48605c: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x48605cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x486060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x486060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x486064: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x486064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x486068: 0xaf828970  sw          $v0, -0x7690($gp)
    ctx->pc = 0x486068u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936944), GPR_U32(ctx, 2));
    // 0x48606c: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x48606Cu;
    SET_GPR_U32(ctx, 31, 0x486074u);
    ctx->pc = 0x486070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48606Cu;
    // 0x486070: 0x2611ffd4  addiu       $s1, $s0, -0x2C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x48606Cu, 0x486074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x486074u;
label_486074:
    // 0x486074: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x486074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
    // 0x486078: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x486078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x48607c: 0x8c44ebf0  lw          $a0, -0x1410($v0)
    ctx->pc = 0x48607cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x52EBF0u));
    // 0x486080: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x486080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x486084: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x486084u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x486088: 0x8f858634  lw          $a1, -0x79CC($gp)
    ctx->pc = 0x486088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936116)));
    // 0x48608c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x48608cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x486090: 0x8f878638  lw          $a3, -0x79C8($gp)
    ctx->pc = 0x486090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936120)));
    // 0x486094: 0xa066004d  sb          $a2, 0x4D($v1)
    ctx->pc = 0x486094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x486098: 0x3c080071  lui         $t0, 0x71
    ctx->pc = 0x486098u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)113 << 16));
    // 0x48609c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x48609cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x4860a0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x4860a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x4860a4: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x4860a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x4860a8: 0x2508ed90  addiu       $t0, $t0, -0x1270
    ctx->pc = 0x4860a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294962576));
    // 0x4860ac: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x4860acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x4860b0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4860b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4860b4: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x4860b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x4860b8: 0x35290407  ori         $t1, $t1, 0x407
    ctx->pc = 0x4860b8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1031);
    // 0x4860bc: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x4860bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x4860c0: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x4860c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x4860c4: 0xa060004c  sb          $zero, 0x4C($v1)
    ctx->pc = 0x4860c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x4860c8: 0xc11f66e  jal         func_47D9B8
    ctx->pc = 0x4860C8u;
    SET_GPR_U32(ctx, 31, 0x4860D0u);
    ctx->pc = 0x4860CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4860C8u;
    // 0x4860cc: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D9B8u, 0x4860C8u, 0x4860D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4860D0u;
label_4860d0:
    // 0x4860d0: 0x8f838970  lw          $v1, -0x7690($gp)
    ctx->pc = 0x4860d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936944)));
    // 0x4860d4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x4860d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x4860d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4860D8u;
    {
        const bool branch_taken_0x4860d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4860DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4860D8u;
        // 0x4860dc: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4860d8) {
            ctx->pc = 0x4860F4u;
            goto label_4860f4;
        }
    }
    ctx->pc = 0x4860E0u;
    // 0x4860e0: 0x8f838974  lw          $v1, -0x768C($gp)
    ctx->pc = 0x4860e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936948)));
    // 0x4860e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4860e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4860e8: 0xaf838974  sw          $v1, -0x768C($gp)
    ctx->pc = 0x4860e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936948), GPR_U32(ctx, 3));
    // 0x4860ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4860ECu;
    {
        const bool branch_taken_0x4860ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4860F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4860ECu;
        // 0x4860f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4860ec) {
            ctx->pc = 0x4860F8u;
            goto label_4860f8;
        }
    }
    ctx->pc = 0x4860F4u;
label_4860f4:
    // 0x4860f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4860f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4860f8:
    // 0x4860f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4860f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4860fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4860fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x486100: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x486100u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x486104: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x486104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x486108: 0x3e00008  jr          $ra
    ctx->pc = 0x486108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48610Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x486108u;
        // 0x48610c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x486108u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x486110u;
}
