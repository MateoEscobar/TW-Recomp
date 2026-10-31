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

// Function: sub_004EAB58
// Address: 0x4eab58 - 0x4eac28
void sub_004EAB58_0x4eab58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004EAB58_0x4eab58");
#endif

    switch (ctx->pc) {
        case 0x4eab58u: goto label_4eab58;
        case 0x4eab5cu: goto label_4eab5c;
        case 0x4eab60u: goto label_4eab60;
        case 0x4eab64u: goto label_4eab64;
        case 0x4eab68u: goto label_4eab68;
        case 0x4eab6cu: goto label_4eab6c;
        case 0x4eab70u: goto label_4eab70;
        case 0x4eab74u: goto label_4eab74;
        case 0x4eab78u: goto label_4eab78;
        case 0x4eab7cu: goto label_4eab7c;
        case 0x4eab80u: goto label_4eab80;
        case 0x4eab84u: goto label_4eab84;
        case 0x4eab88u: goto label_4eab88;
        case 0x4eab8cu: goto label_4eab8c;
        case 0x4eab90u: goto label_4eab90;
        case 0x4eab94u: goto label_4eab94;
        case 0x4eab98u: goto label_4eab98;
        case 0x4eab9cu: goto label_4eab9c;
        case 0x4eaba0u: goto label_4eaba0;
        case 0x4eaba4u: goto label_4eaba4;
        case 0x4eaba8u: goto label_4eaba8;
        case 0x4eabacu: goto label_4eabac;
        case 0x4eabb0u: goto label_4eabb0;
        case 0x4eabb4u: goto label_4eabb4;
        case 0x4eabb8u: goto label_4eabb8;
        case 0x4eabbcu: goto label_4eabbc;
        case 0x4eabc0u: goto label_4eabc0;
        case 0x4eabc4u: goto label_4eabc4;
        case 0x4eabc8u: goto label_4eabc8;
        case 0x4eabccu: goto label_4eabcc;
        case 0x4eabd0u: goto label_4eabd0;
        case 0x4eabd4u: goto label_4eabd4;
        case 0x4eabd8u: goto label_4eabd8;
        case 0x4eabdcu: goto label_4eabdc;
        case 0x4eabe0u: goto label_4eabe0;
        case 0x4eabe4u: goto label_4eabe4;
        case 0x4eabe8u: goto label_4eabe8;
        case 0x4eabecu: goto label_4eabec;
        case 0x4eabf0u: goto label_4eabf0;
        case 0x4eabf4u: goto label_4eabf4;
        case 0x4eabf8u: goto label_4eabf8;
        case 0x4eabfcu: goto label_4eabfc;
        case 0x4eac00u: goto label_4eac00;
        case 0x4eac04u: goto label_4eac04;
        case 0x4eac08u: goto label_4eac08;
        case 0x4eac0cu: goto label_4eac0c;
        case 0x4eac10u: goto label_4eac10;
        case 0x4eac14u: goto label_4eac14;
        case 0x4eac18u: goto label_4eac18;
        case 0x4eac1cu: goto label_4eac1c;
        case 0x4eac20u: goto label_4eac20;
        case 0x4eac24u: goto label_4eac24;
        default: break;
    }

    ctx->pc = 0x4eab58u;

label_4eab58:
    // 0x4eab58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4eab58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_4eab5c:
    // 0x4eab5c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4eab5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_4eab60:
    // 0x4eab60: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4eab60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4eab64:
    // 0x4eab64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4eab64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4eab68:
    // 0x4eab68: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4eab68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_4eab6c:
    // 0x4eab6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4eab6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4eab70:
    // 0x4eab70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4eab70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4eab74:
    // 0x4eab74: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_4eab78:
    if (ctx->pc == 0x4EAB78u) {
        ctx->pc = 0x4EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB74u;
        // 0x4eab78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB7Cu;
        goto label_4eab7c;
    }
    ctx->pc = 0x4EAB74u;
    {
        const bool branch_taken_0x4eab74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EAB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB74u;
        // 0x4eab78: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eab74) {
            ctx->pc = 0x4EAC08u;
            goto label_4eac08;
        }
    }
    ctx->pc = 0x4EAB7Cu;
label_4eab7c:
    // 0x4eab7c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x4eab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4eab80:
    // 0x4eab80: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_4eab84:
    if (ctx->pc == 0x4EAB84u) {
        ctx->pc = 0x4EAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB80u;
        // 0x4eab84: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB88u;
        goto label_4eab88;
    }
    ctx->pc = 0x4EAB80u;
    {
        const bool branch_taken_0x4eab80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4eab80) {
            ctx->pc = 0x4EAB84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4EAB80u;
            // 0x4eab84: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4EABB4u;
            goto label_4eabb4;
        }
    }
    ctx->pc = 0x4EAB88u;
label_4eab88:
    // 0x4eab88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4eab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eab8c:
    // 0x4eab8c: 0xc13a95e  jal         func_4EA578
label_4eab90:
    if (ctx->pc == 0x4EAB90u) {
        ctx->pc = 0x4EAB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAB8Cu;
        // 0x4eab90: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAB94u;
        goto label_4eab94;
    }
    ctx->pc = 0x4EAB8Cu;
    SET_GPR_U32(ctx, 31, 0x4EAB94u);
    ctx->pc = 0x4EAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4EAB8Cu;
    // 0x4eab90: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EA578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EA578u, 0x4EAB8Cu, 0x4EAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4EAB94u;
label_4eab94:
    // 0x4eab94: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4eab94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eab98:
    // 0x4eab98: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x4eab98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_4eab9c:
    // 0x4eab9c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x4eab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eaba0:
    // 0x4eaba0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x4eaba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_4eaba4:
    // 0x4eaba4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4eaba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eaba8:
    // 0x4eaba8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x4eaba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_4eabac:
    // 0x4eabac: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4eabacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4eabb0:
    // 0x4eabb0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x4eabb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4eabb4:
    // 0x4eabb4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_4eabb8:
    if (ctx->pc == 0x4EABB8u) {
        ctx->pc = 0x4EABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EABB4u;
        // 0x4eabb8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EABBCu;
        goto label_4eabbc;
    }
    ctx->pc = 0x4EABB4u;
    {
        const bool branch_taken_0x4eabb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4EABB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EABB4u;
        // 0x4eabb8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4eabb4) {
            ctx->pc = 0x4EABE0u;
            goto label_4eabe0;
        }
    }
    ctx->pc = 0x4EABBCu;
label_4eabbc:
    // 0x4eabbc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x4eabbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_4eabc0:
    // 0x4eabc0: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x4eabc0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_4eabc4:
    // 0x4eabc4: 0x24c67050  addiu       $a2, $a2, 0x7050
    ctx->pc = 0x4eabc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28752));
label_4eabc8:
    // 0x4eabc8: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x4eabc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_4eabcc:
    // 0x4eabcc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eabccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eabd0:
    // 0x4eabd0: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eabd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eabd4:
    // 0x4eabd4: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eabd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eabd8:
    // 0x4eabd8: 0x60f809  jalr        $v1
label_4eabdc:
    if (ctx->pc == 0x4EABDCu) {
        ctx->pc = 0x4EABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EABD8u;
        // 0x4eabdc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EABE0u;
        goto label_4eabe0;
    }
    ctx->pc = 0x4EABD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EABE0u);
        ctx->pc = 0x4EABDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EABD8u;
        // 0x4eabdc: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EABD8u, 0x4EABE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EABE0u;
label_4eabe0:
    // 0x4eabe0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x4eabe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_4eabe4:
    // 0x4eabe4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4eabe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4eabe8:
    // 0x4eabe8: 0x8c4827e4  lw          $t0, 0x27E4($v0)
    ctx->pc = 0x4eabe8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_4eabec:
    // 0x4eabec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4eabecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4eabf0:
    // 0x4eabf0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x4eabf0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4eabf4:
    // 0x4eabf4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x4eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_4eabf8:
    // 0x4eabf8: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x4eabf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_4eabfc:
    // 0x4eabfc: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x4eabfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_4eac00:
    // 0x4eac00: 0x60f809  jalr        $v1
label_4eac04:
    if (ctx->pc == 0x4EAC04u) {
        ctx->pc = 0x4EAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC00u;
        // 0x4eac04: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAC08u;
        goto label_4eac08;
    }
    ctx->pc = 0x4EAC00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x4EAC08u);
        ctx->pc = 0x4EAC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC00u;
        // 0x4eac04: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAC00u, 0x4EAC08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4EAC08u;
label_4eac08:
    // 0x4eac08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4eac08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4eac0c:
    // 0x4eac0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4eac0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4eac10:
    // 0x4eac10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4eac10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4eac14:
    // 0x4eac14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4eac14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4eac18:
    // 0x4eac18: 0x3e00008  jr          $ra
label_4eac1c:
    if (ctx->pc == 0x4EAC1Cu) {
        ctx->pc = 0x4EAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC18u;
        // 0x4eac1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4EAC20u;
        goto label_4eac20;
    }
    ctx->pc = 0x4EAC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4EAC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4EAC18u;
        // 0x4eac1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4EAC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4EAC20u;
label_4eac20:
    // 0x4eac20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x4eac20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4eac24:
    // 0x4eac24: 0x0  nop
    ctx->pc = 0x4eac24u;
    // NOP
    ctx->pc = 0x4eac28u;
}
