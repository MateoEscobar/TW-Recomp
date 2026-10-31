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

// Function: sub_00164178
// Address: 0x164178 - 0x1642b0
void sub_00164178_0x164178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164178_0x164178");
#endif

    switch (ctx->pc) {
        case 0x1641bcu: goto label_1641bc;
        case 0x1641e0u: goto label_1641e0;
        case 0x164200u: goto label_164200;
        case 0x16422cu: goto label_16422c;
        case 0x164258u: goto label_164258;
        case 0x164278u: goto label_164278;
        default: break;
    }

    ctx->pc = 0x164178u;

    // 0x164178: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x164178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x16417c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x16417cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x164180: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x164180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x164184: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x164184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164188: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x164188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x16418c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x16418cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164190: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x164190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x164194: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x164194u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164198: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x164198u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16419c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x16419cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1641a0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1641a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1641a4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1641a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1641a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1641a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1641ac: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1641acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1641b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1641b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1641b4: 0xc058fc4  jal         func_163F10
    ctx->pc = 0x1641B4u;
    SET_GPR_U32(ctx, 31, 0x1641BCu);
    ctx->pc = 0x1641B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641B4u;
    // 0x1641b8: 0x37a70004  ori         $a3, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x163F10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163F10u, 0x1641B4u, 0x1641BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1641BCu;
label_1641bc:
    // 0x1641bc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1641bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1641c0: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1641C0u;
    {
        const bool branch_taken_0x1641c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641C0u;
        // 0x1641c4: 0x72102b  sltu        $v0, $v1, $s2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641c0) {
            ctx->pc = 0x164284u;
            goto label_164284;
        }
    }
    ctx->pc = 0x1641C8u;
    // 0x1641c8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1641C8u;
    {
        const bool branch_taken_0x1641c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641C8u;
        // 0x1641cc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641c8) {
            ctx->pc = 0x164248u;
            goto label_164248;
        }
    }
    ctx->pc = 0x1641D0u;
    // 0x1641d0: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1641D0u;
    {
        const bool branch_taken_0x1641d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641D0u;
        // 0x1641d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641d0) {
            ctx->pc = 0x164284u;
            goto label_164284;
        }
    }
    ctx->pc = 0x1641D8u;
    // 0x1641d8: 0x3c17006f  lui         $s7, 0x6F
    ctx->pc = 0x1641d8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)111 << 16));
    // 0x1641dc: 0x24160028  addiu       $s6, $zero, 0x28
    ctx->pc = 0x1641dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_1641e0:
    // 0x1641e0: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x1641e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x1641e4: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1641e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1641e8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1641e8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1641ec: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1641ECu;
    {
        const bool branch_taken_0x1641ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1641F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1641ECu;
        // 0x1641f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1641ec) {
            ctx->pc = 0x164208u;
            goto label_164208;
        }
    }
    ctx->pc = 0x1641F4u;
    // 0x1641f4: 0x26e4b878  addiu       $a0, $s7, -0x4788
    ctx->pc = 0x1641f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294948984));
    // 0x1641f8: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x1641F8u;
    SET_GPR_U32(ctx, 31, 0x164200u);
    ctx->pc = 0x1641FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1641F8u;
    // 0x1641fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x1641F8u, 0x164200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164200u;
label_164200:
    // 0x164200: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x164200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x164204: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x164204u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_164208:
    // 0x164208: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x164208u;
    {
        const bool branch_taken_0x164208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164208u;
        // 0x16420c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164208) {
            ctx->pc = 0x16422Cu;
            goto label_16422c;
        }
    }
    ctx->pc = 0x164210u;
    // 0x164210: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x164210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164214: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x164214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164218: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x164218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x16421c: 0x961018  mult        $v0, $a0, $s6
    ctx->pc = 0x16421cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x164220: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x164220u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x164224: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x164224u;
    SET_GPR_U32(ctx, 31, 0x16422Cu);
    ctx->pc = 0x164228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164224u;
    // 0x164228: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x164224u, 0x16422Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16422Cu;
label_16422c:
    // 0x16422c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x16422cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x164230: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x164230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x164234: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x164234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x164238: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x164238u;
    {
        const bool branch_taken_0x164238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164238u;
        // 0x16423c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164238) {
            ctx->pc = 0x1641E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1641e0;
        }
    }
    ctx->pc = 0x164240u;
    // 0x164240: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x164240u;
    {
        const bool branch_taken_0x164240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164240u;
        // 0x164244: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164240) {
            ctx->pc = 0x164288u;
            goto label_164288;
        }
    }
    ctx->pc = 0x164248u;
label_164248:
    // 0x164248: 0x1240000e  beqz        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x164248u;
    {
        const bool branch_taken_0x164248 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164248u;
        // 0x16424c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164248) {
            ctx->pc = 0x164284u;
            goto label_164284;
        }
    }
    ctx->pc = 0x164250u;
    // 0x164250: 0x24130028  addiu       $s3, $zero, 0x28
    ctx->pc = 0x164250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x164254: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x164254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_164258:
    // 0x164258: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x164258u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16425c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16425cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x164260: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x164260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x164264: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x164264u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x164268: 0x931018  mult        $v0, $a0, $s3
    ctx->pc = 0x164268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16426c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16426cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x164270: 0xc042f0e  jal         func_10BC38
    ctx->pc = 0x164270u;
    SET_GPR_U32(ctx, 31, 0x164278u);
    ctx->pc = 0x164274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164270u;
    // 0x164274: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10BC38u, 0x164270u, 0x164278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164278u;
label_164278:
    // 0x164278: 0x212182b  sltu        $v1, $s0, $s2
    ctx->pc = 0x164278u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x16427c: 0x5460fff6  bnel        $v1, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x16427Cu;
    {
        const bool branch_taken_0x16427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16427c) {
            ctx->pc = 0x164280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16427Cu;
            // 0x164280: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164258;
        }
    }
    ctx->pc = 0x164284u;
label_164284:
    // 0x164284: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x164284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_164288:
    // 0x164288: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x164288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16428c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x16428cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164290: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x164290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164294: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x164294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x164298: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x164298u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16429c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x16429cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1642a0: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1642a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1642a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1642a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1642a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1642A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1642ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1642A8u;
        // 0x1642ac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1642A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1642B0u;
}
