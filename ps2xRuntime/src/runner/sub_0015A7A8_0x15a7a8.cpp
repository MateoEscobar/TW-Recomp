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

// Function: sub_0015A7A8
// Address: 0x15a7a8 - 0x15a900
void sub_0015A7A8_0x15a7a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A7A8_0x15a7a8");
#endif

    switch (ctx->pc) {
        case 0x15a848u: goto label_15a848;
        case 0x15a858u: goto label_15a858;
        case 0x15a868u: goto label_15a868;
        case 0x15a878u: goto label_15a878;
        case 0x15a890u: goto label_15a890;
        case 0x15a8c0u: goto label_15a8c0;
        default: break;
    }

    ctx->pc = 0x15a7a8u;

    // 0x15a7a8: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a7ac: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15a7acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15a7b0: 0x8c62c71c  lw          $v0, -0x38E4($v1)
    ctx->pc = 0x15a7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x50C71Cu));
    // 0x15a7b4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15a7b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15a7bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x15a7bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a7c0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15a7c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15a7c4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15A7C4u;
    {
        const bool branch_taken_0x15a7c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7C4u;
        // 0x15a7c8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7c4) {
            ctx->pc = 0x15A804u;
            goto label_15a804;
        }
    }
    ctx->pc = 0x15A7CCu;
    // 0x15a7cc: 0x8c825d80  lw          $v0, 0x5D80($a0)
    ctx->pc = 0x15a7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23936)));
    // 0x15a7d0: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x15A7D0u;
    {
        const bool branch_taken_0x15a7d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7D0u;
        // 0x15a7d4: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7d0) {
            ctx->pc = 0x15A8E0u;
            goto label_15a8e0;
        }
    }
    ctx->pc = 0x15A7D8u;
    // 0x15a7d8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a7dc: 0x8c43c720  lw          $v1, -0x38E0($v0)
    ctx->pc = 0x15a7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C720u));
    // 0x15a7e0: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x15A7E0u;
    {
        const bool branch_taken_0x15a7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7E0u;
        // 0x15a7e4: 0x8c835d80  lw          $v1, 0x5D80($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7e0) {
            ctx->pc = 0x15A808u;
            goto label_15a808;
        }
    }
    ctx->pc = 0x15A7E8u;
    // 0x15a7e8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a7ec: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15a7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C700u));
    // 0x15a7f0: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x15A7F0u;
    {
        const bool branch_taken_0x15a7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7F0u;
        // 0x15a7f4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7f0) {
            ctx->pc = 0x15A8DCu;
            goto label_15a8dc;
        }
    }
    ctx->pc = 0x15A7F8u;
    // 0x15a7f8: 0x8c43c704  lw          $v1, -0x38FC($v0)
    ctx->pc = 0x15a7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952708)));
    // 0x15a7fc: 0x14600038  bnez        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x15A7FCu;
    {
        const bool branch_taken_0x15a7fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A7FCu;
        // 0x15a800: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a7fc) {
            ctx->pc = 0x15A8E0u;
            goto label_15a8e0;
        }
    }
    ctx->pc = 0x15A804u;
label_15a804:
    // 0x15a804: 0x8c835d80  lw          $v1, 0x5D80($a0)
    ctx->pc = 0x15a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23936)));
label_15a808:
    // 0x15a808: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x15a808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
    // 0x15a80c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a814: 0xac44c708  sw          $a0, -0x38F8($v0)
    ctx->pc = 0x15a814u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x50C708u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x50C708u, _value); } while (0);
    // 0x15a818: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x15A818u;
    {
        const bool branch_taken_0x15a818 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A818u;
        // 0x15a81c: 0xaca0c720  sw          $zero, -0x38E0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294952736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a818) {
            ctx->pc = 0x15A8CCu;
            goto label_15a8cc;
        }
    }
    ctx->pc = 0x15A820u;
    // 0x15a820: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a824: 0x8c43c700  lw          $v1, -0x3900($v0)
    ctx->pc = 0x15a824u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50C700u));
    // 0x15a828: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x15A828u;
    {
        const bool branch_taken_0x15a828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A828u;
        // 0x15a82c: 0x3c020016  lui         $v0, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a828) {
            ctx->pc = 0x15A8D0u;
            goto label_15a8d0;
        }
    }
    ctx->pc = 0x15A830u;
    // 0x15a830: 0x8cc2c71c  lw          $v0, -0x38E4($a2)
    ctx->pc = 0x15a830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294952732)));
    // 0x15a834: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x15A834u;
    {
        const bool branch_taken_0x15a834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a834) {
            ctx->pc = 0x15A838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15A834u;
            // 0x15a838: 0xaca4c720  sw          $a0, -0x38E0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 4294952736), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15A83Cu;
            goto label_15a83c;
        }
    }
    ctx->pc = 0x15A83Cu;
label_15a83c:
    // 0x15a83c: 0x240400a7  addiu       $a0, $zero, 0xA7
    ctx->pc = 0x15a83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x15a840: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A840u;
    SET_GPR_U32(ctx, 31, 0x15A848u);
    ctx->pc = 0x15A844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A840u;
    // 0x15a844: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A840u, 0x15A848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A848u;
label_15a848:
    // 0x15a848: 0x3c100055  lui         $s0, 0x55
    ctx->pc = 0x15a848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)85 << 16));
    // 0x15a84c: 0x240400a7  addiu       $a0, $zero, 0xA7
    ctx->pc = 0x15a84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    // 0x15a850: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A850u;
    SET_GPR_U32(ctx, 31, 0x15A858u);
    ctx->pc = 0x15A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A850u;
    // 0x15a854: 0x2610f190  addiu       $s0, $s0, -0xE70 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A850u, 0x15A858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A858u;
label_15a858:
    // 0x15a858: 0x8e24c738  lw          $a0, -0x38C8($s1)
    ctx->pc = 0x15a858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952760)));
    // 0x15a85c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a860: 0xc10ca28  jal         func_4328A0
    ctx->pc = 0x15A860u;
    SET_GPR_U32(ctx, 31, 0x15A868u);
    ctx->pc = 0x15A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A860u;
    // 0x15a864: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4328A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4328A0u, 0x15A860u, 0x15A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A868u;
label_15a868:
    // 0x15a868: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x15a868u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x15a86c: 0x8e24c738  lw          $a0, -0x38C8($s1)
    ctx->pc = 0x15a86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952760)));
    // 0x15a870: 0xc10d74c  jal         func_435D30
    ctx->pc = 0x15A870u;
    SET_GPR_U32(ctx, 31, 0x15A878u);
    ctx->pc = 0x15A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A870u;
    // 0x15a874: 0x24a5f198  addiu       $a1, $a1, -0xE68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x435D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x435D30u, 0x15A870u, 0x15A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A878u;
label_15a878:
    // 0x15a878: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15a878u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a87c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A87Cu;
    {
        const bool branch_taken_0x15a87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A87Cu;
        // 0x15a880: 0x24020027  addiu       $v0, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a87c) {
            ctx->pc = 0x15A888u;
            goto label_15a888;
        }
    }
    ctx->pc = 0x15A884u;
    // 0x15a884: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x15a884u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_15a888:
    // 0x15a888: 0xc067b9c  jal         func_19EE70
    ctx->pc = 0x15A888u;
    SET_GPR_U32(ctx, 31, 0x15A890u);
    ctx->pc = 0x15A88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A888u;
    // 0x15a88c: 0x240400bc  addiu       $a0, $zero, 0xBC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19EE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EE70u, 0x15A888u, 0x15A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A890u;
label_15a890:
    // 0x15a890: 0x3c030016  lui         $v1, 0x16
    ctx->pc = 0x15a890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22 << 16));
    // 0x15a894: 0x8e25c738  lw          $a1, -0x38C8($s1)
    ctx->pc = 0x15a894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294952760)));
    // 0x15a898: 0x2463b8d8  addiu       $v1, $v1, -0x4728
    ctx->pc = 0x15a898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949080));
    // 0x15a89c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x15a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x15a8a0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x15a8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x15a8a4: 0x24845840  addiu       $a0, $a0, 0x5840
    ctx->pc = 0x15a8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22592));
    // 0x15a8a8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x15a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x15a8ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x15a8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a8b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x15a8b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15a8b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a8b8: 0xc071c4a  jal         func_1C7128
    ctx->pc = 0x15A8B8u;
    SET_GPR_U32(ctx, 31, 0x15A8C0u);
    ctx->pc = 0x15A8BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15A8B8u;
    // 0x15a8bc: 0x37a90004  ori         $t1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7128u, 0x15A8B8u, 0x15A8C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15A8C0u;
label_15a8c0:
    // 0x15a8c0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x15a8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x15a8c4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15A8C4u;
    {
        const bool branch_taken_0x15a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8C4u;
        // 0x15a8c8: 0xac40c734  sw          $zero, -0x38CC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952756), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8c4) {
            ctx->pc = 0x15A8ECu;
            goto label_15a8ec;
        }
    }
    ctx->pc = 0x15A8CCu;
label_15a8cc:
    // 0x15a8cc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15a8d0:
    // 0x15a8d0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a8d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15A8D4u;
    {
        const bool branch_taken_0x15a8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8D4u;
        // 0x15a8d8: 0x2442a900  addiu       $v0, $v0, -0x5700 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a8d4) {
            ctx->pc = 0x15A8E8u;
            goto label_15a8e8;
        }
    }
    ctx->pc = 0x15A8DCu;
label_15a8dc:
    // 0x15a8dc: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x15a8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
label_15a8e0:
    // 0x15a8e0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x15a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x15a8e4: 0x2442ac08  addiu       $v0, $v0, -0x53F8
    ctx->pc = 0x15a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945800));
label_15a8e8:
    // 0x15a8e8: 0xac62c734  sw          $v0, -0x38CC($v1)
    ctx->pc = 0x15a8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294952756), GPR_U32(ctx, 2));
label_15a8ec:
    // 0x15a8ec: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15a8ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a8f0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15a8f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a8f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15a8f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15A8F8u;
        // 0x15a8fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15A900u;
}
