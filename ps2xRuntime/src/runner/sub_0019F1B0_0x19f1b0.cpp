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

// Function: sub_0019F1B0
// Address: 0x19f1b0 - 0x19f270
void sub_0019F1B0_0x19f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F1B0_0x19f1b0");
#endif

    switch (ctx->pc) {
        case 0x19f1b0u: goto label_19f1b0;
        case 0x19f1b4u: goto label_19f1b4;
        case 0x19f1b8u: goto label_19f1b8;
        case 0x19f1bcu: goto label_19f1bc;
        case 0x19f1c0u: goto label_19f1c0;
        case 0x19f1c4u: goto label_19f1c4;
        case 0x19f1c8u: goto label_19f1c8;
        case 0x19f1ccu: goto label_19f1cc;
        case 0x19f1d0u: goto label_19f1d0;
        case 0x19f1d4u: goto label_19f1d4;
        case 0x19f1d8u: goto label_19f1d8;
        case 0x19f1dcu: goto label_19f1dc;
        case 0x19f1e0u: goto label_19f1e0;
        case 0x19f1e4u: goto label_19f1e4;
        case 0x19f1e8u: goto label_19f1e8;
        case 0x19f1ecu: goto label_19f1ec;
        case 0x19f1f0u: goto label_19f1f0;
        case 0x19f1f4u: goto label_19f1f4;
        case 0x19f1f8u: goto label_19f1f8;
        case 0x19f1fcu: goto label_19f1fc;
        case 0x19f200u: goto label_19f200;
        case 0x19f204u: goto label_19f204;
        case 0x19f208u: goto label_19f208;
        case 0x19f20cu: goto label_19f20c;
        case 0x19f210u: goto label_19f210;
        case 0x19f214u: goto label_19f214;
        case 0x19f218u: goto label_19f218;
        case 0x19f21cu: goto label_19f21c;
        case 0x19f220u: goto label_19f220;
        case 0x19f224u: goto label_19f224;
        case 0x19f228u: goto label_19f228;
        case 0x19f22cu: goto label_19f22c;
        case 0x19f230u: goto label_19f230;
        case 0x19f234u: goto label_19f234;
        case 0x19f238u: goto label_19f238;
        case 0x19f23cu: goto label_19f23c;
        case 0x19f240u: goto label_19f240;
        case 0x19f244u: goto label_19f244;
        case 0x19f248u: goto label_19f248;
        case 0x19f24cu: goto label_19f24c;
        case 0x19f250u: goto label_19f250;
        case 0x19f254u: goto label_19f254;
        case 0x19f258u: goto label_19f258;
        case 0x19f25cu: goto label_19f25c;
        case 0x19f260u: goto label_19f260;
        case 0x19f264u: goto label_19f264;
        case 0x19f268u: goto label_19f268;
        case 0x19f26cu: goto label_19f26c;
        default: break;
    }

    ctx->pc = 0x19f1b0u;

label_19f1b0:
    // 0x19f1b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x19f1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_19f1b4:
    // 0x19f1b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x19f1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_19f1b8:
    // 0x19f1b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x19f1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_19f1bc:
    // 0x19f1bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19f1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19f1c0:
    // 0x19f1c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19f1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_19f1c4:
    // 0x19f1c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x19f1c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19f1c8:
    // 0x19f1c8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x19f1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_19f1cc:
    // 0x19f1cc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x19f1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19f1d0:
    // 0x19f1d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19f1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19f1d4:
    // 0x19f1d4: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
label_19f1d8:
    if (ctx->pc == 0x19F1D8u) {
        ctx->pc = 0x19F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D4u;
        // 0x19f1d8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1DCu;
        goto label_19f1dc;
    }
    ctx->pc = 0x19F1D4u;
    {
        const bool branch_taken_0x19f1d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1D4u;
        // 0x19f1d8: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1d4) {
            ctx->pc = 0x19F254u;
            goto label_19f254;
        }
    }
    ctx->pc = 0x19F1DCu;
label_19f1dc:
    // 0x19f1dc: 0xc10ce90  jal         func_433A40
label_19f1e0:
    if (ctx->pc == 0x19F1E0u) {
        ctx->pc = 0x19F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1DCu;
        // 0x19f1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1E4u;
        goto label_19f1e4;
    }
    ctx->pc = 0x19F1DCu;
    SET_GPR_U32(ctx, 31, 0x19F1E4u);
    ctx->pc = 0x19F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1DCu;
    // 0x19f1e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433A40u, 0x19F1DCu, 0x19F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1E4u;
label_19f1e4:
    // 0x19f1e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19f1e8:
    if (ctx->pc == 0x19F1E8u) {
        ctx->pc = 0x19F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1E4u;
        // 0x19f1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1ECu;
        goto label_19f1ec;
    }
    ctx->pc = 0x19F1E4u;
    {
        const bool branch_taken_0x19f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1E4u;
        // 0x19f1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1e4) {
            ctx->pc = 0x19F204u;
            goto label_19f204;
        }
    }
    ctx->pc = 0x19F1ECu;
label_19f1ec:
    // 0x19f1ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19f1ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19f1f0:
    // 0x19f1f0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x19f1f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19f1f4:
    // 0x19f1f4: 0xc067c4a  jal         func_19F128
label_19f1f8:
    if (ctx->pc == 0x19F1F8u) {
        ctx->pc = 0x19F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1F4u;
        // 0x19f1f8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F1FCu;
        goto label_19f1fc;
    }
    ctx->pc = 0x19F1F4u;
    SET_GPR_U32(ctx, 31, 0x19F1FCu);
    ctx->pc = 0x19F1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19F1F4u;
    // 0x19f1f8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F128u, 0x19F1F4u, 0x19F1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19F1FCu;
label_19f1fc:
    // 0x19f1fc: 0x10000016  b           . + 4 + (0x16 << 2)
label_19f200:
    if (ctx->pc == 0x19F200u) {
        ctx->pc = 0x19F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1FCu;
        // 0x19f200: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F204u;
        goto label_19f204;
    }
    ctx->pc = 0x19F1FCu;
    {
        const bool branch_taken_0x19f1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19F200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F1FCu;
        // 0x19f200: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19f1fc) {
            ctx->pc = 0x19F258u;
            goto label_19f258;
        }
    }
    ctx->pc = 0x19F204u;
label_19f204:
    // 0x19f204: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x19f204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f208:
    // 0x19f208: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x19f208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_19f20c:
    // 0x19f20c: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x19f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_19f210:
    // 0x19f210: 0x40f809  jalr        $v0
label_19f214:
    if (ctx->pc == 0x19F214u) {
        ctx->pc = 0x19F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F210u;
        // 0x19f214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F218u;
        goto label_19f218;
    }
    ctx->pc = 0x19F210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19F218u);
        ctx->pc = 0x19F214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F210u;
        // 0x19f214: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F210u, 0x19F218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F218u;
label_19f218:
    // 0x19f218: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
label_19f21c:
    if (ctx->pc == 0x19F21Cu) {
        ctx->pc = 0x19F21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F218u;
        // 0x19f21c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F220u;
        goto label_19f220;
    }
    ctx->pc = 0x19F218u;
    {
        const bool branch_taken_0x19f218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x19f218) {
            ctx->pc = 0x19F21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F218u;
            // 0x19f21c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F230u;
            goto label_19f230;
        }
    }
    ctx->pc = 0x19F220u;
label_19f220:
    // 0x19f220: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x19f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_19f224:
    // 0x19f224: 0x5222000c  beql        $s1, $v0, . + 4 + (0xC << 2)
label_19f228:
    if (ctx->pc == 0x19F228u) {
        ctx->pc = 0x19F228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F224u;
        // 0x19f228: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F22Cu;
        goto label_19f22c;
    }
    ctx->pc = 0x19F224u;
    {
        const bool branch_taken_0x19f224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x19f224) {
            ctx->pc = 0x19F228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19F224u;
            // 0x19f228: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19F258u;
            goto label_19f258;
        }
    }
    ctx->pc = 0x19F22Cu;
label_19f22c:
    // 0x19f22c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x19f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_19f230:
    // 0x19f230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19f230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19f234:
    // 0x19f234: 0x844400e8  lh          $a0, 0xE8($v0)
    ctx->pc = 0x19f234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 232)));
label_19f238:
    // 0x19f238: 0x8c4300ec  lw          $v1, 0xEC($v0)
    ctx->pc = 0x19f238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 236)));
label_19f23c:
    // 0x19f23c: 0x60f809  jalr        $v1
label_19f240:
    if (ctx->pc == 0x19F240u) {
        ctx->pc = 0x19F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F23Cu;
        // 0x19f240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F244u;
        goto label_19f244;
    }
    ctx->pc = 0x19F23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19F244u);
        ctx->pc = 0x19F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F23Cu;
        // 0x19f240: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F23Cu, 0x19F244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19F244u;
label_19f244:
    // 0x19f244: 0xae120460  sw          $s2, 0x460($s0)
    ctx->pc = 0x19f244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 18));
label_19f248:
    // 0x19f248: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x19f248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
label_19f24c:
    // 0x19f24c: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x19f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_19f250:
    // 0x19f250: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x19f250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
label_19f254:
    // 0x19f254: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x19f254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19f258:
    // 0x19f258: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19f258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19f25c:
    // 0x19f25c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19f25cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19f260:
    // 0x19f260: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x19f260u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19f264:
    // 0x19f264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19f268:
    // 0x19f268: 0x3e00008  jr          $ra
label_19f26c:
    if (ctx->pc == 0x19F26Cu) {
        ctx->pc = 0x19F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F268u;
        // 0x19f26c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19F270u;
        goto label_fallthrough_0x19f268;
    }
    ctx->pc = 0x19F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F268u;
        // 0x19f26c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19f268:
    ctx->pc = 0x19F270u;
}
