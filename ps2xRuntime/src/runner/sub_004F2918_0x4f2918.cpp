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

// Function: sub_004F2918
// Address: 0x4f2918 - 0x4f29e0
void sub_004F2918_0x4f2918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004F2918_0x4f2918");
#endif

    switch (ctx->pc) {
        case 0x4f2918u: goto label_4f2918;
        case 0x4f291cu: goto label_4f291c;
        case 0x4f2920u: goto label_4f2920;
        case 0x4f2924u: goto label_4f2924;
        case 0x4f2928u: goto label_4f2928;
        case 0x4f292cu: goto label_4f292c;
        case 0x4f2930u: goto label_4f2930;
        case 0x4f2934u: goto label_4f2934;
        case 0x4f2938u: goto label_4f2938;
        case 0x4f293cu: goto label_4f293c;
        case 0x4f2940u: goto label_4f2940;
        case 0x4f2944u: goto label_4f2944;
        case 0x4f2948u: goto label_4f2948;
        case 0x4f294cu: goto label_4f294c;
        case 0x4f2950u: goto label_4f2950;
        case 0x4f2954u: goto label_4f2954;
        case 0x4f2958u: goto label_4f2958;
        case 0x4f295cu: goto label_4f295c;
        case 0x4f2960u: goto label_4f2960;
        case 0x4f2964u: goto label_4f2964;
        case 0x4f2968u: goto label_4f2968;
        case 0x4f296cu: goto label_4f296c;
        case 0x4f2970u: goto label_4f2970;
        case 0x4f2974u: goto label_4f2974;
        case 0x4f2978u: goto label_4f2978;
        case 0x4f297cu: goto label_4f297c;
        case 0x4f2980u: goto label_4f2980;
        case 0x4f2984u: goto label_4f2984;
        case 0x4f2988u: goto label_4f2988;
        case 0x4f298cu: goto label_4f298c;
        case 0x4f2990u: goto label_4f2990;
        case 0x4f2994u: goto label_4f2994;
        case 0x4f2998u: goto label_4f2998;
        case 0x4f299cu: goto label_4f299c;
        case 0x4f29a0u: goto label_4f29a0;
        case 0x4f29a4u: goto label_4f29a4;
        case 0x4f29a8u: goto label_4f29a8;
        case 0x4f29acu: goto label_4f29ac;
        case 0x4f29b0u: goto label_4f29b0;
        case 0x4f29b4u: goto label_4f29b4;
        case 0x4f29b8u: goto label_4f29b8;
        case 0x4f29bcu: goto label_4f29bc;
        case 0x4f29c0u: goto label_4f29c0;
        case 0x4f29c4u: goto label_4f29c4;
        case 0x4f29c8u: goto label_4f29c8;
        case 0x4f29ccu: goto label_4f29cc;
        case 0x4f29d0u: goto label_4f29d0;
        case 0x4f29d4u: goto label_4f29d4;
        case 0x4f29d8u: goto label_4f29d8;
        case 0x4f29dcu: goto label_4f29dc;
        default: break;
    }

    ctx->pc = 0x4f2918u;

label_4f2918:
    // 0x4f2918: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4f2918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4f291c:
    // 0x4f291c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f291cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f2920:
    // 0x4f2920: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4f2920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4f2924:
    // 0x4f2924: 0x24424e10  addiu       $v0, $v0, 0x4E10
    ctx->pc = 0x4f2924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19984));
label_4f2928:
    // 0x4f2928: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x4f2928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_4f292c:
    // 0x4f292c: 0x3c120051  lui         $s2, 0x51
    ctx->pc = 0x4f292cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)81 << 16));
label_4f2930:
    // 0x4f2930: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4f2930u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4f2934:
    // 0x4f2934: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x4f2934u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_4f2938:
    // 0x4f2938: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x4f2938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_4f293c:
    // 0x4f293c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x4f293cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_4f2940:
    // 0x4f2940: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4f2940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4f2944:
    // 0x4f2944: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4f2944u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4f2948:
    // 0x4f2948: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f2948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f294c:
    // 0x4f294c: 0x26100948  addiu       $s0, $s0, 0x948
    ctx->pc = 0x4f294cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2376));
label_4f2950:
    // 0x4f2950: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f2950u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f2954:
    // 0x4f2954: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2954u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f2958:
    // 0x4f2958: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x4f2958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4f295c:
    // 0x4f295c: 0x24070024  addiu       $a3, $zero, 0x24
    ctx->pc = 0x4f295cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_4f2960:
    // 0x4f2960: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x4f2960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f2964:
    // 0x4f2964: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x4f2964u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_4f2968:
    // 0x4f2968: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x4f2968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_4f296c:
    // 0x4f296c: 0x40f809  jalr        $v0
label_4f2970:
    if (ctx->pc == 0x4F2970u) {
        ctx->pc = 0x4F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F296Cu;
        // 0x4f2970: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F2974u;
        goto label_4f2974;
    }
    ctx->pc = 0x4F296Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4F2974u);
        ctx->pc = 0x4F2970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F296Cu;
        // 0x4f2970: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F296Cu, 0x4F2974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F2974u;
label_4f2974:
    // 0x4f2974: 0x8e4827e4  lw          $t0, 0x27E4($s2)
    ctx->pc = 0x4f2974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10212)));
label_4f2978:
    // 0x4f2978: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x4f2978u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4f297c:
    // 0x4f297c: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x4f297cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_4f2980:
    // 0x4f2980: 0x24070027  addiu       $a3, $zero, 0x27
    ctx->pc = 0x4f2980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_4f2984:
    // 0x4f2984: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4f2984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4f2988:
    // 0x4f2988: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4f2988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4f298c:
    // 0x4f298c: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4f298cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4f2990:
    // 0x4f2990: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4f2990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4f2994:
    // 0x4f2994: 0x60f809  jalr        $v1
label_4f2998:
    if (ctx->pc == 0x4F2998u) {
        ctx->pc = 0x4F2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2994u;
        // 0x4f2998: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F299Cu;
        goto label_4f299c;
    }
    ctx->pc = 0x4F2994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4F299Cu);
        ctx->pc = 0x4F2998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F2994u;
        // 0x4f2998: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F2994u, 0x4F299Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4F299Cu;
label_4f299c:
    // 0x4f299c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x4f299cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_4f29a0:
    // 0x4f29a0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x4f29a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_4f29a4:
    // 0x4f29a4: 0x24424e70  addiu       $v0, $v0, 0x4E70
    ctx->pc = 0x4f29a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20080));
label_4f29a8:
    // 0x4f29a8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x4f29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_4f29ac:
    // 0x4f29ac: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4f29acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4f29b0:
    // 0x4f29b0: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x4f29b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
label_4f29b4:
    // 0x4f29b4: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4f29b8:
    if (ctx->pc == 0x4F29B8u) {
        ctx->pc = 0x4F29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29B4u;
        // 0x4f29b8: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F29BCu;
        goto label_4f29bc;
    }
    ctx->pc = 0x4F29B4u;
    {
        const bool branch_taken_0x4f29b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4F29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29B4u;
        // 0x4f29b8: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4f29b4) {
            ctx->pc = 0x4F29C4u;
            goto label_4f29c4;
        }
    }
    ctx->pc = 0x4F29BCu;
label_4f29bc:
    // 0x4f29bc: 0xc10b208  jal         func_42C820
label_4f29c0:
    if (ctx->pc == 0x4F29C0u) {
        ctx->pc = 0x4F29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29BCu;
        // 0x4f29c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F29C4u;
        goto label_4f29c4;
    }
    ctx->pc = 0x4F29BCu;
    SET_GPR_U32(ctx, 31, 0x4F29C4u);
    ctx->pc = 0x4F29C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4F29BCu;
    // 0x4f29c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4F29BCu, 0x4F29C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4F29C4u;
label_4f29c4:
    // 0x4f29c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x4f29c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4f29c8:
    // 0x4f29c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x4f29c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4f29cc:
    // 0x4f29cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4f29ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4f29d0:
    // 0x4f29d0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x4f29d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4f29d4:
    // 0x4f29d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4f29d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4f29d8:
    // 0x4f29d8: 0x3e00008  jr          $ra
label_4f29dc:
    if (ctx->pc == 0x4F29DCu) {
        ctx->pc = 0x4F29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29D8u;
        // 0x4f29dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4F29E0u;
        goto label_fallthrough_0x4f29d8;
    }
    ctx->pc = 0x4F29D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4F29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4F29D8u;
        // 0x4f29dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4F29D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4f29d8:
    ctx->pc = 0x4F29E0u;
}
