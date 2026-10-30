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

// Function: sub_0014D760
// Address: 0x14d760 - 0x14d9c8
void sub_0014D760_0x14d760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D760_0x14d760");
#endif

    switch (ctx->pc) {
        case 0x14d78cu: goto label_14d78c;
        case 0x14d798u: goto label_14d798;
        case 0x14d7b8u: goto label_14d7b8;
        case 0x14d7ccu: goto label_14d7cc;
        case 0x14d7dcu: goto label_14d7dc;
        case 0x14d7f8u: goto label_14d7f8;
        case 0x14d8a8u: goto label_14d8a8;
        case 0x14d910u: goto label_14d910;
        case 0x14d930u: goto label_14d930;
        case 0x14d940u: goto label_14d940;
        case 0x14d950u: goto label_14d950;
        case 0x14d960u: goto label_14d960;
        case 0x14d980u: goto label_14d980;
        case 0x14d9acu: goto label_14d9ac;
        default: break;
    }

    ctx->pc = 0x14d760u;

    // 0x14d760: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x14d760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x14d764: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x14d764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x14d768: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14d768u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14d76c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x14d76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x14d770: 0x8e02c540  lw          $v0, -0x3AC0($s0)
    ctx->pc = 0x14d770u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C540u));
    // 0x14d774: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14d774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x14d778: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14D778u;
    {
        const bool branch_taken_0x14d778 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x14D77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D778u;
        // 0x14d77c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d778) {
            ctx->pc = 0x14D7A4u;
            goto label_14d7a4;
        }
    }
    ctx->pc = 0x14D780u;
    // 0x14d780: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14d780u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14d784: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14D784u;
    SET_GPR_U32(ctx, 31, 0x14D78Cu);
    ctx->pc = 0x14D788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D784u;
    // 0x14d788: 0x2484b708  addiu       $a0, $a0, -0x48F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14D784u, 0x14D78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D78Cu;
label_14d78c:
    // 0x14d78c: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14d78cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14d790: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14D790u;
    SET_GPR_U32(ctx, 31, 0x14D798u);
    ctx->pc = 0x14D794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D790u;
    // 0x14d794: 0x2484b720  addiu       $a0, $a0, -0x48E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14D790u, 0x14D798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D798u;
label_14d798:
    // 0x14d798: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14d798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14d79c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14D79Cu;
    {
        const bool branch_taken_0x14d79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D79Cu;
        // 0x14d7a0: 0x2484b740  addiu       $a0, $a0, -0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d79c) {
            ctx->pc = 0x14D7D4u;
            goto label_14d7d4;
        }
    }
    ctx->pc = 0x14D7A4u;
label_14d7a4:
    // 0x14d7a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14d7a8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14d7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d7ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x14d7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x14d7b0: 0xc10f428  jal         func_43D0A0
    ctx->pc = 0x14D7B0u;
    SET_GPR_U32(ctx, 31, 0x14D7B8u);
    ctx->pc = 0x14D7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7B0u;
    // 0x14d7b4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D0A0u, 0x14D7B0u, 0x14D7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7B8u;
label_14d7b8:
    // 0x14d7b8: 0x441000a  bgez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x14D7B8u;
    {
        const bool branch_taken_0x14d7b8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7B8u;
        // 0x14d7bc: 0xae02c540  sw          $v0, -0x3AC0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294952256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7b8) {
            ctx->pc = 0x14D7E4u;
            goto label_14d7e4;
        }
    }
    ctx->pc = 0x14D7C0u;
    // 0x14d7c0: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14d7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14d7c4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14D7C4u;
    SET_GPR_U32(ctx, 31, 0x14D7CCu);
    ctx->pc = 0x14D7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7C4u;
    // 0x14d7c8: 0x2484b708  addiu       $a0, $a0, -0x48F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948616));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14D7C4u, 0x14D7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7CCu;
label_14d7cc:
    // 0x14d7cc: 0x3c040055  lui         $a0, 0x55
    ctx->pc = 0x14d7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)85 << 16));
    // 0x14d7d0: 0x2484b778  addiu       $a0, $a0, -0x4888
    ctx->pc = 0x14d7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948728));
label_14d7d4:
    // 0x14d7d4: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14D7D4u;
    SET_GPR_U32(ctx, 31, 0x14D7DCu);
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14D7D4u, 0x14D7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7DCu;
label_14d7dc:
    // 0x14d7dc: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x14D7DCu;
    {
        const bool branch_taken_0x14d7dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D7DCu;
        // 0x14d7e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d7dc) {
            ctx->pc = 0x14D9B0u;
            goto label_14d9b0;
        }
    }
    ctx->pc = 0x14D7E4u;
label_14d7e4:
    // 0x14d7e4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14d7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14d7e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14d7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d7ec: 0xac62c52c  sw          $v0, -0x3AD4($v1)
    ctx->pc = 0x14d7ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x50C52Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C52Cu, _value); } while (0);
    // 0x14d7f0: 0xc0546f0  jal         func_151BC0
    ctx->pc = 0x14D7F0u;
    SET_GPR_U32(ctx, 31, 0x14D7F8u);
    ctx->pc = 0x14D7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D7F0u;
    // 0x14d7f4: 0x3c12005e  lui         $s2, 0x5E (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151BC0u, 0x14D7F0u, 0x14D7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D7F8u;
label_14d7f8:
    // 0x14d7f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14d7fc: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x14d7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x14d800: 0x24583ac8  addiu       $t8, $v0, 0x3AC8
    ctx->pc = 0x14d800u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 15048));
    // 0x14d804: 0x24c641b0  addiu       $a2, $a2, 0x41B0
    ctx->pc = 0x14d804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16816));
    // 0x14d808: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14d808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14d80c: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x14d80cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E41C4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E41C4u, _value); } while (0);
    // 0x14d810: 0x24513b88  addiu       $s1, $v0, 0x3B88
    ctx->pc = 0x14d810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 15240));
    // 0x14d814: 0x3c080051  lui         $t0, 0x51
    ctx->pc = 0x14d814u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)81 << 16));
    // 0x14d818: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14d818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14d81c: 0x3c090051  lui         $t1, 0x51
    ctx->pc = 0x14d81cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)81 << 16));
    // 0x14d820: 0x3c0a0051  lui         $t2, 0x51
    ctx->pc = 0x14d820u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)81 << 16));
    // 0x14d824: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x14d824u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x14d828: 0x3c0c005e  lui         $t4, 0x5E
    ctx->pc = 0x14d828u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)94 << 16));
    // 0x14d82c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x14d82cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
    // 0x14d830: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x14d830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x14d834: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14d834u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14d838: 0x24035010  addiu       $v1, $zero, 0x5010
    ctx->pc = 0x14d838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20496));
    // 0x14d83c: 0x3c0d005e  lui         $t5, 0x5E
    ctx->pc = 0x14d83cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)94 << 16));
    // 0x14d840: 0x24503b28  addiu       $s0, $v0, 0x3B28
    ctx->pc = 0x14d840u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 15144));
    // 0x14d844: 0xace5bd50  sw          $a1, -0x42B0($a3)
    ctx->pc = 0x14d844u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x50BD50u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD50u, _value); } while (0);
    // 0x14d848: 0xac83bd60  sw          $v1, -0x42A0($a0)
    ctx->pc = 0x14d848u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x50BD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50BD60u, _value); } while (0);
    // 0x14d84c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14d84cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14d850: 0xa100c530  sb          $zero, -0x3AD0($t0)
    ctx->pc = 0x14d850u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C530u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C530u, _value); } while (0);
    // 0x14d854: 0x3c0e0051  lui         $t6, 0x51
    ctx->pc = 0x14d854u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)81 << 16));
    // 0x14d858: 0xad20c534  sw          $zero, -0x3ACC($t1)
    ctx->pc = 0x14d858u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C534u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C534u, _value); } while (0);
    // 0x14d85c: 0x3c0f0051  lui         $t7, 0x51
    ctx->pc = 0x14d85cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)81 << 16));
    // 0x14d860: 0xa140c531  sb          $zero, -0x3ACF($t2)
    ctx->pc = 0x14d860u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C531u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C531u, _value); } while (0);
    // 0x14d864: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x14d864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x14d868: 0xad604100  sw          $zero, 0x4100($t3)
    ctx->pc = 0x14d868u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E4100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E4100u, _value); } while (0);
    // 0x14d86c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x14d86cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x14d870: 0xad8038c0  sw          $zero, 0x38C0($t4)
    ctx->pc = 0x14d870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E38C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E38C0u, _value); } while (0);
    // 0x14d874: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14d874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14d878: 0xada03940  sw          $zero, 0x3940($t5)
    ctx->pc = 0x14d878u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E3940u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E3940u, _value); } while (0);
    // 0x14d87c: 0x244cc248  addiu       $t4, $v0, -0x3DB8
    ctx->pc = 0x14d87cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951496));
    // 0x14d880: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x14d880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5E41C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5E41C8u, _value); } while (0);
    // 0x14d884: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14d884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14d888: 0xadc0c510  sw          $zero, -0x3AF0($t6)
    ctx->pc = 0x14d888u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C510u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C510u, _value); } while (0);
    // 0x14d88c: 0x2419ffff  addiu       $t9, $zero, -0x1
    ctx->pc = 0x14d88cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d890: 0xa1e0c514  sb          $zero, -0x3AEC($t7)
    ctx->pc = 0x14d890u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x50C514u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x50C514u, _value); } while (0);
    // 0x14d894: 0x244ac368  addiu       $t2, $v0, -0x3C98
    ctx->pc = 0x14d894u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951784));
    // 0x14d898: 0x246bc278  addiu       $t3, $v1, -0x3D88
    ctx->pc = 0x14d898u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951544));
    // 0x14d89c: 0x2489c308  addiu       $t1, $a0, -0x3CF8
    ctx->pc = 0x14d89cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951688));
    // 0x14d8a0: 0x24a8c2a8  addiu       $t0, $a1, -0x3D58
    ctx->pc = 0x14d8a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951592));
    // 0x14d8a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x14d8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d8a8:
    // 0x14d8a8: 0xa5000000  sh          $zero, 0x0($t0)
    ctx->pc = 0x14d8a8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14d8ac: 0xf81021  addu        $v0, $a3, $t8
    ctx->pc = 0x14d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 24)));
    // 0x14d8b0: 0xa5200000  sh          $zero, 0x0($t1)
    ctx->pc = 0x14d8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x14d8b4: 0xf11821  addu        $v1, $a3, $s1
    ctx->pc = 0x14d8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x14d8b8: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x14d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x14d8bc: 0xf02021  addu        $a0, $a3, $s0
    ctx->pc = 0x14d8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x14d8c0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x14d8c0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d8c4: 0xec2821  addu        $a1, $a3, $t4
    ctx->pc = 0x14d8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x14d8c8: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x14d8c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d8cc: 0xeb3021  addu        $a2, $a3, $t3
    ctx->pc = 0x14d8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 11)));
    // 0x14d8d0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x14d8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d8d4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x14d8d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x14d8d8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x14d8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x14d8dc: 0x25290002  addiu       $t1, $t1, 0x2
    ctx->pc = 0x14d8dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
    // 0x14d8e0: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x14d8e0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x14d8e4: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x14d8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x14d8e8: 0x28e20030  slti        $v0, $a3, 0x30
    ctx->pc = 0x14d8e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x14d8ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14D8ECu;
    {
        const bool branch_taken_0x14d8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D8ECu;
        // 0x14d8f0: 0xa0d90000  sb          $t9, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d8ec) {
            ctx->pc = 0x14D8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d8a8;
        }
    }
    ctx->pc = 0x14D8F4u;
    // 0x14d8f4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x14d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x14d8f8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x14d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x14d8fc: 0x2442c4f0  addiu       $v0, $v0, -0x3B10
    ctx->pc = 0x14d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952176));
    // 0x14d900: 0x2463c4e8  addiu       $v1, $v1, -0x3B18
    ctx->pc = 0x14d900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952168));
    // 0x14d904: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x14d904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x14d908: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x14d908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14d90c: 0x0  nop
    ctx->pc = 0x14d90cu;
    // NOP
label_14d910:
    // 0x14d910: 0xa4640000  sh          $a0, 0x0($v1)
    ctx->pc = 0x14d910u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x14d914: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x14d914u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x14d918: 0xa4440000  sh          $a0, 0x0($v0)
    ctx->pc = 0x14d918u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x14d91c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x14d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x14d920: 0x4e1fffb  bgez        $a3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D920u;
    {
        const bool branch_taken_0x14d920 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x14D924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D920u;
        // 0x14d924: 0x24420002  addiu       $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d920) {
            ctx->pc = 0x14D910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d910;
        }
    }
    ctx->pc = 0x14D928u;
    // 0x14d928: 0xc110044  jal         func_440110
    ctx->pc = 0x14D928u;
    SET_GPR_U32(ctx, 31, 0x14D930u);
    ctx->pc = 0x14D92Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D928u;
    // 0x14d92c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440110u, 0x14D928u, 0x14D930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D930u;
label_14d930:
    // 0x14d930: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x14d930u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x14d934: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x14d934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x14d938: 0x24504180  addiu       $s0, $v0, 0x4180
    ctx->pc = 0x14d938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16768));
    // 0x14d93c: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x14d93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_14d940:
    // 0x14d940: 0x26444180  addiu       $a0, $s2, 0x4180
    ctx->pc = 0x14d940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16768));
    // 0x14d944: 0x34a52345  ori         $a1, $a1, 0x2345
    ctx->pc = 0x14d944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9029);
    // 0x14d948: 0xc1101d6  jal         func_440758
    ctx->pc = 0x14D948u;
    SET_GPR_U32(ctx, 31, 0x14D950u);
    ctx->pc = 0x14D94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D948u;
    // 0x14d94c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440758u, 0x14D948u, 0x14D950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D950u;
label_14d950:
    // 0x14d950: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D950u;
    {
        const bool branch_taken_0x14d950 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x14D954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D950u;
        // 0x14d954: 0x2407270f  addiu       $a3, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d950) {
            ctx->pc = 0x14D978u;
            goto label_14d978;
        }
    }
    ctx->pc = 0x14D958u;
    // 0x14d958: 0xc10fe1c  jal         func_43F870
    ctx->pc = 0x14D958u;
    SET_GPR_U32(ctx, 31, 0x14D960u);
    ctx->pc = 0x14D95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D958u;
    // 0x14d95c: 0x2624b7a8  addiu       $a0, $s1, -0x4858 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294948776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43F870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43F870u, 0x14D958u, 0x14D960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D960u;
label_14d960:
    // 0x14d960: 0x0  nop
    ctx->pc = 0x14d960u;
    // NOP
    // 0x14d964: 0x0  nop
    ctx->pc = 0x14d964u;
    // NOP
    // 0x14d968: 0x0  nop
    ctx->pc = 0x14d968u;
    // NOP
    // 0x14d96c: 0x0  nop
    ctx->pc = 0x14d96cu;
    // NOP
    // 0x14d970: 0x1000fffb  b           . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D970u;
    {
        const bool branch_taken_0x14d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d970) {
            ctx->pc = 0x14D960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d960;
        }
    }
    ctx->pc = 0x14D978u;
label_14d978:
    // 0x14d978: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x14d978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14d97c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x14d97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_14d980:
    // 0x14d980: 0x0  nop
    ctx->pc = 0x14d980u;
    // NOP
    // 0x14d984: 0x0  nop
    ctx->pc = 0x14d984u;
    // NOP
    // 0x14d988: 0x0  nop
    ctx->pc = 0x14d988u;
    // NOP
    // 0x14d98c: 0x0  nop
    ctx->pc = 0x14d98cu;
    // NOP
    // 0x14d990: 0x14e2fffb  bne         $a3, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14D990u;
    {
        const bool branch_taken_0x14d990 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x14D994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D990u;
        // 0x14d994: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d990) {
            ctx->pc = 0x14D980u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d980;
        }
    }
    ctx->pc = 0x14D998u;
    // 0x14d998: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x14d998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x14d99c: 0x1040ffe8  beqz        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x14D99Cu;
    {
        const bool branch_taken_0x14d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D99Cu;
        // 0x14d9a0: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d99c) {
            ctx->pc = 0x14D940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14d940;
        }
    }
    ctx->pc = 0x14D9A4u;
    // 0x14d9a4: 0xc05471c  jal         func_151C70
    ctx->pc = 0x14D9A4u;
    SET_GPR_U32(ctx, 31, 0x14D9ACu);
    ctx->pc = 0x151C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151C70u, 0x14D9A4u, 0x14D9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14D9ACu;
label_14d9ac:
    // 0x14d9ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14d9acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14d9b0:
    // 0x14d9b0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x14d9b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d9b4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x14d9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d9b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14d9b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14d9bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x14d9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D9C0u;
        // 0x14d9c4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D9C8u;
}
