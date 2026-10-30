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

// Function: sub_0010D9A0
// Address: 0x10d9a0 - 0x10db18
void sub_0010D9A0_0x10d9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D9A0_0x10d9a0");
#endif

    switch (ctx->pc) {
        case 0x10d9c0u: goto label_10d9c0;
        case 0x10da10u: goto label_10da10;
        case 0x10da94u: goto label_10da94;
        case 0x10da9cu: goto label_10da9c;
        default: break;
    }

    ctx->pc = 0x10d9a0u;

    // 0x10d9a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d9a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d9a4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x10d9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10d9a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x10d9a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x10d9ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10d9acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9b0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x10d9b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x10d9b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10d9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d9b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10d9bc: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x10d9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_10d9c0:
    // 0x10d9c0: 0x2422018  mult        $a0, $s2, $v0
    ctx->pc = 0x10d9c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10d9c4: 0x2241821  addu        $v1, $s1, $a0
    ctx->pc = 0x10d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x10d9c8: 0x8c620070  lw          $v0, 0x70($v1)
    ctx->pc = 0x10d9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
    // 0x10d9cc: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x10D9CCu;
    {
        const bool branch_taken_0x10d9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9CCu;
        // 0x10d9d0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9cc) {
            ctx->pc = 0x10DAECu;
            goto label_10daec;
        }
    }
    ctx->pc = 0x10D9D4u;
    // 0x10d9d4: 0x90440081  lbu         $a0, 0x81($v0)
    ctx->pc = 0x10d9d4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 129)));
    // 0x10d9d8: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x10d9d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x10d9dc: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x10D9DCu;
    {
        const bool branch_taken_0x10d9dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D9DCu;
        // 0x10d9e0: 0x3c020054  lui         $v0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d9dc) {
            ctx->pc = 0x10DAECu;
            goto label_10daec;
        }
    }
    ctx->pc = 0x10D9E4u;
    // 0x10d9e4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x10d9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x10d9e8: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x10d9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
    // 0x10d9ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10d9f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x10d9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x10d9f4: 0x800008  jr          $a0
    ctx->pc = 0x10D9F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10D9FCu: goto label_10d9fc;
            case 0x10DA18u: goto label_10da18;
            case 0x10DA70u: goto label_10da70;
            case 0x10DAA4u: goto label_10daa4;
            case 0x10DAECu: goto label_10daec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D9F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x10D9FCu;
label_10d9fc:
    // 0x10d9fc: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x10d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10da00: 0x2442018  mult        $a0, $s2, $a0
    ctx->pc = 0x10da00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x10da04: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x10da04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x10da08: 0xc0467de  jal         func_119F78
    ctx->pc = 0x10DA08u;
    SET_GPR_U32(ctx, 31, 0x10DA10u);
    ctx->pc = 0x10DA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA08u;
    // 0x10da0c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10DA08u, 0x10DA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA10u;
label_10da10:
    // 0x10da10: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x10DA10u;
    {
        const bool branch_taken_0x10da10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA10u;
        // 0x10da14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da10) {
            ctx->pc = 0x10DAF0u;
            goto label_10daf0;
        }
    }
    ctx->pc = 0x10DA18u;
label_10da18:
    // 0x10da18: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x10da18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10da1c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10da1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10da20: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x10da20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x10da24: 0x8c47b734  lw          $a3, -0x48CC($v0)
    ctx->pc = 0x10da24u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x10da28: 0x8e260010  lw          $a2, 0x10($s1)
    ctx->pc = 0x10da28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10da2c: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x10da2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10da30: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x10da30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x10da34: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x10da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x10da38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x10da38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x10da3c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x10da3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x10da40: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10da40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10da44: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x10da44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x10da48: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x10da48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x10da4c: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x10da4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
    // 0x10da50: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x10da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x10da54: 0xa0680011  sb          $t0, 0x11($v1)
    ctx->pc = 0x10da54u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x10da58: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10da58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x10da5c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x10da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x10da60: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x10da60u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10da64: 0xa42823  subu        $a1, $a1, $a0
    ctx->pc = 0x10da64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x10da68: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x10DA68u;
    {
        const bool branch_taken_0x10da68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA68u;
        // 0x10da6c: 0xac650014  sw          $a1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da68) {
            ctx->pc = 0x10DAECu;
            goto label_10daec;
        }
    }
    ctx->pc = 0x10DA70u;
label_10da70:
    // 0x10da70: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x10da70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10da74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10da74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10da78: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x10da78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10da7c: 0x24500070  addiu       $s0, $v0, 0x70
    ctx->pc = 0x10da7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x10da80: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x10da80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x10da84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x10da84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10da88: 0xa0400081  sb          $zero, 0x81($v0)
    ctx->pc = 0x10da88u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 129), (uint8_t)GPR_U32(ctx, 0));
    // 0x10da8c: 0xc043754  jal         func_10DD50
    ctx->pc = 0x10DA8Cu;
    SET_GPR_U32(ctx, 31, 0x10DA94u);
    ctx->pc = 0x10DA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA8Cu;
    // 0x10da90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DD50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DD50u, 0x10DA8Cu, 0x10DA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA94u;
label_10da94:
    // 0x10da94: 0xc0467de  jal         func_119F78
    ctx->pc = 0x10DA94u;
    SET_GPR_U32(ctx, 31, 0x10DA9Cu);
    ctx->pc = 0x10DA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DA94u;
    // 0x10da98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119F78u, 0x10DA94u, 0x10DA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10DA9Cu;
label_10da9c:
    // 0x10da9c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x10DA9Cu;
    {
        const bool branch_taken_0x10da9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10DAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DA9Cu;
        // 0x10daa0: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10da9c) {
            ctx->pc = 0x10DAF0u;
            goto label_10daf0;
        }
    }
    ctx->pc = 0x10DAA4u;
label_10daa4:
    // 0x10daa4: 0x2405004c  addiu       $a1, $zero, 0x4C
    ctx->pc = 0x10daa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10daa8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x10daa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x10daac: 0x2452818  mult        $a1, $s2, $a1
    ctx->pc = 0x10daacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x10dab0: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x10dab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x10dab4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x10dab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x10dab8: 0x8c640038  lw          $a0, 0x38($v1)
    ctx->pc = 0x10dab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x10dabc: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x10dabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x10dac0: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x10dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x10dac4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10dac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dac8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x10dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dacc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10daccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10dad0: 0x8cc20074  lw          $v0, 0x74($a2)
    ctx->pc = 0x10dad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
    // 0x10dad4: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x10dad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10dad8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x10dad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x10dadc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10dae0: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x10dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x10dae4: 0xace40090  sw          $a0, 0x90($a3)
    ctx->pc = 0x10dae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 144), GPR_U32(ctx, 4));
    // 0x10dae8: 0xa0a80081  sb          $t0, 0x81($a1)
    ctx->pc = 0x10dae8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 129), (uint8_t)GPR_U32(ctx, 8));
label_10daec:
    // 0x10daec: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10daecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10daf0:
    // 0x10daf0: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x10daf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x10daf4: 0x5440ffb2  bnel        $v0, $zero, . + 4 + (-0x4E << 2)
    ctx->pc = 0x10DAF4u;
    {
        const bool branch_taken_0x10daf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10daf4) {
            ctx->pc = 0x10DAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10DAF4u;
            // 0x10daf8: 0x2402004c  addiu       $v0, $zero, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10D9C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10d9c0;
        }
    }
    ctx->pc = 0x10DAFCu;
    // 0x10dafc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x10dafcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10db00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10db00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10db04: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x10db04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10db08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10db08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10db0c: 0x3e00008  jr          $ra
    ctx->pc = 0x10DB0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10DB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DB0Cu;
        // 0x10db10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10DB0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10DB14u;
    // 0x10db14: 0x0  nop
    ctx->pc = 0x10db14u;
    // NOP
    ctx->pc = 0x10db18u;
}
