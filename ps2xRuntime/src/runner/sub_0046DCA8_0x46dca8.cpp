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

// Function: sub_0046DCA8
// Address: 0x46dca8 - 0x46dda0
void sub_0046DCA8_0x46dca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046DCA8_0x46dca8");
#endif

    switch (ctx->pc) {
        case 0x46dca8u: goto label_46dca8;
        case 0x46dcacu: goto label_46dcac;
        case 0x46dcb0u: goto label_46dcb0;
        case 0x46dcb4u: goto label_46dcb4;
        case 0x46dcb8u: goto label_46dcb8;
        case 0x46dcbcu: goto label_46dcbc;
        case 0x46dcc0u: goto label_46dcc0;
        case 0x46dcc4u: goto label_46dcc4;
        case 0x46dcc8u: goto label_46dcc8;
        case 0x46dcccu: goto label_46dccc;
        case 0x46dcd0u: goto label_46dcd0;
        case 0x46dcd4u: goto label_46dcd4;
        case 0x46dcd8u: goto label_46dcd8;
        case 0x46dcdcu: goto label_46dcdc;
        case 0x46dce0u: goto label_46dce0;
        case 0x46dce4u: goto label_46dce4;
        case 0x46dce8u: goto label_46dce8;
        case 0x46dcecu: goto label_46dcec;
        case 0x46dcf0u: goto label_46dcf0;
        case 0x46dcf4u: goto label_46dcf4;
        case 0x46dcf8u: goto label_46dcf8;
        case 0x46dcfcu: goto label_46dcfc;
        case 0x46dd00u: goto label_46dd00;
        case 0x46dd04u: goto label_46dd04;
        case 0x46dd08u: goto label_46dd08;
        case 0x46dd0cu: goto label_46dd0c;
        case 0x46dd10u: goto label_46dd10;
        case 0x46dd14u: goto label_46dd14;
        case 0x46dd18u: goto label_46dd18;
        case 0x46dd1cu: goto label_46dd1c;
        case 0x46dd20u: goto label_46dd20;
        case 0x46dd24u: goto label_46dd24;
        case 0x46dd28u: goto label_46dd28;
        case 0x46dd2cu: goto label_46dd2c;
        case 0x46dd30u: goto label_46dd30;
        case 0x46dd34u: goto label_46dd34;
        case 0x46dd38u: goto label_46dd38;
        case 0x46dd3cu: goto label_46dd3c;
        case 0x46dd40u: goto label_46dd40;
        case 0x46dd44u: goto label_46dd44;
        case 0x46dd48u: goto label_46dd48;
        case 0x46dd4cu: goto label_46dd4c;
        case 0x46dd50u: goto label_46dd50;
        case 0x46dd54u: goto label_46dd54;
        case 0x46dd58u: goto label_46dd58;
        case 0x46dd5cu: goto label_46dd5c;
        case 0x46dd60u: goto label_46dd60;
        case 0x46dd64u: goto label_46dd64;
        case 0x46dd68u: goto label_46dd68;
        case 0x46dd6cu: goto label_46dd6c;
        case 0x46dd70u: goto label_46dd70;
        case 0x46dd74u: goto label_46dd74;
        case 0x46dd78u: goto label_46dd78;
        case 0x46dd7cu: goto label_46dd7c;
        case 0x46dd80u: goto label_46dd80;
        case 0x46dd84u: goto label_46dd84;
        case 0x46dd88u: goto label_46dd88;
        case 0x46dd8cu: goto label_46dd8c;
        case 0x46dd90u: goto label_46dd90;
        case 0x46dd94u: goto label_46dd94;
        case 0x46dd98u: goto label_46dd98;
        case 0x46dd9cu: goto label_46dd9c;
        default: break;
    }

    ctx->pc = 0x46dca8u;

label_46dca8:
    // 0x46dca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x46dca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_46dcac:
    // 0x46dcac: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
label_46dcb0:
    // 0x46dcb0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x46dcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_46dcb4:
    // 0x46dcb4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x46dcb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_46dcb8:
    // 0x46dcb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x46dcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_46dcbc:
    // 0x46dcbc: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46dcbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46dcc0:
    // 0x46dcc0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x46dcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_46dcc4:
    // 0x46dcc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x46dcc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_46dcc8:
    // 0x46dcc8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x46dcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_46dccc:
    // 0x46dccc: 0x2453ad18  addiu       $s3, $v0, -0x52E8
    ctx->pc = 0x46dcccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
label_46dcd0:
    // 0x46dcd0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x46dcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_46dcd4:
    // 0x46dcd4: 0x8e620118  lw          $v0, 0x118($s3)
    ctx->pc = 0x46dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 280)));
label_46dcd8:
    // 0x46dcd8: 0x40f809  jalr        $v0
label_46dcdc:
    if (ctx->pc == 0x46DCDCu) {
        ctx->pc = 0x46DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DCD8u;
        // 0x46dcdc: 0x8f848500  lw          $a0, -0x7B00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DCE0u;
        goto label_46dce0;
    }
    ctx->pc = 0x46DCD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DCE0u);
        ctx->pc = 0x46DCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DCD8u;
        // 0x46dcdc: 0x8f848500  lw          $a0, -0x7B00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DCD8u, 0x46DCE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DCE0u;
label_46dce0:
    // 0x46dce0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x46dce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_46dce4:
    // 0x46dce4: 0x1200001c  beqz        $s0, . + 4 + (0x1C << 2)
label_46dce8:
    if (ctx->pc == 0x46DCE8u) {
        ctx->pc = 0x46DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DCE4u;
        // 0x46dce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DCECu;
        goto label_46dcec;
    }
    ctx->pc = 0x46DCE4u;
    {
        const bool branch_taken_0x46dce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DCE4u;
        // 0x46dce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dce4) {
            ctx->pc = 0x46DD58u;
            goto label_46dd58;
        }
    }
    ctx->pc = 0x46DCECu;
label_46dcec:
    // 0x46dcec: 0x12400016  beqz        $s2, . + 4 + (0x16 << 2)
label_46dcf0:
    if (ctx->pc == 0x46DCF0u) {
        ctx->pc = 0x46DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DCECu;
        // 0x46dcf0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DCF4u;
        goto label_46dcf4;
    }
    ctx->pc = 0x46DCECu;
    {
        const bool branch_taken_0x46dcec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DCECu;
        // 0x46dcf0: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dcec) {
            ctx->pc = 0x46DD48u;
            goto label_46dd48;
        }
    }
    ctx->pc = 0x46DCF4u;
label_46dcf4:
    // 0x46dcf4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x46dcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_46dcf8:
    // 0x46dcf8: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x46dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_46dcfc:
    // 0x46dcfc: 0x2438818  mult        $s1, $s2, $v1
    ctx->pc = 0x46dcfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_46dd00:
    // 0x46dd00: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x46dd00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_46dd04:
    // 0x46dd04: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x46dd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_46dd08:
    // 0x46dd08: 0x40f809  jalr        $v0
label_46dd0c:
    if (ctx->pc == 0x46DD0Cu) {
        ctx->pc = 0x46DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD08u;
        // 0x46dd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD10u;
        goto label_46dd10;
    }
    ctx->pc = 0x46DD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DD10u);
        ctx->pc = 0x46DD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD08u;
        // 0x46dd0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DD08u, 0x46DD10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DD10u;
label_46dd10:
    // 0x46dd10: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_46dd14:
    if (ctx->pc == 0x46DD14u) {
        ctx->pc = 0x46DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD10u;
        // 0x46dd14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD18u;
        goto label_46dd18;
    }
    ctx->pc = 0x46DD10u;
    {
        const bool branch_taken_0x46dd10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46DD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD10u;
        // 0x46dd14: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dd10) {
            ctx->pc = 0x46DD40u;
            goto label_46dd40;
        }
    }
    ctx->pc = 0x46DD18u;
label_46dd18:
    // 0x46dd18: 0x8e62011c  lw          $v0, 0x11C($s3)
    ctx->pc = 0x46dd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 284)));
label_46dd1c:
    // 0x46dd1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46dd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_46dd20:
    // 0x46dd20: 0x40f809  jalr        $v0
label_46dd24:
    if (ctx->pc == 0x46DD24u) {
        ctx->pc = 0x46DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD20u;
        // 0x46dd24: 0x8f848500  lw          $a0, -0x7B00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD28u;
        goto label_46dd28;
    }
    ctx->pc = 0x46DD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x46DD28u);
        ctx->pc = 0x46DD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD20u;
        // 0x46dd24: 0x8f848500  lw          $a0, -0x7B00($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935808)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DD20u, 0x46DD28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x46DD28u;
label_46dd28:
    // 0x46dd28: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x46dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_46dd2c:
    // 0x46dd2c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46dd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46dd30:
    // 0x46dd30: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x46dd30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_46dd34:
    // 0x46dd34: 0x1000000c  b           . + 4 + (0xC << 2)
label_46dd38:
    if (ctx->pc == 0x46DD38u) {
        ctx->pc = 0x46DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD34u;
        // 0x46dd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD3Cu;
        goto label_46dd3c;
    }
    ctx->pc = 0x46DD34u;
    {
        const bool branch_taken_0x46dd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD34u;
        // 0x46dd38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dd34) {
            ctx->pc = 0x46DD68u;
            goto label_46dd68;
        }
    }
    ctx->pc = 0x46DD3Cu;
label_46dd3c:
    // 0x46dd3c: 0x0  nop
    ctx->pc = 0x46dd3cu;
    // NOP
label_46dd40:
    // 0x46dd40: 0x10000003  b           . + 4 + (0x3 << 2)
label_46dd44:
    if (ctx->pc == 0x46DD44u) {
        ctx->pc = 0x46DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD40u;
        // 0x46dd44: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD48u;
        goto label_46dd48;
    }
    ctx->pc = 0x46DD40u;
    {
        const bool branch_taken_0x46dd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD40u;
        // 0x46dd44: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dd40) {
            ctx->pc = 0x46DD50u;
            goto label_46dd50;
        }
    }
    ctx->pc = 0x46DD48u;
label_46dd48:
    // 0x46dd48: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x46dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_46dd4c:
    // 0x46dd4c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x46dd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_46dd50:
    // 0x46dd50: 0x1000000b  b           . + 4 + (0xB << 2)
label_46dd54:
    if (ctx->pc == 0x46DD54u) {
        ctx->pc = 0x46DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD50u;
        // 0x46dd54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD58u;
        goto label_46dd58;
    }
    ctx->pc = 0x46DD50u;
    {
        const bool branch_taken_0x46dd50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46DD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD50u;
        // 0x46dd54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46dd50) {
            ctx->pc = 0x46DD80u;
            goto label_46dd80;
        }
    }
    ctx->pc = 0x46DD58u;
label_46dd58:
    // 0x46dd58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x46dd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_46dd5c:
    // 0x46dd5c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x46dd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_46dd60:
    // 0x46dd60: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x46dd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_46dd64:
    // 0x46dd64: 0x0  nop
    ctx->pc = 0x46dd64u;
    // NOP
label_46dd68:
    // 0x46dd68: 0xc11eff2  jal         func_47BFC8
label_46dd6c:
    if (ctx->pc == 0x46DD6Cu) {
        ctx->pc = 0x46DD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD68u;
        // 0x46dd6c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD70u;
        goto label_46dd70;
    }
    ctx->pc = 0x46DD68u;
    SET_GPR_U32(ctx, 31, 0x46DD70u);
    ctx->pc = 0x46DD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DD68u;
    // 0x46dd6c: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x46DD68u, 0x46DD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD70u;
label_46dd70:
    // 0x46dd70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x46dd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_46dd74:
    // 0x46dd74: 0xc11f024  jal         func_47C090
label_46dd78:
    if (ctx->pc == 0x46DD78u) {
        ctx->pc = 0x46DD78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD74u;
        // 0x46dd78: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD7Cu;
        goto label_46dd7c;
    }
    ctx->pc = 0x46DD74u;
    SET_GPR_U32(ctx, 31, 0x46DD7Cu);
    ctx->pc = 0x46DD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46DD74u;
    // 0x46dd78: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x46DD74u, 0x46DD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46DD7Cu;
label_46dd7c:
    // 0x46dd7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x46dd7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_46dd80:
    // 0x46dd80: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x46dd80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_46dd84:
    // 0x46dd84: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x46dd84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_46dd88:
    // 0x46dd88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x46dd88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46dd8c:
    // 0x46dd8c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x46dd8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_46dd90:
    // 0x46dd90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x46dd90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_46dd94:
    // 0x46dd94: 0x3e00008  jr          $ra
label_46dd98:
    if (ctx->pc == 0x46DD98u) {
        ctx->pc = 0x46DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD94u;
        // 0x46dd98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x46DD9Cu;
        goto label_46dd9c;
    }
    ctx->pc = 0x46DD94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46DD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46DD94u;
        // 0x46dd98: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46DD94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46DD9Cu;
label_46dd9c:
    // 0x46dd9c: 0x0  nop
    ctx->pc = 0x46dd9cu;
    // NOP
    ctx->pc = 0x46dda0u;
}
