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

// Function: sub_003FD1C0
// Address: 0x3fd1c0 - 0x3fd2b8
void sub_003FD1C0_0x3fd1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD1C0_0x3fd1c0");
#endif

    switch (ctx->pc) {
        case 0x3fd1c0u: goto label_3fd1c0;
        case 0x3fd1c4u: goto label_3fd1c4;
        case 0x3fd1c8u: goto label_3fd1c8;
        case 0x3fd1ccu: goto label_3fd1cc;
        case 0x3fd1d0u: goto label_3fd1d0;
        case 0x3fd1d4u: goto label_3fd1d4;
        case 0x3fd1d8u: goto label_3fd1d8;
        case 0x3fd1dcu: goto label_3fd1dc;
        case 0x3fd1e0u: goto label_3fd1e0;
        case 0x3fd1e4u: goto label_3fd1e4;
        case 0x3fd1e8u: goto label_3fd1e8;
        case 0x3fd1ecu: goto label_3fd1ec;
        case 0x3fd1f0u: goto label_3fd1f0;
        case 0x3fd1f4u: goto label_3fd1f4;
        case 0x3fd1f8u: goto label_3fd1f8;
        case 0x3fd1fcu: goto label_3fd1fc;
        case 0x3fd200u: goto label_3fd200;
        case 0x3fd204u: goto label_3fd204;
        case 0x3fd208u: goto label_3fd208;
        case 0x3fd20cu: goto label_3fd20c;
        case 0x3fd210u: goto label_3fd210;
        case 0x3fd214u: goto label_3fd214;
        case 0x3fd218u: goto label_3fd218;
        case 0x3fd21cu: goto label_3fd21c;
        case 0x3fd220u: goto label_3fd220;
        case 0x3fd224u: goto label_3fd224;
        case 0x3fd228u: goto label_3fd228;
        case 0x3fd22cu: goto label_3fd22c;
        case 0x3fd230u: goto label_3fd230;
        case 0x3fd234u: goto label_3fd234;
        case 0x3fd238u: goto label_3fd238;
        case 0x3fd23cu: goto label_3fd23c;
        case 0x3fd240u: goto label_3fd240;
        case 0x3fd244u: goto label_3fd244;
        case 0x3fd248u: goto label_3fd248;
        case 0x3fd24cu: goto label_3fd24c;
        case 0x3fd250u: goto label_3fd250;
        case 0x3fd254u: goto label_3fd254;
        case 0x3fd258u: goto label_3fd258;
        case 0x3fd25cu: goto label_3fd25c;
        case 0x3fd260u: goto label_3fd260;
        case 0x3fd264u: goto label_3fd264;
        case 0x3fd268u: goto label_3fd268;
        case 0x3fd26cu: goto label_3fd26c;
        case 0x3fd270u: goto label_3fd270;
        case 0x3fd274u: goto label_3fd274;
        case 0x3fd278u: goto label_3fd278;
        case 0x3fd27cu: goto label_3fd27c;
        case 0x3fd280u: goto label_3fd280;
        case 0x3fd284u: goto label_3fd284;
        case 0x3fd288u: goto label_3fd288;
        case 0x3fd28cu: goto label_3fd28c;
        case 0x3fd290u: goto label_3fd290;
        case 0x3fd294u: goto label_3fd294;
        case 0x3fd298u: goto label_3fd298;
        case 0x3fd29cu: goto label_3fd29c;
        case 0x3fd2a0u: goto label_3fd2a0;
        case 0x3fd2a4u: goto label_3fd2a4;
        case 0x3fd2a8u: goto label_3fd2a8;
        case 0x3fd2acu: goto label_3fd2ac;
        case 0x3fd2b0u: goto label_3fd2b0;
        case 0x3fd2b4u: goto label_3fd2b4;
        default: break;
    }

    ctx->pc = 0x3fd1c0u;

label_3fd1c0:
    // 0x3fd1c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3fd1c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3fd1c4:
    // 0x3fd1c4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3fd1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_3fd1c8:
    // 0x3fd1c8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3fd1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3fd1cc:
    // 0x3fd1cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3fd1ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3fd1d0:
    // 0x3fd1d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fd1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3fd1d4:
    // 0x3fd1d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3fd1d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3fd1d8:
    // 0x3fd1d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3fd1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3fd1dc:
    // 0x3fd1dc: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3fd1dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3fd1e0:
    // 0x3fd1e0: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3fd1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3fd1e4:
    // 0x3fd1e4: 0x40f809  jalr        $v0
label_3fd1e8:
    if (ctx->pc == 0x3FD1E8u) {
        ctx->pc = 0x3FD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1E4u;
        // 0x3fd1e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD1ECu;
        goto label_3fd1ec;
    }
    ctx->pc = 0x3FD1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3FD1ECu);
        ctx->pc = 0x3FD1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1E4u;
        // 0x3fd1e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD1E4u, 0x3FD1ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3FD1ECu;
label_3fd1ec:
    // 0x3fd1ec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3fd1ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3fd1f0:
    // 0x3fd1f0: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x3fd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_3fd1f4:
    // 0x3fd1f4: 0x1202000e  beq         $s0, $v0, . + 4 + (0xE << 2)
label_3fd1f8:
    if (ctx->pc == 0x3FD1F8u) {
        ctx->pc = 0x3FD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1F4u;
        // 0x3fd1f8: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD1FCu;
        goto label_3fd1fc;
    }
    ctx->pc = 0x3FD1F4u;
    {
        const bool branch_taken_0x3fd1f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1F4u;
        // 0x3fd1f8: 0x2e020013  sltiu       $v0, $s0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd1f4) {
            ctx->pc = 0x3FD230u;
            goto label_3fd230;
        }
    }
    ctx->pc = 0x3FD1FCu;
label_3fd1fc:
    // 0x3fd1fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3fd200:
    if (ctx->pc == 0x3FD200u) {
        ctx->pc = 0x3FD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1FCu;
        // 0x3fd200: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD204u;
        goto label_3fd204;
    }
    ctx->pc = 0x3FD1FCu;
    {
        const bool branch_taken_0x3fd1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD1FCu;
        // 0x3fd200: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd1fc) {
            ctx->pc = 0x3FD214u;
            goto label_3fd214;
        }
    }
    ctx->pc = 0x3FD204u;
label_3fd204:
    // 0x3fd204: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
label_3fd208:
    if (ctx->pc == 0x3FD208u) {
        ctx->pc = 0x3FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD204u;
        // 0x3fd208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD20Cu;
        goto label_3fd20c;
    }
    ctx->pc = 0x3FD204u;
    {
        const bool branch_taken_0x3fd204 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD204u;
        // 0x3fd208: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd204) {
            ctx->pc = 0x3FD254u;
            goto label_3fd254;
        }
    }
    ctx->pc = 0x3FD20Cu;
label_3fd20c:
    // 0x3fd20c: 0x10000027  b           . + 4 + (0x27 << 2)
label_3fd210:
    if (ctx->pc == 0x3FD210u) {
        ctx->pc = 0x3FD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD20Cu;
        // 0x3fd210: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD214u;
        goto label_3fd214;
    }
    ctx->pc = 0x3FD20Cu;
    {
        const bool branch_taken_0x3fd20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD20Cu;
        // 0x3fd210: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd20c) {
            ctx->pc = 0x3FD2ACu;
            goto label_3fd2ac;
        }
    }
    ctx->pc = 0x3FD214u;
label_3fd214:
    // 0x3fd214: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x3fd214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_3fd218:
    // 0x3fd218: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
label_3fd21c:
    if (ctx->pc == 0x3FD21Cu) {
        ctx->pc = 0x3FD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD218u;
        // 0x3fd21c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD220u;
        goto label_3fd220;
    }
    ctx->pc = 0x3FD218u;
    {
        const bool branch_taken_0x3fd218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FD21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD218u;
        // 0x3fd21c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd218) {
            ctx->pc = 0x3FD294u;
            goto label_3fd294;
        }
    }
    ctx->pc = 0x3FD220u;
label_3fd220:
    // 0x3fd220: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
label_3fd224:
    if (ctx->pc == 0x3FD224u) {
        ctx->pc = 0x3FD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD220u;
        // 0x3fd224: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD228u;
        goto label_3fd228;
    }
    ctx->pc = 0x3FD220u;
    {
        const bool branch_taken_0x3fd220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3FD224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD220u;
        // 0x3fd224: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd220) {
            ctx->pc = 0x3FD24Cu;
            goto label_3fd24c;
        }
    }
    ctx->pc = 0x3FD228u;
label_3fd228:
    // 0x3fd228: 0x10000020  b           . + 4 + (0x20 << 2)
label_3fd22c:
    if (ctx->pc == 0x3FD22Cu) {
        ctx->pc = 0x3FD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD228u;
        // 0x3fd22c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD230u;
        goto label_3fd230;
    }
    ctx->pc = 0x3FD228u;
    {
        const bool branch_taken_0x3fd228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD228u;
        // 0x3fd22c: 0x7bb10020  lq          $s1, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd228) {
            ctx->pc = 0x3FD2ACu;
            goto label_3fd2ac;
        }
    }
    ctx->pc = 0x3FD230u;
label_3fd230:
    // 0x3fd230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3fd230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3fd234:
    // 0x3fd234: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fd234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd238:
    // 0x3fd238: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x3fd238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_3fd23c:
    // 0x3fd23c: 0xc0e858c  jal         func_3A1630
label_3fd240:
    if (ctx->pc == 0x3FD240u) {
        ctx->pc = 0x3FD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD23Cu;
        // 0x3fd240: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD244u;
        goto label_3fd244;
    }
    ctx->pc = 0x3FD23Cu;
    SET_GPR_U32(ctx, 31, 0x3FD244u);
    ctx->pc = 0x3FD240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD23Cu;
    // 0x3fd240: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FD23Cu, 0x3FD244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD244u;
label_3fd244:
    // 0x3fd244: 0x10000018  b           . + 4 + (0x18 << 2)
label_3fd248:
    if (ctx->pc == 0x3FD248u) {
        ctx->pc = 0x3FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD244u;
        // 0x3fd248: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD24Cu;
        goto label_3fd24c;
    }
    ctx->pc = 0x3FD244u;
    {
        const bool branch_taken_0x3fd244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD244u;
        // 0x3fd248: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd244) {
            ctx->pc = 0x3FD2A8u;
            goto label_3fd2a8;
        }
    }
    ctx->pc = 0x3FD24Cu;
label_3fd24c:
    // 0x3fd24c: 0x10000015  b           . + 4 + (0x15 << 2)
label_3fd250:
    if (ctx->pc == 0x3FD250u) {
        ctx->pc = 0x3FD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD24Cu;
        // 0x3fd250: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD254u;
        goto label_3fd254;
    }
    ctx->pc = 0x3FD24Cu;
    {
        const bool branch_taken_0x3fd24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD24Cu;
        // 0x3fd250: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd24c) {
            ctx->pc = 0x3FD2A4u;
            goto label_3fd2a4;
        }
    }
    ctx->pc = 0x3FD254u;
label_3fd254:
    // 0x3fd254: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fd254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fd258:
    // 0x3fd258: 0xc0e90ca  jal         func_3A4328
label_3fd25c:
    if (ctx->pc == 0x3FD25Cu) {
        ctx->pc = 0x3FD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD258u;
        // 0x3fd25c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD260u;
        goto label_3fd260;
    }
    ctx->pc = 0x3FD258u;
    SET_GPR_U32(ctx, 31, 0x3FD260u);
    ctx->pc = 0x3FD25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD258u;
    // 0x3fd25c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3FD258u, 0x3FD260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD260u;
label_3fd260:
    // 0x3fd260: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x3fd260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_3fd264:
    // 0x3fd264: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3fd264u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fd268:
    // 0x3fd268: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3fd268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3fd26c:
    // 0x3fd26c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3fd26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd270:
    // 0x3fd270: 0xc0e911e  jal         func_3A4478
label_3fd274:
    if (ctx->pc == 0x3FD274u) {
        ctx->pc = 0x3FD274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD270u;
        // 0x3fd274: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD278u;
        goto label_3fd278;
    }
    ctx->pc = 0x3FD270u;
    SET_GPR_U32(ctx, 31, 0x3FD278u);
    ctx->pc = 0x3FD274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD270u;
    // 0x3fd274: 0x7e220010  sq          $v0, 0x10($s1) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3FD270u, 0x3FD278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD278u;
label_3fd278:
    // 0x3fd278: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3fd278u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3fd27c:
    // 0x3fd27c: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x3fd27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_3fd280:
    // 0x3fd280: 0x7e030010  sq          $v1, 0x10($s0)
    ctx->pc = 0x3fd280u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 3));
label_3fd284:
    // 0x3fd284: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3fd284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_3fd288:
    // 0x3fd288: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3fd288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3fd28c:
    // 0x3fd28c: 0x10000005  b           . + 4 + (0x5 << 2)
label_3fd290:
    if (ctx->pc == 0x3FD290u) {
        ctx->pc = 0x3FD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD28Cu;
        // 0x3fd290: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD294u;
        goto label_3fd294;
    }
    ctx->pc = 0x3FD28Cu;
    {
        const bool branch_taken_0x3fd28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD28Cu;
        // 0x3fd290: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd28c) {
            ctx->pc = 0x3FD2A4u;
            goto label_3fd2a4;
        }
    }
    ctx->pc = 0x3FD294u;
label_3fd294:
    // 0x3fd294: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3fd294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3fd298:
    // 0x3fd298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3fd298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3fd29c:
    // 0x3fd29c: 0xc0e858c  jal         func_3A1630
label_3fd2a0:
    if (ctx->pc == 0x3FD2A0u) {
        ctx->pc = 0x3FD2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD29Cu;
        // 0x3fd2a0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD2A4u;
        goto label_3fd2a4;
    }
    ctx->pc = 0x3FD29Cu;
    SET_GPR_U32(ctx, 31, 0x3FD2A4u);
    ctx->pc = 0x3FD2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD29Cu;
    // 0x3fd2a0: 0x240500f0  addiu       $a1, $zero, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3FD29Cu, 0x3FD2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD2A4u;
label_3fd2a4:
    // 0x3fd2a4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3fd2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3fd2a8:
    // 0x3fd2a8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3fd2a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3fd2ac:
    // 0x3fd2ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fd2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3fd2b0:
    // 0x3fd2b0: 0x3e00008  jr          $ra
label_3fd2b4:
    if (ctx->pc == 0x3FD2B4u) {
        ctx->pc = 0x3FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2B0u;
        // 0x3fd2b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3FD2B8u;
        goto label_fallthrough_0x3fd2b0;
    }
    ctx->pc = 0x3FD2B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD2B0u;
        // 0x3fd2b4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD2B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3fd2b0:
    ctx->pc = 0x3FD2B8u;
}
