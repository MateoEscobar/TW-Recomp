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

// Function: sub_0019B4C0
// Address: 0x19b4c0 - 0x19b6a8
void sub_0019B4C0_0x19b4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B4C0_0x19b4c0");
#endif

    switch (ctx->pc) {
        case 0x19b4c0u: goto label_19b4c0;
        case 0x19b4c4u: goto label_19b4c4;
        case 0x19b4c8u: goto label_19b4c8;
        case 0x19b4ccu: goto label_19b4cc;
        case 0x19b4d0u: goto label_19b4d0;
        case 0x19b4d4u: goto label_19b4d4;
        case 0x19b4d8u: goto label_19b4d8;
        case 0x19b4dcu: goto label_19b4dc;
        case 0x19b4e0u: goto label_19b4e0;
        case 0x19b4e4u: goto label_19b4e4;
        case 0x19b4e8u: goto label_19b4e8;
        case 0x19b4ecu: goto label_19b4ec;
        case 0x19b4f0u: goto label_19b4f0;
        case 0x19b4f4u: goto label_19b4f4;
        case 0x19b4f8u: goto label_19b4f8;
        case 0x19b4fcu: goto label_19b4fc;
        case 0x19b500u: goto label_19b500;
        case 0x19b504u: goto label_19b504;
        case 0x19b508u: goto label_19b508;
        case 0x19b50cu: goto label_19b50c;
        case 0x19b510u: goto label_19b510;
        case 0x19b514u: goto label_19b514;
        case 0x19b518u: goto label_19b518;
        case 0x19b51cu: goto label_19b51c;
        case 0x19b520u: goto label_19b520;
        case 0x19b524u: goto label_19b524;
        case 0x19b528u: goto label_19b528;
        case 0x19b52cu: goto label_19b52c;
        case 0x19b530u: goto label_19b530;
        case 0x19b534u: goto label_19b534;
        case 0x19b538u: goto label_19b538;
        case 0x19b53cu: goto label_19b53c;
        case 0x19b540u: goto label_19b540;
        case 0x19b544u: goto label_19b544;
        case 0x19b548u: goto label_19b548;
        case 0x19b54cu: goto label_19b54c;
        case 0x19b550u: goto label_19b550;
        case 0x19b554u: goto label_19b554;
        case 0x19b558u: goto label_19b558;
        case 0x19b55cu: goto label_19b55c;
        case 0x19b560u: goto label_19b560;
        case 0x19b564u: goto label_19b564;
        case 0x19b568u: goto label_19b568;
        case 0x19b56cu: goto label_19b56c;
        case 0x19b570u: goto label_19b570;
        case 0x19b574u: goto label_19b574;
        case 0x19b578u: goto label_19b578;
        case 0x19b57cu: goto label_19b57c;
        case 0x19b580u: goto label_19b580;
        case 0x19b584u: goto label_19b584;
        case 0x19b588u: goto label_19b588;
        case 0x19b58cu: goto label_19b58c;
        case 0x19b590u: goto label_19b590;
        case 0x19b594u: goto label_19b594;
        case 0x19b598u: goto label_19b598;
        case 0x19b59cu: goto label_19b59c;
        case 0x19b5a0u: goto label_19b5a0;
        case 0x19b5a4u: goto label_19b5a4;
        case 0x19b5a8u: goto label_19b5a8;
        case 0x19b5acu: goto label_19b5ac;
        case 0x19b5b0u: goto label_19b5b0;
        case 0x19b5b4u: goto label_19b5b4;
        case 0x19b5b8u: goto label_19b5b8;
        case 0x19b5bcu: goto label_19b5bc;
        case 0x19b5c0u: goto label_19b5c0;
        case 0x19b5c4u: goto label_19b5c4;
        case 0x19b5c8u: goto label_19b5c8;
        case 0x19b5ccu: goto label_19b5cc;
        case 0x19b5d0u: goto label_19b5d0;
        case 0x19b5d4u: goto label_19b5d4;
        case 0x19b5d8u: goto label_19b5d8;
        case 0x19b5dcu: goto label_19b5dc;
        case 0x19b5e0u: goto label_19b5e0;
        case 0x19b5e4u: goto label_19b5e4;
        case 0x19b5e8u: goto label_19b5e8;
        case 0x19b5ecu: goto label_19b5ec;
        case 0x19b5f0u: goto label_19b5f0;
        case 0x19b5f4u: goto label_19b5f4;
        case 0x19b5f8u: goto label_19b5f8;
        case 0x19b5fcu: goto label_19b5fc;
        case 0x19b600u: goto label_19b600;
        case 0x19b604u: goto label_19b604;
        case 0x19b608u: goto label_19b608;
        case 0x19b60cu: goto label_19b60c;
        case 0x19b610u: goto label_19b610;
        case 0x19b614u: goto label_19b614;
        case 0x19b618u: goto label_19b618;
        case 0x19b61cu: goto label_19b61c;
        case 0x19b620u: goto label_19b620;
        case 0x19b624u: goto label_19b624;
        case 0x19b628u: goto label_19b628;
        case 0x19b62cu: goto label_19b62c;
        case 0x19b630u: goto label_19b630;
        case 0x19b634u: goto label_19b634;
        case 0x19b638u: goto label_19b638;
        case 0x19b63cu: goto label_19b63c;
        case 0x19b640u: goto label_19b640;
        case 0x19b644u: goto label_19b644;
        case 0x19b648u: goto label_19b648;
        case 0x19b64cu: goto label_19b64c;
        case 0x19b650u: goto label_19b650;
        case 0x19b654u: goto label_19b654;
        case 0x19b658u: goto label_19b658;
        case 0x19b65cu: goto label_19b65c;
        case 0x19b660u: goto label_19b660;
        case 0x19b664u: goto label_19b664;
        case 0x19b668u: goto label_19b668;
        case 0x19b66cu: goto label_19b66c;
        case 0x19b670u: goto label_19b670;
        case 0x19b674u: goto label_19b674;
        case 0x19b678u: goto label_19b678;
        case 0x19b67cu: goto label_19b67c;
        case 0x19b680u: goto label_19b680;
        case 0x19b684u: goto label_19b684;
        case 0x19b688u: goto label_19b688;
        case 0x19b68cu: goto label_19b68c;
        case 0x19b690u: goto label_19b690;
        case 0x19b694u: goto label_19b694;
        case 0x19b698u: goto label_19b698;
        case 0x19b69cu: goto label_19b69c;
        case 0x19b6a0u: goto label_19b6a0;
        case 0x19b6a4u: goto label_19b6a4;
        default: break;
    }

    ctx->pc = 0x19b4c0u;

label_19b4c0:
    // 0x19b4c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x19b4c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_19b4c4:
    // 0x19b4c4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x19b4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_19b4c8:
    // 0x19b4c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x19b4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_19b4cc:
    // 0x19b4cc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19b4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_19b4d0:
    // 0x19b4d0: 0xc066caa  jal         func_19B2A8
label_19b4d4:
    if (ctx->pc == 0x19B4D4u) {
        ctx->pc = 0x19B4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D0u;
        // 0x19b4d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4D8u;
        goto label_19b4d8;
    }
    ctx->pc = 0x19B4D0u;
    SET_GPR_U32(ctx, 31, 0x19B4D8u);
    ctx->pc = 0x19B4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4D0u;
    // 0x19b4d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B2A8u, 0x19B4D0u, 0x19B4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4D8u;
label_19b4d8:
    // 0x19b4d8: 0xc066c1c  jal         func_19B070
label_19b4dc:
    if (ctx->pc == 0x19B4DCu) {
        ctx->pc = 0x19B4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4D8u;
        // 0x19b4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4E0u;
        goto label_19b4e0;
    }
    ctx->pc = 0x19B4D8u;
    SET_GPR_U32(ctx, 31, 0x19B4E0u);
    ctx->pc = 0x19B4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4D8u;
    // 0x19b4dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19B070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19B070u, 0x19B4D8u, 0x19B4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4E0u;
label_19b4e0:
    // 0x19b4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19b4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19b4e4:
    // 0x19b4e4: 0xc066efe  jal         func_19BBF8
label_19b4e8:
    if (ctx->pc == 0x19B4E8u) {
        ctx->pc = 0x19B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B4E4u;
        // 0x19b4e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B4ECu;
        goto label_19b4ec;
    }
    ctx->pc = 0x19B4E4u;
    SET_GPR_U32(ctx, 31, 0x19B4ECu);
    ctx->pc = 0x19B4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B4E4u;
    // 0x19b4e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19BBF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19BBF8u, 0x19B4E4u, 0x19B4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B4ECu;
label_19b4ec:
    // 0x19b4ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19b4ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b4f0:
    // 0x19b4f0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19b4f4:
    // 0x19b4f4: 0x7a220090  lq          $v0, 0x90($s1)
    ctx->pc = 0x19b4f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 144)));
label_19b4f8:
    // 0x19b4f8: 0x8c64cdb4  lw          $a0, -0x324C($v1)
    ctx->pc = 0x19b4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954420)));
label_19b4fc:
    // 0x19b4fc: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19b4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_19b500:
    // 0x19b500: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x19b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19b504:
    // 0x19b504: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x19b504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_19b508:
    // 0x19b508: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19b50c:
    if (ctx->pc == 0x19B50Cu) {
        ctx->pc = 0x19B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B508u;
        // 0x19b50c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B510u;
        goto label_19b510;
    }
    ctx->pc = 0x19B508u;
    {
        const bool branch_taken_0x19b508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19B50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B508u;
        // 0x19b50c: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b508) {
            ctx->pc = 0x19B51Cu;
            goto label_19b51c;
        }
    }
    ctx->pc = 0x19B510u;
label_19b510:
    // 0x19b510: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x19b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_19b514:
    // 0x19b514: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_19b518:
    if (ctx->pc == 0x19B518u) {
        ctx->pc = 0x19B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B514u;
        // 0x19b518: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B51Cu;
        goto label_19b51c;
    }
    ctx->pc = 0x19B514u;
    {
        const bool branch_taken_0x19b514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B514u;
        // 0x19b518: 0x30820004  andi        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b514) {
            ctx->pc = 0x19B548u;
            goto label_19b548;
        }
    }
    ctx->pc = 0x19B51Cu;
label_19b51c:
    // 0x19b51c: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x19b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_19b520:
    // 0x19b520: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19b520u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_19b524:
    // 0x19b524: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b524u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b528:
    // 0x19b528: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19b528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19b52c:
    // 0x19b52c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19b530:
    // 0x19b530: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b534:
    // 0x19b534: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19b534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19b538:
    // 0x19b538: 0xe440cefc  swc1        $f0, -0x3104($v0)
    ctx->pc = 0x19b538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954748), bits); }
label_19b53c:
    // 0x19b53c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b540:
    // 0x19b540: 0x10000008  b           . + 4 + (0x8 << 2)
label_19b544:
    if (ctx->pc == 0x19B544u) {
        ctx->pc = 0x19B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B540u;
        // 0x19b544: 0xe461cf00  swc1        $f1, -0x3100($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954752), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B548u;
        goto label_19b548;
    }
    ctx->pc = 0x19B540u;
    {
        const bool branch_taken_0x19b540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B540u;
        // 0x19b544: 0xe461cf00  swc1        $f1, -0x3100($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294954752), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b540) {
            ctx->pc = 0x19B564u;
            goto label_19b564;
        }
    }
    ctx->pc = 0x19B548u;
label_19b548:
    // 0x19b548: 0x3c013fa6  lui         $at, 0x3FA6
    ctx->pc = 0x19b548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16294 << 16));
label_19b54c:
    // 0x19b54c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19b54cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_19b550:
    // 0x19b550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b554:
    // 0x19b554: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x19b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_19b558:
    // 0x19b558: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19b558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19b55c:
    // 0x19b55c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x19b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_19b560:
    // 0x19b560: 0xe440cefc  swc1        $f0, -0x3104($v0)
    ctx->pc = 0x19b560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294954748), bits); }
label_19b564:
    // 0x19b564: 0xc481cefc  lwc1        $f1, -0x3104($a0)
    ctx->pc = 0x19b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b568:
    // 0x19b568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19b568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19b56c:
    // 0x19b56c: 0xc460cf00  lwc1        $f0, -0x3100($v1)
    ctx->pc = 0x19b56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b570:
    // 0x19b570: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b574:
    // 0x19b574: 0xc60c00bc  lwc1        $f12, 0xBC($s0)
    ctx->pc = 0x19b574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_19b578:
    // 0x19b578: 0xc60d00c0  lwc1        $f13, 0xC0($s0)
    ctx->pc = 0x19b578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_19b57c:
    // 0x19b57c: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x19b57cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_19b580:
    // 0x19b580: 0xc068848  jal         func_1A2120
label_19b584:
    if (ctx->pc == 0x19B584u) {
        ctx->pc = 0x19B584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B580u;
        // 0x19b584: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B588u;
        goto label_19b588;
    }
    ctx->pc = 0x19B580u;
    SET_GPR_U32(ctx, 31, 0x19B588u);
    ctx->pc = 0x19B584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B580u;
    // 0x19b584: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2120u, 0x19B580u, 0x19B588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B588u;
label_19b588:
    // 0x19b588: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19b588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19b58c:
    // 0x19b58c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19b58cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19b590:
    // 0x19b590: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x19b590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_19b594:
    // 0x19b594: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x19b594u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_19b598:
    // 0x19b598: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x19b598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_19b59c:
    // 0x19b59c: 0x60f809  jalr        $v1
label_19b5a0:
    if (ctx->pc == 0x19B5A0u) {
        ctx->pc = 0x19B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B59Cu;
        // 0x19b5a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5A4u;
        goto label_19b5a4;
    }
    ctx->pc = 0x19B59Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19B5A4u);
        ctx->pc = 0x19B5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B59Cu;
        // 0x19b5a0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B59Cu, 0x19B5A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5A4u;
label_19b5a4:
    // 0x19b5a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19b5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19b5a8:
    // 0x19b5a8: 0x2605009c  addiu       $a1, $s0, 0x9C
    ctx->pc = 0x19b5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 156));
label_19b5ac:
    // 0x19b5ac: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x19b5acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_19b5b0:
    // 0x19b5b0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x19b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_19b5b4:
    // 0x19b5b4: 0x60f809  jalr        $v1
label_19b5b8:
    if (ctx->pc == 0x19B5B8u) {
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5BCu;
        goto label_19b5bc;
    }
    ctx->pc = 0x19B5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19B5BCu);
        ctx->pc = 0x19B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5B4u;
        // 0x19b5b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B5B4u, 0x19B5BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19B5BCu;
label_19b5bc:
    // 0x19b5bc: 0xc60100d8  lwc1        $f1, 0xD8($s0)
    ctx->pc = 0x19b5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19b5c0:
    // 0x19b5c0: 0xc60000b8  lwc1        $f0, 0xB8($s0)
    ctx->pc = 0x19b5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b5c4:
    // 0x19b5c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19b5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19b5c8:
    // 0x19b5c8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x19b5c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_19b5cc:
    // 0x19b5cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19b5ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_19b5d0:
    // 0x19b5d0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19b5d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b5d4:
    // 0x19b5d4: 0x0  nop
    ctx->pc = 0x19b5d4u;
    // NOP
label_19b5d8:
    // 0x19b5d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_19b5dc:
    if (ctx->pc == 0x19B5DCu) {
        ctx->pc = 0x19B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5D8u;
        // 0x19b5dc: 0xe60000d8  swc1        $f0, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B5E0u;
        goto label_19b5e0;
    }
    ctx->pc = 0x19B5D8u;
    {
        const bool branch_taken_0x19b5d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B5D8u;
        // 0x19b5dc: 0xe60000d8  swc1        $f0, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b5d8) {
            ctx->pc = 0x19B5E8u;
            goto label_19b5e8;
        }
    }
    ctx->pc = 0x19B5E0u;
label_19b5e0:
    // 0x19b5e0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x19b5e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_19b5e4:
    // 0x19b5e4: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x19b5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_19b5e8:
    // 0x19b5e8: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x19b5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b5ec:
    // 0x19b5ec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x19b5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b5f0:
    // 0x19b5f0: 0x0  nop
    ctx->pc = 0x19b5f0u;
    // NOP
label_19b5f4:
    // 0x19b5f4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b5f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b5f8:
    // 0x19b5f8: 0x0  nop
    ctx->pc = 0x19b5f8u;
    // NOP
label_19b5fc:
    // 0x19b5fc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_19b600:
    if (ctx->pc == 0x19B600u) {
        ctx->pc = 0x19B604u;
        goto label_19b604;
    }
    ctx->pc = 0x19B5FCu;
    {
        const bool branch_taken_0x19b5fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b5fc) {
            ctx->pc = 0x19B610u;
            goto label_19b610;
        }
    }
    ctx->pc = 0x19B604u;
label_19b604:
    // 0x19b604: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x19b604u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_19b608:
    // 0x19b608: 0xe60000d8  swc1        $f0, 0xD8($s0)
    ctx->pc = 0x19b608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
label_19b60c:
    // 0x19b60c: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x19b60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b610:
    // 0x19b610: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19b610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b614:
    // 0x19b614: 0x0  nop
    ctx->pc = 0x19b614u;
    // NOP
label_19b618:
    // 0x19b618: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b61c:
    if (ctx->pc == 0x19B61Cu) {
        ctx->pc = 0x19B61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B618u;
        // 0x19b61c: 0xe60200d8  swc1        $f2, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B620u;
        goto label_19b620;
    }
    ctx->pc = 0x19B618u;
    {
        const bool branch_taken_0x19b618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b618) {
            ctx->pc = 0x19B61Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B618u;
            // 0x19b61c: 0xe60200d8  swc1        $f2, 0xD8($s0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B620u;
            goto label_19b620;
        }
    }
    ctx->pc = 0x19B620u;
label_19b620:
    // 0x19b620: 0xc60000d8  lwc1        $f0, 0xD8($s0)
    ctx->pc = 0x19b620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19b624:
    // 0x19b624: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19b624u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19b628:
    // 0x19b628: 0x0  nop
    ctx->pc = 0x19b628u;
    // NOP
label_19b62c:
    // 0x19b62c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_19b630:
    if (ctx->pc == 0x19B630u) {
        ctx->pc = 0x19B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B62Cu;
        // 0x19b630: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B634u;
        goto label_19b634;
    }
    ctx->pc = 0x19B62Cu;
    {
        const bool branch_taken_0x19b62c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19b62c) {
            ctx->pc = 0x19B630u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19B62Cu;
            // 0x19b630: 0xe60100d8  swc1        $f1, 0xD8($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 216), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19B634u;
            goto label_19b634;
        }
    }
    ctx->pc = 0x19B634u;
label_19b634:
    // 0x19b634: 0xc60300d8  lwc1        $f3, 0xD8($s0)
    ctx->pc = 0x19b634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19b638:
    // 0x19b638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19b638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19b63c:
    // 0x19b63c: 0x3c01bdcc  lui         $at, 0xBDCC
    ctx->pc = 0x19b63cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48588 << 16));
label_19b640:
    // 0x19b640: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x19b640u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_19b644:
    // 0x19b644: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19b644u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19b648:
    // 0x19b648: 0x46021880  add.s       $f2, $f3, $f2
    ctx->pc = 0x19b648u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_19b64c:
    // 0x19b64c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x19b64cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_19b650:
    // 0x19b650: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19b650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_19b654:
    // 0x19b654: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19b654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19b658:
    // 0x19b658: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x19b658u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_19b65c:
    // 0x19b65c: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x19b65cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_19b660:
    // 0x19b660: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x19b660u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_19b664:
    // 0x19b664: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x19b664u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_19b668:
    // 0x19b668: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x19b668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_19b66c:
    // 0x19b66c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x19b66cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_19b670:
    // 0x19b670: 0x6ba3002f  ldl         $v1, 0x2F($sp)
    ctx->pc = 0x19b670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_19b674:
    // 0x19b674: 0x6fa30028  ldr         $v1, 0x28($sp)
    ctx->pc = 0x19b674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_19b678:
    // 0x19b678: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x19b678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b67c:
    // 0x19b67c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x19b67cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b680:
    // 0x19b680: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x19b680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b684:
    // 0x19b684: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x19b684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_19b688:
    // 0x19b688: 0xc068864  jal         func_1A2190
label_19b68c:
    if (ctx->pc == 0x19B68Cu) {
        ctx->pc = 0x19B68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B688u;
        // 0x19b68c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B690u;
        goto label_19b690;
    }
    ctx->pc = 0x19B688u;
    SET_GPR_U32(ctx, 31, 0x19B690u);
    ctx->pc = 0x19B68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19B688u;
    // 0x19b68c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A2190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A2190u, 0x19B688u, 0x19B690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19B690u;
label_19b690:
    // 0x19b690: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x19b690u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19b694:
    // 0x19b694: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x19b694u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19b698:
    // 0x19b698: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19b698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19b69c:
    // 0x19b69c: 0x3e00008  jr          $ra
label_19b6a0:
    if (ctx->pc == 0x19B6A0u) {
        ctx->pc = 0x19B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B69Cu;
        // 0x19b6a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19B6A4u;
        goto label_19b6a4;
    }
    ctx->pc = 0x19B69Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19B69Cu;
        // 0x19b6a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19B69Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19B6A4u;
label_19b6a4:
    // 0x19b6a4: 0x0  nop
    ctx->pc = 0x19b6a4u;
    // NOP
    ctx->pc = 0x19b6a8u;
}
