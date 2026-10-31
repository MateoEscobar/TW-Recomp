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

// Function: sub_002EA8F8
// Address: 0x2ea8f8 - 0x2ea9b8
void sub_002EA8F8_0x2ea8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA8F8_0x2ea8f8");
#endif

    switch (ctx->pc) {
        case 0x2ea934u: goto label_2ea934;
        case 0x2ea990u: goto label_2ea990;
        case 0x2ea9a0u: goto label_2ea9a0;
        default: break;
    }

    ctx->pc = 0x2ea8f8u;

    // 0x2ea8f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ea8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ea8fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ea8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ea900: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ea900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ea904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea90c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x2ea90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2ea910: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ea910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ea914: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2ea914u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ea918: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2ea918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x2ea91c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2ea91cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2ea920: 0x14440017  bne         $v0, $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2EA920u;
    {
        const bool branch_taken_0x2ea920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2EA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA920u;
        // 0x2ea924: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea920) {
            ctx->pc = 0x2EA980u;
            goto label_2ea980;
        }
    }
    ctx->pc = 0x2EA928u;
    // 0x2ea928: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ea928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2ea92c: 0xc089998  jal         func_226660
    ctx->pc = 0x2EA92Cu;
    SET_GPR_U32(ctx, 31, 0x2EA934u);
    ctx->pc = 0x2EA930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA92Cu;
    // 0x2ea930: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EA92Cu, 0x2EA934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA934u;
label_2ea934:
    // 0x2ea934: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2EA934u;
    {
        const bool branch_taken_0x2ea934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA934u;
        // 0x2ea938: 0x2403ffef  addiu       $v1, $zero, -0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea934) {
            ctx->pc = 0x2EA980u;
            goto label_2ea980;
        }
    }
    ctx->pc = 0x2EA93Cu;
    // 0x2ea93c: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ea93cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x2ea940: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2ea940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2ea944: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ea948: 0x8c85b734  lw          $a1, -0x48CC($a0)
    ctx->pc = 0x2ea948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294948660)));
    // 0x2ea94c: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ea94cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
    // 0x2ea950: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2ea950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2ea954: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA954u;
    {
        const bool branch_taken_0x2ea954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA954u;
        // 0x2ea958: 0x8ca30048  lw          $v1, 0x48($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea954) {
            ctx->pc = 0x2EA968u;
            goto label_2ea968;
        }
    }
    ctx->pc = 0x2EA95Cu;
    // 0x2ea95c: 0x24620fa0  addiu       $v0, $v1, 0xFA0
    ctx->pc = 0x2ea95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4000));
    // 0x2ea960: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EA960u;
    {
        const bool branch_taken_0x2ea960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA960u;
        // 0x2ea964: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea960) {
            ctx->pc = 0x2EA9A0u;
            goto label_2ea9a0;
        }
    }
    ctx->pc = 0x2EA968u;
label_2ea968:
    // 0x2ea968: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2ea968u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2ea96c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EA96Cu;
    {
        const bool branch_taken_0x2ea96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA96Cu;
        // 0x2ea970: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea96c) {
            ctx->pc = 0x2EA9A0u;
            goto label_2ea9a0;
        }
    }
    ctx->pc = 0x2EA974u;
    // 0x2ea974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ea974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ea978: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2EA978u;
    {
        const bool branch_taken_0x2ea978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EA97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA978u;
        // 0x2ea97c: 0xa223002e  sb          $v1, 0x2E($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 46), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea978) {
            ctx->pc = 0x2EA9A4u;
            goto label_2ea9a4;
        }
    }
    ctx->pc = 0x2EA980u;
label_2ea980:
    // 0x2ea980: 0x3c05bfff  lui         $a1, 0xBFFF
    ctx->pc = 0x2ea980u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49151 << 16));
    // 0x2ea984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ea984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea988: 0xc089998  jal         func_226660
    ctx->pc = 0x2EA988u;
    SET_GPR_U32(ctx, 31, 0x2EA990u);
    ctx->pc = 0x2EA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA988u;
    // 0x2ea98c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x2EA988u, 0x2EA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA990u;
label_2ea990:
    // 0x2ea990: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2EA990u;
    {
        const bool branch_taken_0x2ea990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EA994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA990u;
        // 0x2ea994: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea990) {
            ctx->pc = 0x2EA9A4u;
            goto label_2ea9a4;
        }
    }
    ctx->pc = 0x2EA998u;
    // 0x2ea998: 0xc0ba9bc  jal         func_2EA6F0
    ctx->pc = 0x2EA998u;
    SET_GPR_U32(ctx, 31, 0x2EA9A0u);
    ctx->pc = 0x2EA99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA998u;
    // 0x2ea99c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EA6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EA6F0u, 0x2EA998u, 0x2EA9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EA9A0u;
label_2ea9a0:
    // 0x2ea9a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ea9a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ea9a4:
    // 0x2ea9a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ea9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea9a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea9a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea9ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea9acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea9b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA9B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA9B0u;
        // 0x2ea9b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA9B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA9B8u;
}
