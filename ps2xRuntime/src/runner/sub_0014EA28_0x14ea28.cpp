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

// Function: sub_0014EA28
// Address: 0x14ea28 - 0x14eb40
void sub_0014EA28_0x14ea28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014EA28_0x14ea28");
#endif

    switch (ctx->pc) {
        case 0x14ea5cu: goto label_14ea5c;
        case 0x14ea6cu: goto label_14ea6c;
        case 0x14ea78u: goto label_14ea78;
        case 0x14ea88u: goto label_14ea88;
        case 0x14eaf4u: goto label_14eaf4;
        case 0x14eb00u: goto label_14eb00;
        case 0x14eb08u: goto label_14eb08;
        case 0x14eb10u: goto label_14eb10;
        case 0x14eb18u: goto label_14eb18;
        case 0x14eb20u: goto label_14eb20;
        default: break;
    }

    ctx->pc = 0x14ea28u;

    // 0x14ea28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x14ea28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14ea2c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x14ea2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14ea30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14ea30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x14ea34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14ea34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea38: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x14ea38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x14ea3c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14ea3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14ea40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14ea44: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x14ea44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14ea48: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14EA48u;
    {
        const bool branch_taken_0x14ea48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA48u;
        // 0x14ea4c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea48) {
            ctx->pc = 0x14EA80u;
            goto label_14ea80;
        }
    }
    ctx->pc = 0x14EA50u;
    // 0x14ea50: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ea50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ea54: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EA54u;
    SET_GPR_U32(ctx, 31, 0x14EA5Cu);
    ctx->pc = 0x14EA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA54u;
    // 0x14ea58: 0x2484bcb0  addiu       $a0, $a0, -0x4350 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EA54u, 0x14EA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA5Cu;
label_14ea5c:
    // 0x14ea5c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ea5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ea60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x14ea60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14ea64: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EA64u;
    SET_GPR_U32(ctx, 31, 0x14EA6Cu);
    ctx->pc = 0x14EA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA64u;
    // 0x14ea68: 0x2484bc70  addiu       $a0, $a0, -0x4390 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EA64u, 0x14EA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA6Cu;
label_14ea6c:
    // 0x14ea6c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14ea6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14ea70: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14EA70u;
    SET_GPR_U32(ctx, 31, 0x14EA78u);
    ctx->pc = 0x14EA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EA70u;
    // 0x14ea74: 0x2484bc90  addiu       $a0, $a0, -0x4370 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14EA70u, 0x14EA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA78u;
label_14ea78:
    // 0x14ea78: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x14EA78u;
    {
        const bool branch_taken_0x14ea78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EA78u;
        // 0x14ea7c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ea78) {
            ctx->pc = 0x14EB24u;
            goto label_14eb24;
        }
    }
    ctx->pc = 0x14EA80u;
label_14ea80:
    // 0x14ea80: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14EA80u;
    SET_GPR_U32(ctx, 31, 0x14EA88u);
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14EA80u, 0x14EA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EA88u;
label_14ea88:
    // 0x14ea88: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14ea88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14ea8c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14ea8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14ea90: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x14ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x14ea94: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14ea94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14ea98: 0x2463bf58  addiu       $v1, $v1, -0x40A8
    ctx->pc = 0x14ea98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950744));
    // 0x14ea9c: 0x2484c0d8  addiu       $a0, $a0, -0x3F28
    ctx->pc = 0x14ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951128));
    // 0x14eaa0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x14eaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14eaa4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x14eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14eaa8: 0x24a5c018  addiu       $a1, $a1, -0x3FE8
    ctx->pc = 0x14eaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950936));
    // 0x14eaac: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x14eaacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x14eab0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x14eab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14eab4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x14eab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14eab8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x14eab8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x14eabc: 0x16460007  bne         $s2, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x14EABCu;
    {
        const bool branch_taken_0x14eabc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 6));
        ctx->pc = 0x14EAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EABCu;
        // 0x14eac0: 0xac910000  sw          $s1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14eabc) {
            ctx->pc = 0x14EADCu;
            goto label_14eadc;
        }
    }
    ctx->pc = 0x14EAC4u;
    // 0x14eac4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14eac8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x14eac8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14eacc: 0x2442be68  addiu       $v0, $v0, -0x4198
    ctx->pc = 0x14eaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950504));
    // 0x14ead0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14ead4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14EAD4u;
    {
        const bool branch_taken_0x14ead4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EAD4u;
        // 0x14ead8: 0xa0460000  sb          $a2, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ead4) {
            ctx->pc = 0x14EAECu;
            goto label_14eaec;
        }
    }
    ctx->pc = 0x14EADCu;
label_14eadc:
    // 0x14eadc: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14eadcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14eae0: 0x2442be68  addiu       $v0, $v0, -0x4198
    ctx->pc = 0x14eae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950504));
    // 0x14eae4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x14eae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14eae8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x14eae8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
label_14eaec:
    // 0x14eaec: 0xc05368e  jal         func_14DA38
    ctx->pc = 0x14EAECu;
    SET_GPR_U32(ctx, 31, 0x14EAF4u);
    ctx->pc = 0x14EAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAECu;
    // 0x14eaf0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DA38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DA38u, 0x14EAECu, 0x14EAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EAF4u;
label_14eaf4:
    // 0x14eaf4: 0x102400  sll         $a0, $s0, 16
    ctx->pc = 0x14eaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x14eaf8: 0xc053722  jal         func_14DC88
    ctx->pc = 0x14EAF8u;
    SET_GPR_U32(ctx, 31, 0x14EB00u);
    ctx->pc = 0x14EAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EAF8u;
    // 0x14eafc: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DC88u, 0x14EAF8u, 0x14EB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB00u;
label_14eb00:
    // 0x14eb00: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14EB00u;
    SET_GPR_U32(ctx, 31, 0x14EB08u);
    ctx->pc = 0x14EB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB00u;
    // 0x14eb04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14EB00u, 0x14EB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB08u;
label_14eb08:
    // 0x14eb08: 0xc05373e  jal         func_14DCF8
    ctx->pc = 0x14EB08u;
    SET_GPR_U32(ctx, 31, 0x14EB10u);
    ctx->pc = 0x14EB0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14EB08u;
    // 0x14eb0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14DCF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DCF8u, 0x14EB08u, 0x14EB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB10u;
label_14eb10:
    // 0x14eb10: 0xc0536aa  jal         func_14DAA8
    ctx->pc = 0x14EB10u;
    SET_GPR_U32(ctx, 31, 0x14EB18u);
    ctx->pc = 0x14DAA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14DAA8u, 0x14EB10u, 0x14EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB18u;
label_14eb18:
    // 0x14eb18: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14EB18u;
    SET_GPR_U32(ctx, 31, 0x14EB20u);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14EB18u, 0x14EB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14EB20u;
label_14eb20:
    // 0x14eb20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14eb20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14eb24:
    // 0x14eb24: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x14eb24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14eb28: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14eb28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14eb2c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x14eb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14eb30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14eb30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14eb34: 0x3e00008  jr          $ra
    ctx->pc = 0x14EB34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14EB34u;
        // 0x14eb38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14EB34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14EB3Cu;
    // 0x14eb3c: 0x0  nop
    ctx->pc = 0x14eb3cu;
    // NOP
    ctx->pc = 0x14eb40u;
}
