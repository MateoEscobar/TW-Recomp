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

// Function: sub_0014EB40
// Address: 0x14eb40 - 0x14ec68
void sub_0014EB40_0x14eb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EB40_0x14eb40");
#endif

    switch (ctx->pc) {
        case 0x14eb7cu: goto label_14eb7c;
        case 0x14eb8cu: goto label_14eb8c;
        case 0x14eb98u: goto label_14eb98;
        case 0x14ebc8u: goto label_14ebc8;
        case 0x14ebdcu: goto label_14ebdc;
        case 0x14ebecu: goto label_14ebec;
        case 0x14ec20u: goto label_14ec20;
        case 0x14ec2cu: goto label_14ec2c;
        case 0x14ec34u: goto label_14ec34;
        case 0x14ec3cu: goto label_14ec3c;
        case 0x14ec44u: goto label_14ec44;
        default: break;
    }

    ctx->pc = 0x14eb40u;

    // 0x14eb40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x14eb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x14eb44: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14eb48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x14eb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x14eb4c: 0x8c62c20c  lw          $v0, -0x3DF4($v1)
    ctx->pc = 0x14eb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C20Cu));
    // 0x14eb50: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14eb50u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x14eb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x14eb58: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x14eb58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x14eb5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14eb5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x14eb60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x14eb64: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x14eb64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14eb68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14EB68u;
    {
        const bool branch_taken_0x14eb68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB68u;
        // 0x14eb6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb68) {
            ctx->pc = 0x14EBA0u;
            goto label_14eba0;
        }
    }
    ctx->pc = 0x14EB70u;
    // 0x14eb70: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14eb74: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EB74u;
    SET_GPR_U32(ctx, 31, 0x14EB7Cu);
    ctx->pc = 0x14EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB74u;
    // 0x14eb78: 0x2484bcd8  addiu       $a0, $a0, -0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EB74u, 0x14EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB7Cu;
label_14eb7c:
    // 0x14eb7c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14eb80: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14eb80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eb84: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EB84u;
    SET_GPR_U32(ctx, 31, 0x14EB8Cu);
    ctx->pc = 0x14EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB84u;
    // 0x14eb88: 0x2484ba38  addiu       $a0, $a0, -0x45C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EB84u, 0x14EB8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB8Cu;
label_14eb8c:
    // 0x14eb8c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14eb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14eb90: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EB90u;
    SET_GPR_U32(ctx, 31, 0x14EB98u);
    ctx->pc = 0x14EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB90u;
    // 0x14eb94: 0x2484ba58  addiu       $a0, $a0, -0x45A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EB90u, 0x14EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB98u;
label_14eb98:
    // 0x14eb98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x14EB98u;
    {
        const bool branch_taken_0x14eb98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB98u;
        // 0x14eb9c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eb98) {
            ctx->pc = 0x14EC48u;
            goto label_14ec48;
        }
    }
    ctx->pc = 0x14EBA0u;
label_14eba0:
    // 0x14eba0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14eba4: 0x138080  sll         $s0, $s3, 2
    ctx->pc = 0x14eba4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x14eba8: 0x2463bf58  addiu       $v1, $v1, -0x40A8
    ctx->pc = 0x14eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950744));
    // 0x14ebac: 0x2039021  addu        $s2, $s0, $v1
    ctx->pc = 0x14ebacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14ebb0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x14ebb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ebb4: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x14ebb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x14ebb8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14EBB8u;
    {
        const bool branch_taken_0x14ebb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBB8u;
        // 0x14ebbc: 0x3c040055  lui         $a0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebb8) {
            ctx->pc = 0x14EBE4u;
            goto label_14ebe4;
        }
    }
    ctx->pc = 0x14EBC0u;
    // 0x14ebc0: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EBC0u;
    SET_GPR_U32(ctx, 31, 0x14EBC8u);
    ctx->pc = 0x14EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBC0u;
    // 0x14ebc4: 0x2484bcd8  addiu       $a0, $a0, -0x4328 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EBC0u, 0x14EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBC8u;
label_14ebc8:
    // 0x14ebc8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x14ebc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x14ebcc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ebccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ebd0: 0x2484bd00  addiu       $a0, $a0, -0x4300
    ctx->pc = 0x14ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x14ebd4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EBD4u;
    SET_GPR_U32(ctx, 31, 0x14EBDCu);
    ctx->pc = 0x14EBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EBD4u;
    // 0x14ebd8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EBD4u, 0x14EBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBDCu;
label_14ebdc:
    // 0x14ebdc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x14EBDCu;
    {
        const bool branch_taken_0x14ebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EBDCu;
        // 0x14ebe0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ebdc) {
            ctx->pc = 0x14EC48u;
            goto label_14ec48;
        }
    }
    ctx->pc = 0x14EBE4u;
label_14ebe4:
    // 0x14ebe4: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14EBE4u;
    SET_GPR_U32(ctx, 31, 0x14EBECu);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14EBE4u, 0x14EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EBECu;
label_14ebec:
    // 0x14ebec: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14ebf0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14ebf4: 0x2442c0d8  addiu       $v0, $v0, -0x3F28
    ctx->pc = 0x14ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951128));
    // 0x14ebf8: 0x2463c018  addiu       $v1, $v1, -0x3FE8
    ctx->pc = 0x14ebf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950936));
    // 0x14ebfc: 0x2022021  addu        $a0, $s0, $v0
    ctx->pc = 0x14ebfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14ec00: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14ec00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x14ec04: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14ec08: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x14ec08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x14ec0c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x14EC0Cu;
    {
        const bool branch_taken_0x14ec0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC0Cu;
        // 0x14ec10: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ec0c) {
            ctx->pc = 0x14EC18u;
            goto label_14ec18;
        }
    }
    ctx->pc = 0x14EC14u;
    // 0x14ec14: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x14ec14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_14ec18:
    // 0x14ec18: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14EC18u;
    SET_GPR_U32(ctx, 31, 0x14EC20u);
    ctx->pc = 0x14EC1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC18u;
    // 0x14ec1c: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14EC18u, 0x14EC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC20u;
label_14ec20:
    // 0x14ec20: 0x132400  sll         $a0, $s3, 16
    ctx->pc = 0x14ec20u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x14ec24: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14EC24u;
    SET_GPR_U32(ctx, 31, 0x14EC2Cu);
    ctx->pc = 0x14EC28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC24u;
    // 0x14ec28: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14EC24u, 0x14EC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC2Cu;
label_14ec2c:
    // 0x14ec2c: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14EC2Cu;
    SET_GPR_U32(ctx, 31, 0x14EC34u);
    ctx->pc = 0x14EC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EC2Cu;
    // 0x14ec30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14EC2Cu, 0x14EC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC34u;
label_14ec34:
    // 0x14ec34: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14EC34u;
    SET_GPR_U32(ctx, 31, 0x14EC3Cu);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14EC34u, 0x14EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC3Cu;
label_14ec3c:
    // 0x14ec3c: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14EC3Cu;
    SET_GPR_U32(ctx, 31, 0x14EC44u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14EC3Cu, 0x14EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EC44u;
label_14ec44:
    // 0x14ec44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ec44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ec48:
    // 0x14ec48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x14ec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ec4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x14ec4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ec50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14ec50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ec54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x14ec54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ec58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14ec58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14ec5c: 0x3e00008  jr          $ra
    ctx->pc = 0x14EC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EC5Cu;
        // 0x14ec60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EC64u;
    // 0x14ec64: 0x0  nop
    ctx->pc = 0x14ec64u;
    // NOP
    ctx->pc = 0x14ec68u;
}
