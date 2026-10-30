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

// Function: sub_001BC930
// Address: 0x1bc930 - 0x1bca30
void sub_001BC930_0x1bc930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC930_0x1bc930");
#endif

    switch (ctx->pc) {
        case 0x1bc930u: goto label_1bc930;
        case 0x1bc934u: goto label_1bc934;
        case 0x1bc938u: goto label_1bc938;
        case 0x1bc93cu: goto label_1bc93c;
        case 0x1bc940u: goto label_1bc940;
        case 0x1bc944u: goto label_1bc944;
        case 0x1bc948u: goto label_1bc948;
        case 0x1bc94cu: goto label_1bc94c;
        case 0x1bc950u: goto label_1bc950;
        case 0x1bc954u: goto label_1bc954;
        case 0x1bc958u: goto label_1bc958;
        case 0x1bc95cu: goto label_1bc95c;
        case 0x1bc960u: goto label_1bc960;
        case 0x1bc964u: goto label_1bc964;
        case 0x1bc968u: goto label_1bc968;
        case 0x1bc96cu: goto label_1bc96c;
        case 0x1bc970u: goto label_1bc970;
        case 0x1bc974u: goto label_1bc974;
        case 0x1bc978u: goto label_1bc978;
        case 0x1bc97cu: goto label_1bc97c;
        case 0x1bc980u: goto label_1bc980;
        case 0x1bc984u: goto label_1bc984;
        case 0x1bc988u: goto label_1bc988;
        case 0x1bc98cu: goto label_1bc98c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc994u: goto label_1bc994;
        case 0x1bc998u: goto label_1bc998;
        case 0x1bc99cu: goto label_1bc99c;
        case 0x1bc9a0u: goto label_1bc9a0;
        case 0x1bc9a4u: goto label_1bc9a4;
        case 0x1bc9a8u: goto label_1bc9a8;
        case 0x1bc9acu: goto label_1bc9ac;
        case 0x1bc9b0u: goto label_1bc9b0;
        case 0x1bc9b4u: goto label_1bc9b4;
        case 0x1bc9b8u: goto label_1bc9b8;
        case 0x1bc9bcu: goto label_1bc9bc;
        case 0x1bc9c0u: goto label_1bc9c0;
        case 0x1bc9c4u: goto label_1bc9c4;
        case 0x1bc9c8u: goto label_1bc9c8;
        case 0x1bc9ccu: goto label_1bc9cc;
        case 0x1bc9d0u: goto label_1bc9d0;
        case 0x1bc9d4u: goto label_1bc9d4;
        case 0x1bc9d8u: goto label_1bc9d8;
        case 0x1bc9dcu: goto label_1bc9dc;
        case 0x1bc9e0u: goto label_1bc9e0;
        case 0x1bc9e4u: goto label_1bc9e4;
        case 0x1bc9e8u: goto label_1bc9e8;
        case 0x1bc9ecu: goto label_1bc9ec;
        case 0x1bc9f0u: goto label_1bc9f0;
        case 0x1bc9f4u: goto label_1bc9f4;
        case 0x1bc9f8u: goto label_1bc9f8;
        case 0x1bc9fcu: goto label_1bc9fc;
        case 0x1bca00u: goto label_1bca00;
        case 0x1bca04u: goto label_1bca04;
        case 0x1bca08u: goto label_1bca08;
        case 0x1bca0cu: goto label_1bca0c;
        case 0x1bca10u: goto label_1bca10;
        case 0x1bca14u: goto label_1bca14;
        case 0x1bca18u: goto label_1bca18;
        case 0x1bca1cu: goto label_1bca1c;
        case 0x1bca20u: goto label_1bca20;
        case 0x1bca24u: goto label_1bca24;
        case 0x1bca28u: goto label_1bca28;
        case 0x1bca2cu: goto label_1bca2c;
        default: break;
    }

    ctx->pc = 0x1bc930u;

label_1bc930:
    // 0x1bc930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bc930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1bc934:
    // 0x1bc934: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1bc934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1bc938:
    // 0x1bc938: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bc938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_1bc93c:
    // 0x1bc93c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc93cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bc940:
    // 0x1bc940: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bc940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1bc944:
    // 0x1bc944: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x1bc944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_1bc948:
    // 0x1bc948: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bc948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bc94c:
    // 0x1bc94c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bc94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1bc950:
    // 0x1bc950: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bc950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1bc954:
    // 0x1bc954: 0xc107cfa  jal         func_41F3E8
label_1bc958:
    if (ctx->pc == 0x1BC958u) {
        ctx->pc = 0x1BC958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC954u;
        // 0x1bc958: 0x248414d4  addiu       $a0, $a0, 0x14D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC95Cu;
        goto label_1bc95c;
    }
    ctx->pc = 0x1BC954u;
    SET_GPR_U32(ctx, 31, 0x1BC95Cu);
    ctx->pc = 0x1BC958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC954u;
    // 0x1bc958: 0x248414d4  addiu       $a0, $a0, 0x14D4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41F3E8u, 0x1BC954u, 0x1BC95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC95Cu;
label_1bc95c:
    // 0x1bc95c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_1bc960:
    // 0x1bc960: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1bc960u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc964:
    // 0x1bc964: 0xc050fda  jal         func_143F68
label_1bc968:
    if (ctx->pc == 0x1BC968u) {
        ctx->pc = 0x1BC968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC964u;
        // 0x1bc968: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC96Cu;
        goto label_1bc96c;
    }
    ctx->pc = 0x1BC964u;
    SET_GPR_U32(ctx, 31, 0x1BC96Cu);
    ctx->pc = 0x1BC968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC964u;
    // 0x1bc968: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x1BC964u, 0x1BC96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC96Cu;
label_1bc96c:
    // 0x1bc96c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bc96cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bc970:
    // 0x1bc970: 0xc06f28c  jal         func_1BCA30
label_1bc974:
    if (ctx->pc == 0x1BC974u) {
        ctx->pc = 0x1BC974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC970u;
        // 0x1bc974: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC978u;
        goto label_1bc978;
    }
    ctx->pc = 0x1BC970u;
    SET_GPR_U32(ctx, 31, 0x1BC978u);
    ctx->pc = 0x1BC974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC970u;
    // 0x1bc974: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BCA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BCA30u, 0x1BC970u, 0x1BC978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC978u;
label_1bc978:
    // 0x1bc978: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bc978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc97c:
    // 0x1bc97c: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_1bc980:
    if (ctx->pc == 0x1BC980u) {
        ctx->pc = 0x1BC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC97Cu;
        // 0x1bc980: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC984u;
        goto label_1bc984;
    }
    ctx->pc = 0x1BC97Cu;
    {
        const bool branch_taken_0x1bc97c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC97Cu;
        // 0x1bc980: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc97c) {
            ctx->pc = 0x1BCA18u;
            goto label_1bca18;
        }
    }
    ctx->pc = 0x1BC984u;
label_1bc984:
    // 0x1bc984: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1bc988:
    // 0x1bc988: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x1bc988u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_1bc98c:
    // 0x1bc98c: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1bc98cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1bc990:
    // 0x1bc990: 0x24a54c38  addiu       $a1, $a1, 0x4C38
    ctx->pc = 0x1bc990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19512));
label_1bc994:
    // 0x1bc994: 0x25084c08  addiu       $t0, $t0, 0x4C08
    ctx->pc = 0x1bc994u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 19464));
label_1bc998:
    // 0x1bc998: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1bc998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1bc99c:
    // 0x1bc99c: 0x240608c0  addiu       $a2, $zero, 0x8C0
    ctx->pc = 0x1bc99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2240));
label_1bc9a0:
    // 0x1bc9a0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1bc9a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1bc9a4:
    // 0x1bc9a4: 0x240900cb  addiu       $t1, $zero, 0xCB
    ctx->pc = 0x1bc9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_1bc9a8:
    // 0x1bc9a8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1bc9ac:
    // 0x1bc9ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1bc9acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9b0:
    // 0x1bc9b0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1bc9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1bc9b4:
    // 0x1bc9b4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1bc9b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9b8:
    // 0x1bc9b8: 0x40f809  jalr        $v0
label_1bc9bc:
    if (ctx->pc == 0x1BC9BCu) {
        ctx->pc = 0x1BC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9B8u;
        // 0x1bc9bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9C0u;
        goto label_1bc9c0;
    }
    ctx->pc = 0x1BC9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BC9C0u);
        ctx->pc = 0x1BC9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9B8u;
        // 0x1bc9bc: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BC9B8u, 0x1BC9C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BC9C0u;
label_1bc9c0:
    // 0x1bc9c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bc9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bc9c4:
    // 0x1bc9c4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_1bc9c8:
    if (ctx->pc == 0x1BC9C8u) {
        ctx->pc = 0x1BC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C4u;
        // 0x1bc9c8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9CCu;
        goto label_1bc9cc;
    }
    ctx->pc = 0x1BC9C4u;
    {
        const bool branch_taken_0x1bc9c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9C4u;
        // 0x1bc9c8: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9c4) {
            ctx->pc = 0x1BC9E0u;
            goto label_1bc9e0;
        }
    }
    ctx->pc = 0x1BC9CCu;
label_1bc9cc:
    // 0x1bc9cc: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1bc9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_1bc9d0:
    // 0x1bc9d0: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1bc9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1bc9d4:
    // 0x1bc9d4: 0xc074b80  jal         func_1D2E00
label_1bc9d8:
    if (ctx->pc == 0x1BC9D8u) {
        ctx->pc = 0x1BC9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9D4u;
        // 0x1bc9d8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9DCu;
        goto label_1bc9dc;
    }
    ctx->pc = 0x1BC9D4u;
    SET_GPR_U32(ctx, 31, 0x1BC9DCu);
    ctx->pc = 0x1BC9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9D4u;
    // 0x1bc9d8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2E00u, 0x1BC9D4u, 0x1BC9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BC9DCu;
label_1bc9dc:
    // 0x1bc9dc: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1bc9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
label_1bc9e0:
    // 0x1bc9e0: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1bc9e4:
    // 0x1bc9e4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bc9e8:
    // 0x1bc9e8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1bc9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1bc9ec:
    // 0x1bc9ec: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1bc9f0:
    if (ctx->pc == 0x1BC9F0u) {
        ctx->pc = 0x1BC9F4u;
        goto label_1bc9f4;
    }
    ctx->pc = 0x1BC9ECu;
    {
        const bool branch_taken_0x1bc9ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bc9ec) {
            ctx->pc = 0x1BCA10u;
            goto label_1bca10;
        }
    }
    ctx->pc = 0x1BC9F4u;
label_1bc9f4:
    // 0x1bc9f4: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1bc9f8:
    if (ctx->pc == 0x1BC9F8u) {
        ctx->pc = 0x1BC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F4u;
        // 0x1bc9f8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BC9FCu;
        goto label_1bc9fc;
    }
    ctx->pc = 0x1BC9F4u;
    {
        const bool branch_taken_0x1bc9f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9F4u;
        // 0x1bc9f8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9f4) {
            ctx->pc = 0x1BCA00u;
            goto label_1bca00;
        }
    }
    ctx->pc = 0x1BC9FCu;
label_1bc9fc:
    // 0x1bc9fc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1bc9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1bca00:
    // 0x1bca00: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1bca00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1bca04:
    // 0x1bca04: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1bca04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1bca08:
    // 0x1bca08: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bca0c:
    if (ctx->pc == 0x1BCA0Cu) {
        ctx->pc = 0x1BCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA08u;
        // 0x1bca0c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA10u;
        goto label_1bca10;
    }
    ctx->pc = 0x1BCA08u;
    {
        const bool branch_taken_0x1bca08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BCA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA08u;
        // 0x1bca0c: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bca08) {
            ctx->pc = 0x1BCA18u;
            goto label_1bca18;
        }
    }
    ctx->pc = 0x1BCA10u;
label_1bca10:
    // 0x1bca10: 0xc139356  jal         func_4E4D58
label_1bca14:
    if (ctx->pc == 0x1BCA14u) {
        ctx->pc = 0x1BCA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA10u;
        // 0x1bca14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA18u;
        goto label_1bca18;
    }
    ctx->pc = 0x1BCA10u;
    SET_GPR_U32(ctx, 31, 0x1BCA18u);
    ctx->pc = 0x1BCA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BCA10u;
    // 0x1bca14: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E4D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E4D58u, 0x1BCA10u, 0x1BCA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BCA18u;
label_1bca18:
    // 0x1bca18: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bca18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1bca1c:
    // 0x1bca1c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bca1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1bca20:
    // 0x1bca20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bca20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1bca24:
    // 0x1bca24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bca24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bca28:
    // 0x1bca28: 0x3e00008  jr          $ra
label_1bca2c:
    if (ctx->pc == 0x1BCA2Cu) {
        ctx->pc = 0x1BCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA28u;
        // 0x1bca2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BCA30u;
        goto label_fallthrough_0x1bca28;
    }
    ctx->pc = 0x1BCA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA28u;
        // 0x1bca2c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bca28:
    ctx->pc = 0x1BCA30u;
}
