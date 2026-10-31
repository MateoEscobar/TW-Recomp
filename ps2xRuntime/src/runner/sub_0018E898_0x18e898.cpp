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

// Function: sub_0018E898
// Address: 0x18e898 - 0x18e9d8
void sub_0018E898_0x18e898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018E898_0x18e898");
#endif

    switch (ctx->pc) {
        case 0x18e898u: goto label_18e898;
        case 0x18e89cu: goto label_18e89c;
        case 0x18e8a0u: goto label_18e8a0;
        case 0x18e8a4u: goto label_18e8a4;
        case 0x18e8a8u: goto label_18e8a8;
        case 0x18e8acu: goto label_18e8ac;
        case 0x18e8b0u: goto label_18e8b0;
        case 0x18e8b4u: goto label_18e8b4;
        case 0x18e8b8u: goto label_18e8b8;
        case 0x18e8bcu: goto label_18e8bc;
        case 0x18e8c0u: goto label_18e8c0;
        case 0x18e8c4u: goto label_18e8c4;
        case 0x18e8c8u: goto label_18e8c8;
        case 0x18e8ccu: goto label_18e8cc;
        case 0x18e8d0u: goto label_18e8d0;
        case 0x18e8d4u: goto label_18e8d4;
        case 0x18e8d8u: goto label_18e8d8;
        case 0x18e8dcu: goto label_18e8dc;
        case 0x18e8e0u: goto label_18e8e0;
        case 0x18e8e4u: goto label_18e8e4;
        case 0x18e8e8u: goto label_18e8e8;
        case 0x18e8ecu: goto label_18e8ec;
        case 0x18e8f0u: goto label_18e8f0;
        case 0x18e8f4u: goto label_18e8f4;
        case 0x18e8f8u: goto label_18e8f8;
        case 0x18e8fcu: goto label_18e8fc;
        case 0x18e900u: goto label_18e900;
        case 0x18e904u: goto label_18e904;
        case 0x18e908u: goto label_18e908;
        case 0x18e90cu: goto label_18e90c;
        case 0x18e910u: goto label_18e910;
        case 0x18e914u: goto label_18e914;
        case 0x18e918u: goto label_18e918;
        case 0x18e91cu: goto label_18e91c;
        case 0x18e920u: goto label_18e920;
        case 0x18e924u: goto label_18e924;
        case 0x18e928u: goto label_18e928;
        case 0x18e92cu: goto label_18e92c;
        case 0x18e930u: goto label_18e930;
        case 0x18e934u: goto label_18e934;
        case 0x18e938u: goto label_18e938;
        case 0x18e93cu: goto label_18e93c;
        case 0x18e940u: goto label_18e940;
        case 0x18e944u: goto label_18e944;
        case 0x18e948u: goto label_18e948;
        case 0x18e94cu: goto label_18e94c;
        case 0x18e950u: goto label_18e950;
        case 0x18e954u: goto label_18e954;
        case 0x18e958u: goto label_18e958;
        case 0x18e95cu: goto label_18e95c;
        case 0x18e960u: goto label_18e960;
        case 0x18e964u: goto label_18e964;
        case 0x18e968u: goto label_18e968;
        case 0x18e96cu: goto label_18e96c;
        case 0x18e970u: goto label_18e970;
        case 0x18e974u: goto label_18e974;
        case 0x18e978u: goto label_18e978;
        case 0x18e97cu: goto label_18e97c;
        case 0x18e980u: goto label_18e980;
        case 0x18e984u: goto label_18e984;
        case 0x18e988u: goto label_18e988;
        case 0x18e98cu: goto label_18e98c;
        case 0x18e990u: goto label_18e990;
        case 0x18e994u: goto label_18e994;
        case 0x18e998u: goto label_18e998;
        case 0x18e99cu: goto label_18e99c;
        case 0x18e9a0u: goto label_18e9a0;
        case 0x18e9a4u: goto label_18e9a4;
        case 0x18e9a8u: goto label_18e9a8;
        case 0x18e9acu: goto label_18e9ac;
        case 0x18e9b0u: goto label_18e9b0;
        case 0x18e9b4u: goto label_18e9b4;
        case 0x18e9b8u: goto label_18e9b8;
        case 0x18e9bcu: goto label_18e9bc;
        case 0x18e9c0u: goto label_18e9c0;
        case 0x18e9c4u: goto label_18e9c4;
        case 0x18e9c8u: goto label_18e9c8;
        case 0x18e9ccu: goto label_18e9cc;
        case 0x18e9d0u: goto label_18e9d0;
        case 0x18e9d4u: goto label_18e9d4;
        default: break;
    }

    ctx->pc = 0x18e898u;

label_18e898:
    // 0x18e898: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18e898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_18e89c:
    // 0x18e89c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18e89cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_18e8a0:
    // 0x18e8a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18e8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_18e8a4:
    // 0x18e8a4: 0x24428d60  addiu       $v0, $v0, -0x72A0
    ctx->pc = 0x18e8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937952));
label_18e8a8:
    // 0x18e8a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x18e8a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_18e8ac:
    // 0x18e8ac: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x18e8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18e8b0:
    // 0x18e8b0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x18e8b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_18e8b4:
    // 0x18e8b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x18e8b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_18e8b8:
    // 0x18e8b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18e8bc:
    // 0x18e8bc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18e8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18e8c0:
    // 0x18e8c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x18e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_18e8c4:
    // 0x18e8c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x18e8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e8c8:
    // 0x18e8c8: 0x8e470014  lw          $a3, 0x14($s2)
    ctx->pc = 0x18e8c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e8cc:
    // 0x18e8cc: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x18e8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_18e8d0:
    // 0x18e8d0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x18e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_18e8d4:
    // 0x18e8d4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x18e8d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_18e8d8:
    // 0x18e8d8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x18e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_18e8dc:
    // 0x18e8dc: 0x60f809  jalr        $v1
label_18e8e0:
    if (ctx->pc == 0x18E8E0u) {
        ctx->pc = 0x18E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8DCu;
        // 0x18e8e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E8E4u;
        goto label_18e8e4;
    }
    ctx->pc = 0x18E8DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18E8E4u);
        ctx->pc = 0x18E8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8DCu;
        // 0x18e8e0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E8DCu, 0x18E8E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E8E4u;
label_18e8e4:
    // 0x18e8e4: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x18e8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18e8e8:
    // 0x18e8e8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x18e8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e8ec:
    // 0x18e8ec: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18e8f0:
    // 0x18e8f0: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x18e8f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_18e8f4:
    // 0x18e8f4: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x18e8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_18e8f8:
    // 0x18e8f8: 0x60f809  jalr        $v1
label_18e8fc:
    if (ctx->pc == 0x18E8FCu) {
        ctx->pc = 0x18E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8F8u;
        // 0x18e8fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E900u;
        goto label_18e900;
    }
    ctx->pc = 0x18E8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18E900u);
        ctx->pc = 0x18E8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E8F8u;
        // 0x18e8fc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E8F8u, 0x18E900u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E900u;
label_18e900:
    // 0x18e900: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x18e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_18e904:
    // 0x18e904: 0x3c050019  lui         $a1, 0x19
    ctx->pc = 0x18e904u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)25 << 16));
label_18e908:
    // 0x18e908: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18e908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18e90c:
    // 0x18e90c: 0xc1223ec  jal         func_488FB0
label_18e910:
    if (ctx->pc == 0x18E910u) {
        ctx->pc = 0x18E910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E90Cu;
        // 0x18e910: 0x24a5e7d8  addiu       $a1, $a1, -0x1828 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E914u;
        goto label_18e914;
    }
    ctx->pc = 0x18E90Cu;
    SET_GPR_U32(ctx, 31, 0x18E914u);
    ctx->pc = 0x18E910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E90Cu;
    // 0x18e910: 0x24a5e7d8  addiu       $a1, $a1, -0x1828 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488FB0u, 0x18E90Cu, 0x18E914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E914u;
label_18e914:
    // 0x18e914: 0xc122316  jal         func_488C58
label_18e918:
    if (ctx->pc == 0x18E918u) {
        ctx->pc = 0x18E918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E914u;
        // 0x18e918: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E91Cu;
        goto label_18e91c;
    }
    ctx->pc = 0x18E914u;
    SET_GPR_U32(ctx, 31, 0x18E91Cu);
    ctx->pc = 0x18E918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E914u;
    // 0x18e918: 0x8e44000c  lw          $a0, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x488C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488C58u, 0x18E914u, 0x18E91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E91Cu;
label_18e91c:
    // 0x18e91c: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x18e91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18e920:
    // 0x18e920: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x18e920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e924:
    // 0x18e924: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18e928:
    // 0x18e928: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x18e928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_18e92c:
    // 0x18e92c: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x18e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_18e930:
    // 0x18e930: 0x60f809  jalr        $v1
label_18e934:
    if (ctx->pc == 0x18E934u) {
        ctx->pc = 0x18E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E930u;
        // 0x18e934: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E938u;
        goto label_18e938;
    }
    ctx->pc = 0x18E930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18E938u);
        ctx->pc = 0x18E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E930u;
        // 0x18e934: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E930u, 0x18E938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E938u;
label_18e938:
    // 0x18e938: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x18e938u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e93c:
    // 0x18e93c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18e940:
    // 0x18e940: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x18e940u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_18e944:
    // 0x18e944: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x18e944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_18e948:
    // 0x18e948: 0x40f809  jalr        $v0
label_18e94c:
    if (ctx->pc == 0x18E94Cu) {
        ctx->pc = 0x18E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E948u;
        // 0x18e94c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E950u;
        goto label_18e950;
    }
    ctx->pc = 0x18E948u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18E950u);
        ctx->pc = 0x18E94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E948u;
        // 0x18e94c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E948u, 0x18E950u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E950u;
label_18e950:
    // 0x18e950: 0x8e0627e4  lw          $a2, 0x27E4($s0)
    ctx->pc = 0x18e950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
label_18e954:
    // 0x18e954: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x18e954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e958:
    // 0x18e958: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18e958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18e95c:
    // 0x18e95c: 0x844400d0  lh          $a0, 0xD0($v0)
    ctx->pc = 0x18e95cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 208)));
label_18e960:
    // 0x18e960: 0x8c4300d4  lw          $v1, 0xD4($v0)
    ctx->pc = 0x18e960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_18e964:
    // 0x18e964: 0x60f809  jalr        $v1
label_18e968:
    if (ctx->pc == 0x18E968u) {
        ctx->pc = 0x18E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E964u;
        // 0x18e968: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E96Cu;
        goto label_18e96c;
    }
    ctx->pc = 0x18E964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18E96Cu);
        ctx->pc = 0x18E968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E964u;
        // 0x18e968: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E964u, 0x18E96Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E96Cu;
label_18e96c:
    // 0x18e96c: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x18e96cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e970:
    // 0x18e970: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x18e970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_18e974:
    // 0x18e974: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x18e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_18e978:
    // 0x18e978: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x18e978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_18e97c:
    // 0x18e97c: 0x8c430094  lw          $v1, 0x94($v0)
    ctx->pc = 0x18e97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
label_18e980:
    // 0x18e980: 0x60f809  jalr        $v1
label_18e984:
    if (ctx->pc == 0x18E984u) {
        ctx->pc = 0x18E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E980u;
        // 0x18e984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E988u;
        goto label_18e988;
    }
    ctx->pc = 0x18E980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x18E988u);
        ctx->pc = 0x18E984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E980u;
        // 0x18e984: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E980u, 0x18E988u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18E988u;
label_18e988:
    // 0x18e988: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x18e988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_18e98c:
    // 0x18e98c: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x18e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_18e990:
    // 0x18e990: 0x24a53000  addiu       $a1, $a1, 0x3000
    ctx->pc = 0x18e990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12288));
label_18e994:
    // 0x18e994: 0xc1378f6  jal         func_4DE3D8
label_18e998:
    if (ctx->pc == 0x18E998u) {
        ctx->pc = 0x18E998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E994u;
        // 0x18e998: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E99Cu;
        goto label_18e99c;
    }
    ctx->pc = 0x18E994u;
    SET_GPR_U32(ctx, 31, 0x18E99Cu);
    ctx->pc = 0x18E998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E994u;
    // 0x18e998: 0x2406005a  addiu       $a2, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE3D8u, 0x18E994u, 0x18E99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E99Cu;
label_18e99c:
    // 0x18e99c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x18e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_18e9a0:
    // 0x18e9a0: 0x32310001  andi        $s1, $s1, 0x1
    ctx->pc = 0x18e9a0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_18e9a4:
    // 0x18e9a4: 0x244289f8  addiu       $v0, $v0, -0x7608
    ctx->pc = 0x18e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937080));
label_18e9a8:
    // 0x18e9a8: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x18e9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_18e9ac:
    // 0x18e9ac: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_18e9b0:
    if (ctx->pc == 0x18E9B0u) {
        ctx->pc = 0x18E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ACu;
        // 0x18e9b0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9B4u;
        goto label_18e9b4;
    }
    ctx->pc = 0x18E9ACu;
    {
        const bool branch_taken_0x18e9ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x18E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9ACu;
        // 0x18e9b0: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18e9ac) {
            ctx->pc = 0x18E9BCu;
            goto label_18e9bc;
        }
    }
    ctx->pc = 0x18E9B4u;
label_18e9b4:
    // 0x18e9b4: 0xc10b208  jal         func_42C820
label_18e9b8:
    if (ctx->pc == 0x18E9B8u) {
        ctx->pc = 0x18E9B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9B4u;
        // 0x18e9b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9BCu;
        goto label_18e9bc;
    }
    ctx->pc = 0x18E9B4u;
    SET_GPR_U32(ctx, 31, 0x18E9BCu);
    ctx->pc = 0x18E9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18E9B4u;
    // 0x18e9b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x18E9B4u, 0x18E9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18E9BCu;
label_18e9bc:
    // 0x18e9bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x18e9bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_18e9c0:
    // 0x18e9c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x18e9c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_18e9c4:
    // 0x18e9c4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x18e9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18e9c8:
    // 0x18e9c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18e9c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18e9cc:
    // 0x18e9cc: 0x3e00008  jr          $ra
label_18e9d0:
    if (ctx->pc == 0x18E9D0u) {
        ctx->pc = 0x18E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9CCu;
        // 0x18e9d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18E9D4u;
        goto label_18e9d4;
    }
    ctx->pc = 0x18E9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18E9CCu;
        // 0x18e9d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18E9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18E9D4u;
label_18e9d4:
    // 0x18e9d4: 0x0  nop
    ctx->pc = 0x18e9d4u;
    // NOP
    ctx->pc = 0x18e9d8u;
}
