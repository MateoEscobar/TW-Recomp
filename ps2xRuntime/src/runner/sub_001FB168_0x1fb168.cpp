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

// Function: sub_001FB168
// Address: 0x1fb168 - 0x1fb248
void sub_001FB168_0x1fb168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB168_0x1fb168");
#endif

    switch (ctx->pc) {
        case 0x1fb168u: goto label_1fb168;
        case 0x1fb16cu: goto label_1fb16c;
        case 0x1fb170u: goto label_1fb170;
        case 0x1fb174u: goto label_1fb174;
        case 0x1fb178u: goto label_1fb178;
        case 0x1fb17cu: goto label_1fb17c;
        case 0x1fb180u: goto label_1fb180;
        case 0x1fb184u: goto label_1fb184;
        case 0x1fb188u: goto label_1fb188;
        case 0x1fb18cu: goto label_1fb18c;
        case 0x1fb190u: goto label_1fb190;
        case 0x1fb194u: goto label_1fb194;
        case 0x1fb198u: goto label_1fb198;
        case 0x1fb19cu: goto label_1fb19c;
        case 0x1fb1a0u: goto label_1fb1a0;
        case 0x1fb1a4u: goto label_1fb1a4;
        case 0x1fb1a8u: goto label_1fb1a8;
        case 0x1fb1acu: goto label_1fb1ac;
        case 0x1fb1b0u: goto label_1fb1b0;
        case 0x1fb1b4u: goto label_1fb1b4;
        case 0x1fb1b8u: goto label_1fb1b8;
        case 0x1fb1bcu: goto label_1fb1bc;
        case 0x1fb1c0u: goto label_1fb1c0;
        case 0x1fb1c4u: goto label_1fb1c4;
        case 0x1fb1c8u: goto label_1fb1c8;
        case 0x1fb1ccu: goto label_1fb1cc;
        case 0x1fb1d0u: goto label_1fb1d0;
        case 0x1fb1d4u: goto label_1fb1d4;
        case 0x1fb1d8u: goto label_1fb1d8;
        case 0x1fb1dcu: goto label_1fb1dc;
        case 0x1fb1e0u: goto label_1fb1e0;
        case 0x1fb1e4u: goto label_1fb1e4;
        case 0x1fb1e8u: goto label_1fb1e8;
        case 0x1fb1ecu: goto label_1fb1ec;
        case 0x1fb1f0u: goto label_1fb1f0;
        case 0x1fb1f4u: goto label_1fb1f4;
        case 0x1fb1f8u: goto label_1fb1f8;
        case 0x1fb1fcu: goto label_1fb1fc;
        case 0x1fb200u: goto label_1fb200;
        case 0x1fb204u: goto label_1fb204;
        case 0x1fb208u: goto label_1fb208;
        case 0x1fb20cu: goto label_1fb20c;
        case 0x1fb210u: goto label_1fb210;
        case 0x1fb214u: goto label_1fb214;
        case 0x1fb218u: goto label_1fb218;
        case 0x1fb21cu: goto label_1fb21c;
        case 0x1fb220u: goto label_1fb220;
        case 0x1fb224u: goto label_1fb224;
        case 0x1fb228u: goto label_1fb228;
        case 0x1fb22cu: goto label_1fb22c;
        case 0x1fb230u: goto label_1fb230;
        case 0x1fb234u: goto label_1fb234;
        case 0x1fb238u: goto label_1fb238;
        case 0x1fb23cu: goto label_1fb23c;
        case 0x1fb240u: goto label_1fb240;
        case 0x1fb244u: goto label_1fb244;
        default: break;
    }

    ctx->pc = 0x1fb168u;

label_1fb168:
    // 0x1fb168: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fb168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fb16c:
    // 0x1fb16c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fb16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fb170:
    // 0x1fb170: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1fb170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1fb174:
    // 0x1fb174: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x1fb174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_1fb178:
    // 0x1fb178: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x1fb178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_1fb17c:
    // 0x1fb17c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1fb17cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fb180:
    // 0x1fb180: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1fb180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1fb184:
    // 0x1fb184: 0x2442d4d8  addiu       $v0, $v0, -0x2B28
    ctx->pc = 0x1fb184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956248));
label_1fb188:
    // 0x1fb188: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1fb188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1fb18c:
    // 0x1fb18c: 0x2463d500  addiu       $v1, $v1, -0x2B00
    ctx->pc = 0x1fb18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956288));
label_1fb190:
    // 0x1fb190: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fb190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fb194:
    // 0x1fb194: 0x24c6d530  addiu       $a2, $a2, -0x2AD0
    ctx->pc = 0x1fb194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956336));
label_1fb198:
    // 0x1fb198: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x1fb198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
label_1fb19c:
    // 0x1fb19c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1fb19cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fb1a0:
    // 0x1fb1a0: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x1fb1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_1fb1a4:
    // 0x1fb1a4: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x1fb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
label_1fb1a8:
    // 0x1fb1a8: 0xc07ede4  jal         func_1FB790
label_1fb1ac:
    if (ctx->pc == 0x1FB1ACu) {
        ctx->pc = 0x1FB1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1A8u;
        // 0x1fb1ac: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB1B0u;
        goto label_1fb1b0;
    }
    ctx->pc = 0x1FB1A8u;
    SET_GPR_U32(ctx, 31, 0x1FB1B0u);
    ctx->pc = 0x1FB1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1A8u;
    // 0x1fb1ac: 0x26300078  addiu       $s0, $s1, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB790u, 0x1FB1A8u, 0x1FB1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1B0u;
label_1fb1b0:
    // 0x1fb1b0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x1fb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_1fb1b4:
    // 0x1fb1b4: 0x2442cc88  addiu       $v0, $v0, -0x3378
    ctx->pc = 0x1fb1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954120));
label_1fb1b8:
    // 0x1fb1b8: 0xae220088  sw          $v0, 0x88($s1)
    ctx->pc = 0x1fb1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
label_1fb1bc:
    // 0x1fb1bc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1fb1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1fb1c0:
    // 0x1fb1c0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fb1c4:
    if (ctx->pc == 0x1FB1C4u) {
        ctx->pc = 0x1FB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1C0u;
        // 0x1fb1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB1C8u;
        goto label_1fb1c8;
    }
    ctx->pc = 0x1FB1C0u;
    {
        const bool branch_taken_0x1fb1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1C0u;
        // 0x1fb1c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1c0) {
            ctx->pc = 0x1FB1F0u;
            goto label_1fb1f0;
        }
    }
    ctx->pc = 0x1FB1C8u;
label_1fb1c8:
    // 0x1fb1c8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb1cc:
    // 0x1fb1cc: 0xc1376d6  jal         func_4DDB58
label_1fb1d0:
    if (ctx->pc == 0x1FB1D0u) {
        ctx->pc = 0x1FB1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1CCu;
        // 0x1fb1d0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB1D4u;
        goto label_1fb1d4;
    }
    ctx->pc = 0x1FB1CCu;
    SET_GPR_U32(ctx, 31, 0x1FB1D4u);
    ctx->pc = 0x1FB1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB1CCu;
    // 0x1fb1d0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DDB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DDB58u, 0x1FB1CCu, 0x1FB1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB1D4u;
label_1fb1d4:
    // 0x1fb1d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb1d8:
    // 0x1fb1d8: 0xac420008  sw          $v0, 0x8($v0)
    ctx->pc = 0x1fb1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 2));
label_1fb1dc:
    // 0x1fb1dc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fb1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb1e0:
    // 0x1fb1e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1fb1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1fb1e4:
    // 0x1fb1e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb1e8:
    // 0x1fb1e8: 0xac42000c  sw          $v0, 0xC($v0)
    ctx->pc = 0x1fb1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 2));
label_1fb1ec:
    // 0x1fb1ec: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fb1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1fb1f0:
    // 0x1fb1f0: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x1fb1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fb1f4:
    // 0x1fb1f4: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_1fb1f8:
    if (ctx->pc == 0x1FB1F8u) {
        ctx->pc = 0x1FB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1F4u;
        // 0x1fb1f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB1FCu;
        goto label_1fb1fc;
    }
    ctx->pc = 0x1FB1F4u;
    {
        const bool branch_taken_0x1fb1f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB1F4u;
        // 0x1fb1f8: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb1f4) {
            ctx->pc = 0x1FB220u;
            goto label_1fb220;
        }
    }
    ctx->pc = 0x1FB1FCu;
label_1fb1fc:
    // 0x1fb1fc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x1fb1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_1fb200:
    // 0x1fb200: 0x8c48b9c0  lw          $t0, -0x4640($v0)
    ctx->pc = 0x1fb200u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_1fb204:
    // 0x1fb204: 0x24c67ca0  addiu       $a2, $a2, 0x7CA0
    ctx->pc = 0x1fb204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31904));
label_1fb208:
    // 0x1fb208: 0x24070054  addiu       $a3, $zero, 0x54
    ctx->pc = 0x1fb208u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_1fb20c:
    // 0x1fb20c: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x1fb20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_1fb210:
    // 0x1fb210: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x1fb210u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_1fb214:
    // 0x1fb214: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x1fb214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_1fb218:
    // 0x1fb218: 0x60f809  jalr        $v1
label_1fb21c:
    if (ctx->pc == 0x1FB21Cu) {
        ctx->pc = 0x1FB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB218u;
        // 0x1fb21c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB220u;
        goto label_1fb220;
    }
    ctx->pc = 0x1FB218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1FB220u);
        ctx->pc = 0x1FB21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB218u;
        // 0x1fb21c: 0x1042021  addu        $a0, $t0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB218u, 0x1FB220u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1FB220u;
label_1fb220:
    // 0x1fb220: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1fb220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fb224:
    // 0x1fb224: 0xc06a39e  jal         func_1A8E78
label_1fb228:
    if (ctx->pc == 0x1FB228u) {
        ctx->pc = 0x1FB228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB224u;
        // 0x1fb228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB22Cu;
        goto label_1fb22c;
    }
    ctx->pc = 0x1FB224u;
    SET_GPR_U32(ctx, 31, 0x1FB22Cu);
    ctx->pc = 0x1FB228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB224u;
    // 0x1fb228: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E78u, 0x1FB224u, 0x1FB22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB22Cu;
label_1fb22c:
    // 0x1fb22c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1fb22cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1fb230:
    // 0x1fb230: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1fb230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fb234:
    // 0x1fb234: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1fb234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fb238:
    // 0x1fb238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fb238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fb23c:
    // 0x1fb23c: 0x3e00008  jr          $ra
label_1fb240:
    if (ctx->pc == 0x1FB240u) {
        ctx->pc = 0x1FB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB23Cu;
        // 0x1fb240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1FB244u;
        goto label_1fb244;
    }
    ctx->pc = 0x1FB23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB23Cu;
        // 0x1fb240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB23Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB244u;
label_1fb244:
    // 0x1fb244: 0x0  nop
    ctx->pc = 0x1fb244u;
    // NOP
    ctx->pc = 0x1fb248u;
}
