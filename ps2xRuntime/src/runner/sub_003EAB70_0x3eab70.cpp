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

// Function: sub_003EAB70
// Address: 0x3eab70 - 0x3eac30
void sub_003EAB70_0x3eab70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EAB70_0x3eab70");
#endif

    switch (ctx->pc) {
        case 0x3eab70u: goto label_3eab70;
        case 0x3eab74u: goto label_3eab74;
        case 0x3eab78u: goto label_3eab78;
        case 0x3eab7cu: goto label_3eab7c;
        case 0x3eab80u: goto label_3eab80;
        case 0x3eab84u: goto label_3eab84;
        case 0x3eab88u: goto label_3eab88;
        case 0x3eab8cu: goto label_3eab8c;
        case 0x3eab90u: goto label_3eab90;
        case 0x3eab94u: goto label_3eab94;
        case 0x3eab98u: goto label_3eab98;
        case 0x3eab9cu: goto label_3eab9c;
        case 0x3eaba0u: goto label_3eaba0;
        case 0x3eaba4u: goto label_3eaba4;
        case 0x3eaba8u: goto label_3eaba8;
        case 0x3eabacu: goto label_3eabac;
        case 0x3eabb0u: goto label_3eabb0;
        case 0x3eabb4u: goto label_3eabb4;
        case 0x3eabb8u: goto label_3eabb8;
        case 0x3eabbcu: goto label_3eabbc;
        case 0x3eabc0u: goto label_3eabc0;
        case 0x3eabc4u: goto label_3eabc4;
        case 0x3eabc8u: goto label_3eabc8;
        case 0x3eabccu: goto label_3eabcc;
        case 0x3eabd0u: goto label_3eabd0;
        case 0x3eabd4u: goto label_3eabd4;
        case 0x3eabd8u: goto label_3eabd8;
        case 0x3eabdcu: goto label_3eabdc;
        case 0x3eabe0u: goto label_3eabe0;
        case 0x3eabe4u: goto label_3eabe4;
        case 0x3eabe8u: goto label_3eabe8;
        case 0x3eabecu: goto label_3eabec;
        case 0x3eabf0u: goto label_3eabf0;
        case 0x3eabf4u: goto label_3eabf4;
        case 0x3eabf8u: goto label_3eabf8;
        case 0x3eabfcu: goto label_3eabfc;
        case 0x3eac00u: goto label_3eac00;
        case 0x3eac04u: goto label_3eac04;
        case 0x3eac08u: goto label_3eac08;
        case 0x3eac0cu: goto label_3eac0c;
        case 0x3eac10u: goto label_3eac10;
        case 0x3eac14u: goto label_3eac14;
        case 0x3eac18u: goto label_3eac18;
        case 0x3eac1cu: goto label_3eac1c;
        case 0x3eac20u: goto label_3eac20;
        case 0x3eac24u: goto label_3eac24;
        case 0x3eac28u: goto label_3eac28;
        case 0x3eac2cu: goto label_3eac2c;
        default: break;
    }

    ctx->pc = 0x3eab70u;

label_3eab70:
    // 0x3eab70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3eab70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3eab74:
    // 0x3eab74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3eab74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3eab78:
    // 0x3eab78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3eab78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3eab7c:
    // 0x3eab7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3eab7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3eab80:
    // 0x3eab80: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3eab80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3eab84:
    // 0x3eab84: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3eab84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3eab88:
    // 0x3eab88: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3eab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3eab8c:
    // 0x3eab8c: 0x40f809  jalr        $v0
label_3eab90:
    if (ctx->pc == 0x3EAB90u) {
        ctx->pc = 0x3EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB8Cu;
        // 0x3eab90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAB94u;
        goto label_3eab94;
    }
    ctx->pc = 0x3EAB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EAB94u);
        ctx->pc = 0x3EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB8Cu;
        // 0x3eab90: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAB8Cu, 0x3EAB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EAB94u;
label_3eab94:
    // 0x3eab94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3eab94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3eab98:
    // 0x3eab98: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3eab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3eab9c:
    // 0x3eab9c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3eaba0:
    if (ctx->pc == 0x3EABA0u) {
        ctx->pc = 0x3EABA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAB9Cu;
        // 0x3eaba0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABA4u;
        goto label_3eaba4;
    }
    ctx->pc = 0x3EAB9Cu;
    {
        const bool branch_taken_0x3eab9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3eab9c) {
            ctx->pc = 0x3EABA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EAB9Cu;
            // 0x3eaba0: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EABACu;
            goto label_3eabac;
        }
    }
    ctx->pc = 0x3EABA4u;
label_3eaba4:
    // 0x3eaba4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3eaba8:
    if (ctx->pc == 0x3EABA8u) {
        ctx->pc = 0x3EABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABA4u;
        // 0x3eaba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABACu;
        goto label_3eabac;
    }
    ctx->pc = 0x3EABA4u;
    {
        const bool branch_taken_0x3eaba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EABA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABA4u;
        // 0x3eaba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eaba4) {
            ctx->pc = 0x3EAC1Cu;
            goto label_3eac1c;
        }
    }
    ctx->pc = 0x3EABACu;
label_3eabac:
    // 0x3eabac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3eabacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3eabb0:
    // 0x3eabb0: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_3eabb4:
    if (ctx->pc == 0x3EABB4u) {
        ctx->pc = 0x3EABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABB0u;
        // 0x3eabb4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABB8u;
        goto label_3eabb8;
    }
    ctx->pc = 0x3EABB0u;
    {
        const bool branch_taken_0x3eabb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eabb0) {
            ctx->pc = 0x3EABB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EABB0u;
            // 0x3eabb4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EABCCu;
            goto label_3eabcc;
        }
    }
    ctx->pc = 0x3EABB8u;
label_3eabb8:
    // 0x3eabb8: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3eabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
label_3eabbc:
    // 0x3eabbc: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x3eabbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_3eabc0:
    // 0x3eabc0: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3eabc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3eabc4:
    // 0x3eabc4: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3eabc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3eabc8:
    // 0x3eabc8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eabc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eabcc:
    // 0x3eabcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3eabccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3eabd0:
    // 0x3eabd0: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_3eabd4:
    if (ctx->pc == 0x3EABD4u) {
        ctx->pc = 0x3EABD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABD0u;
        // 0x3eabd4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABD8u;
        goto label_3eabd8;
    }
    ctx->pc = 0x3EABD0u;
    {
        const bool branch_taken_0x3eabd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eabd0) {
            ctx->pc = 0x3EABD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EABD0u;
            // 0x3eabd4: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EABE8u;
            goto label_3eabe8;
        }
    }
    ctx->pc = 0x3EABD8u;
label_3eabd8:
    // 0x3eabd8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3eabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3eabdc:
    // 0x3eabdc: 0xae020084  sw          $v0, 0x84($s0)
    ctx->pc = 0x3eabdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
label_3eabe0:
    // 0x3eabe0: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x3eabe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
label_3eabe4:
    // 0x3eabe4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3eabe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eabe8:
    // 0x3eabe8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3eabe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3eabec:
    // 0x3eabec: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_3eabf0:
    if (ctx->pc == 0x3EABF0u) {
        ctx->pc = 0x3EABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EABECu;
        // 0x3eabf0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EABF4u;
        goto label_3eabf4;
    }
    ctx->pc = 0x3EABECu;
    {
        const bool branch_taken_0x3eabec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x3eabec) {
            ctx->pc = 0x3EABF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EABECu;
            // 0x3eabf0: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EAC00u;
            goto label_3eac00;
        }
    }
    ctx->pc = 0x3EABF4u;
label_3eabf4:
    // 0x3eabf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eabf8:
    // 0x3eabf8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3eabf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3eabfc:
    // 0x3eabfc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3eabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3eac00:
    // 0x3eac00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3eac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3eac04:
    // 0x3eac04: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3eac08:
    if (ctx->pc == 0x3EAC08u) {
        ctx->pc = 0x3EAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC04u;
        // 0x3eac08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC0Cu;
        goto label_3eac0c;
    }
    ctx->pc = 0x3EAC04u;
    {
        const bool branch_taken_0x3eac04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC04u;
        // 0x3eac08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3eac04) {
            ctx->pc = 0x3EAC1Cu;
            goto label_3eac1c;
        }
    }
    ctx->pc = 0x3EAC0Cu;
label_3eac0c:
    // 0x3eac0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3eac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3eac10:
    // 0x3eac10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3eac10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3eac14:
    // 0x3eac14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3eac14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3eac18:
    // 0x3eac18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3eac18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3eac1c:
    // 0x3eac1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3eac1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3eac20:
    // 0x3eac20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3eac20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3eac24:
    // 0x3eac24: 0x3e00008  jr          $ra
label_3eac28:
    if (ctx->pc == 0x3EAC28u) {
        ctx->pc = 0x3EAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC24u;
        // 0x3eac28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EAC2Cu;
        goto label_3eac2c;
    }
    ctx->pc = 0x3EAC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EAC24u;
        // 0x3eac28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EAC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EAC2Cu;
label_3eac2c:
    // 0x3eac2c: 0x0  nop
    ctx->pc = 0x3eac2cu;
    // NOP
    ctx->pc = 0x3eac30u;
}
