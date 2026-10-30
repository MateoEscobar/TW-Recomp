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

// Function: sub_003EA198
// Address: 0x3ea198 - 0x3ea260
void sub_003EA198_0x3ea198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA198_0x3ea198");
#endif

    switch (ctx->pc) {
        case 0x3ea198u: goto label_3ea198;
        case 0x3ea19cu: goto label_3ea19c;
        case 0x3ea1a0u: goto label_3ea1a0;
        case 0x3ea1a4u: goto label_3ea1a4;
        case 0x3ea1a8u: goto label_3ea1a8;
        case 0x3ea1acu: goto label_3ea1ac;
        case 0x3ea1b0u: goto label_3ea1b0;
        case 0x3ea1b4u: goto label_3ea1b4;
        case 0x3ea1b8u: goto label_3ea1b8;
        case 0x3ea1bcu: goto label_3ea1bc;
        case 0x3ea1c0u: goto label_3ea1c0;
        case 0x3ea1c4u: goto label_3ea1c4;
        case 0x3ea1c8u: goto label_3ea1c8;
        case 0x3ea1ccu: goto label_3ea1cc;
        case 0x3ea1d0u: goto label_3ea1d0;
        case 0x3ea1d4u: goto label_3ea1d4;
        case 0x3ea1d8u: goto label_3ea1d8;
        case 0x3ea1dcu: goto label_3ea1dc;
        case 0x3ea1e0u: goto label_3ea1e0;
        case 0x3ea1e4u: goto label_3ea1e4;
        case 0x3ea1e8u: goto label_3ea1e8;
        case 0x3ea1ecu: goto label_3ea1ec;
        case 0x3ea1f0u: goto label_3ea1f0;
        case 0x3ea1f4u: goto label_3ea1f4;
        case 0x3ea1f8u: goto label_3ea1f8;
        case 0x3ea1fcu: goto label_3ea1fc;
        case 0x3ea200u: goto label_3ea200;
        case 0x3ea204u: goto label_3ea204;
        case 0x3ea208u: goto label_3ea208;
        case 0x3ea20cu: goto label_3ea20c;
        case 0x3ea210u: goto label_3ea210;
        case 0x3ea214u: goto label_3ea214;
        case 0x3ea218u: goto label_3ea218;
        case 0x3ea21cu: goto label_3ea21c;
        case 0x3ea220u: goto label_3ea220;
        case 0x3ea224u: goto label_3ea224;
        case 0x3ea228u: goto label_3ea228;
        case 0x3ea22cu: goto label_3ea22c;
        case 0x3ea230u: goto label_3ea230;
        case 0x3ea234u: goto label_3ea234;
        case 0x3ea238u: goto label_3ea238;
        case 0x3ea23cu: goto label_3ea23c;
        case 0x3ea240u: goto label_3ea240;
        case 0x3ea244u: goto label_3ea244;
        case 0x3ea248u: goto label_3ea248;
        case 0x3ea24cu: goto label_3ea24c;
        case 0x3ea250u: goto label_3ea250;
        case 0x3ea254u: goto label_3ea254;
        case 0x3ea258u: goto label_3ea258;
        case 0x3ea25cu: goto label_3ea25c;
        default: break;
    }

    ctx->pc = 0x3ea198u;

label_3ea198:
    // 0x3ea198: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3ea198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3ea19c:
    // 0x3ea19c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3ea19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3ea1a0:
    // 0x3ea1a0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3ea1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3ea1a4:
    // 0x3ea1a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3ea1a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea1a8:
    // 0x3ea1a8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3ea1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_3ea1ac:
    // 0x3ea1ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3ea1acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ea1b0:
    // 0x3ea1b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3ea1b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3ea1b4:
    // 0x3ea1b4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3ea1b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ea1b8:
    // 0x3ea1b8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea1bc:
    // 0x3ea1bc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ea1bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ea1c0:
    // 0x3ea1c0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ea1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ea1c4:
    // 0x3ea1c4: 0x40f809  jalr        $v0
label_3ea1c8:
    if (ctx->pc == 0x3EA1C8u) {
        ctx->pc = 0x3EA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1C4u;
        // 0x3ea1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1CCu;
        goto label_3ea1cc;
    }
    ctx->pc = 0x3EA1C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA1CCu);
        ctx->pc = 0x3EA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1C4u;
        // 0x3ea1c8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA1C4u, 0x3EA1CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA1CCu;
label_3ea1cc:
    // 0x3ea1cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ea1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ea1d0:
    // 0x3ea1d0: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x3ea1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_3ea1d4:
    // 0x3ea1d4: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_3ea1d8:
    if (ctx->pc == 0x3EA1D8u) {
        ctx->pc = 0x3EA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1D4u;
        // 0x3ea1d8: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1DCu;
        goto label_3ea1dc;
    }
    ctx->pc = 0x3EA1D4u;
    {
        const bool branch_taken_0x3ea1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1D4u;
        // 0x3ea1d8: 0x2e220016  sltiu       $v0, $s1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1d4) {
            ctx->pc = 0x3EA200u;
            goto label_3ea200;
        }
    }
    ctx->pc = 0x3EA1DCu;
label_3ea1dc:
    // 0x3ea1dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ea1e0:
    if (ctx->pc == 0x3EA1E0u) {
        ctx->pc = 0x3EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1DCu;
        // 0x3ea1e0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1E4u;
        goto label_3ea1e4;
    }
    ctx->pc = 0x3EA1DCu;
    {
        const bool branch_taken_0x3ea1dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1DCu;
        // 0x3ea1e0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1dc) {
            ctx->pc = 0x3EA1F4u;
            goto label_3ea1f4;
        }
    }
    ctx->pc = 0x3EA1E4u;
label_3ea1e4:
    // 0x3ea1e4: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
label_3ea1e8:
    if (ctx->pc == 0x3EA1E8u) {
        ctx->pc = 0x3EA1ECu;
        goto label_3ea1ec;
    }
    ctx->pc = 0x3EA1E4u;
    {
        const bool branch_taken_0x3ea1e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x3ea1e4) {
            ctx->pc = 0x3EA224u;
            goto label_3ea224;
        }
    }
    ctx->pc = 0x3EA1ECu;
label_3ea1ec:
    // 0x3ea1ec: 0x10000017  b           . + 4 + (0x17 << 2)
label_3ea1f0:
    if (ctx->pc == 0x3EA1F0u) {
        ctx->pc = 0x3EA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1ECu;
        // 0x3ea1f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA1F4u;
        goto label_3ea1f4;
    }
    ctx->pc = 0x3EA1ECu;
    {
        const bool branch_taken_0x3ea1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1ECu;
        // 0x3ea1f0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea1ec) {
            ctx->pc = 0x3EA24Cu;
            goto label_3ea24c;
        }
    }
    ctx->pc = 0x3EA1F4u;
label_3ea1f4:
    // 0x3ea1f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x3ea1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3ea1f8:
    // 0x3ea1f8: 0x56220014  bnel        $s1, $v0, . + 4 + (0x14 << 2)
label_3ea1fc:
    if (ctx->pc == 0x3EA1FCu) {
        ctx->pc = 0x3EA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA1F8u;
        // 0x3ea1fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA200u;
        goto label_3ea200;
    }
    ctx->pc = 0x3EA1F8u;
    {
        const bool branch_taken_0x3ea1f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x3ea1f8) {
            ctx->pc = 0x3EA1FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA1F8u;
            // 0x3ea1fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA24Cu;
            goto label_3ea24c;
        }
    }
    ctx->pc = 0x3EA200u;
label_3ea200:
    // 0x3ea200: 0xc0e93de  jal         func_3A4F78
label_3ea204:
    if (ctx->pc == 0x3EA204u) {
        ctx->pc = 0x3EA204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA200u;
        // 0x3ea204: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA208u;
        goto label_3ea208;
    }
    ctx->pc = 0x3EA200u;
    SET_GPR_U32(ctx, 31, 0x3EA208u);
    ctx->pc = 0x3EA204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA200u;
    // 0x3ea204: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F78u, 0x3EA200u, 0x3EA208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA208u;
label_3ea208:
    // 0x3ea208: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3ea208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ea20c:
    // 0x3ea20c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x3ea20cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_3ea210:
    // 0x3ea210: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3ea210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_3ea214:
    // 0x3ea214: 0x40f809  jalr        $v0
label_3ea218:
    if (ctx->pc == 0x3EA218u) {
        ctx->pc = 0x3EA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA214u;
        // 0x3ea218: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA21Cu;
        goto label_3ea21c;
    }
    ctx->pc = 0x3EA214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA21Cu);
        ctx->pc = 0x3EA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA214u;
        // 0x3ea218: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA214u, 0x3EA21Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA21Cu;
label_3ea21c:
    // 0x3ea21c: 0x1000000b  b           . + 4 + (0xB << 2)
label_3ea220:
    if (ctx->pc == 0x3EA220u) {
        ctx->pc = 0x3EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA21Cu;
        // 0x3ea220: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA224u;
        goto label_3ea224;
    }
    ctx->pc = 0x3EA21Cu;
    {
        const bool branch_taken_0x3ea21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA21Cu;
        // 0x3ea220: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea21c) {
            ctx->pc = 0x3EA24Cu;
            goto label_3ea24c;
        }
    }
    ctx->pc = 0x3EA224u;
label_3ea224:
    // 0x3ea224: 0xc0ea146  jal         func_3A8518
label_3ea228:
    if (ctx->pc == 0x3EA228u) {
        ctx->pc = 0x3EA228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA224u;
        // 0x3ea228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA22Cu;
        goto label_3ea22c;
    }
    ctx->pc = 0x3EA224u;
    SET_GPR_U32(ctx, 31, 0x3EA22Cu);
    ctx->pc = 0x3EA228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA224u;
    // 0x3ea228: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EA224u, 0x3EA22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA22Cu;
label_3ea22c:
    // 0x3ea22c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3ea230:
    if (ctx->pc == 0x3EA230u) {
        ctx->pc = 0x3EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA22Cu;
        // 0x3ea230: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA234u;
        goto label_3ea234;
    }
    ctx->pc = 0x3EA22Cu;
    {
        const bool branch_taken_0x3ea22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA22Cu;
        // 0x3ea230: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea22c) {
            ctx->pc = 0x3EA23Cu;
            goto label_3ea23c;
        }
    }
    ctx->pc = 0x3EA234u;
label_3ea234:
    // 0x3ea234: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ea238:
    if (ctx->pc == 0x3EA238u) {
        ctx->pc = 0x3EA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA234u;
        // 0x3ea238: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA23Cu;
        goto label_3ea23c;
    }
    ctx->pc = 0x3EA234u;
    {
        const bool branch_taken_0x3ea234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA234u;
        // 0x3ea238: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea234) {
            ctx->pc = 0x3EA244u;
            goto label_3ea244;
        }
    }
    ctx->pc = 0x3EA23Cu;
label_3ea23c:
    // 0x3ea23c: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3ea23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ea240:
    // 0x3ea240: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3ea240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3ea244:
    // 0x3ea244: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3ea244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3ea248:
    // 0x3ea248: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3ea248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3ea24c:
    // 0x3ea24c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3ea24cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ea250:
    // 0x3ea250: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3ea250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea254:
    // 0x3ea254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ea254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea258:
    // 0x3ea258: 0x3e00008  jr          $ra
label_3ea25c:
    if (ctx->pc == 0x3EA25Cu) {
        ctx->pc = 0x3EA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA258u;
        // 0x3ea25c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA260u;
        goto label_fallthrough_0x3ea258;
    }
    ctx->pc = 0x3EA258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA258u;
        // 0x3ea25c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea258:
    ctx->pc = 0x3EA260u;
}
