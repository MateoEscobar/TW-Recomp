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

// Function: sub_0033D498
// Address: 0x33d498 - 0x33d718
void sub_0033D498_0x33d498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033D498_0x33d498");
#endif

    switch (ctx->pc) {
        case 0x33d498u: goto label_33d498;
        case 0x33d49cu: goto label_33d49c;
        case 0x33d4a0u: goto label_33d4a0;
        case 0x33d4a4u: goto label_33d4a4;
        case 0x33d4a8u: goto label_33d4a8;
        case 0x33d4acu: goto label_33d4ac;
        case 0x33d4b0u: goto label_33d4b0;
        case 0x33d4b4u: goto label_33d4b4;
        case 0x33d4b8u: goto label_33d4b8;
        case 0x33d4bcu: goto label_33d4bc;
        case 0x33d4c0u: goto label_33d4c0;
        case 0x33d4c4u: goto label_33d4c4;
        case 0x33d4c8u: goto label_33d4c8;
        case 0x33d4ccu: goto label_33d4cc;
        case 0x33d4d0u: goto label_33d4d0;
        case 0x33d4d4u: goto label_33d4d4;
        case 0x33d4d8u: goto label_33d4d8;
        case 0x33d4dcu: goto label_33d4dc;
        case 0x33d4e0u: goto label_33d4e0;
        case 0x33d4e4u: goto label_33d4e4;
        case 0x33d4e8u: goto label_33d4e8;
        case 0x33d4ecu: goto label_33d4ec;
        case 0x33d4f0u: goto label_33d4f0;
        case 0x33d4f4u: goto label_33d4f4;
        case 0x33d4f8u: goto label_33d4f8;
        case 0x33d4fcu: goto label_33d4fc;
        case 0x33d500u: goto label_33d500;
        case 0x33d504u: goto label_33d504;
        case 0x33d508u: goto label_33d508;
        case 0x33d50cu: goto label_33d50c;
        case 0x33d510u: goto label_33d510;
        case 0x33d514u: goto label_33d514;
        case 0x33d518u: goto label_33d518;
        case 0x33d51cu: goto label_33d51c;
        case 0x33d520u: goto label_33d520;
        case 0x33d524u: goto label_33d524;
        case 0x33d528u: goto label_33d528;
        case 0x33d52cu: goto label_33d52c;
        case 0x33d530u: goto label_33d530;
        case 0x33d534u: goto label_33d534;
        case 0x33d538u: goto label_33d538;
        case 0x33d53cu: goto label_33d53c;
        case 0x33d540u: goto label_33d540;
        case 0x33d544u: goto label_33d544;
        case 0x33d548u: goto label_33d548;
        case 0x33d54cu: goto label_33d54c;
        case 0x33d550u: goto label_33d550;
        case 0x33d554u: goto label_33d554;
        case 0x33d558u: goto label_33d558;
        case 0x33d55cu: goto label_33d55c;
        case 0x33d560u: goto label_33d560;
        case 0x33d564u: goto label_33d564;
        case 0x33d568u: goto label_33d568;
        case 0x33d56cu: goto label_33d56c;
        case 0x33d570u: goto label_33d570;
        case 0x33d574u: goto label_33d574;
        case 0x33d578u: goto label_33d578;
        case 0x33d57cu: goto label_33d57c;
        case 0x33d580u: goto label_33d580;
        case 0x33d584u: goto label_33d584;
        case 0x33d588u: goto label_33d588;
        case 0x33d58cu: goto label_33d58c;
        case 0x33d590u: goto label_33d590;
        case 0x33d594u: goto label_33d594;
        case 0x33d598u: goto label_33d598;
        case 0x33d59cu: goto label_33d59c;
        case 0x33d5a0u: goto label_33d5a0;
        case 0x33d5a4u: goto label_33d5a4;
        case 0x33d5a8u: goto label_33d5a8;
        case 0x33d5acu: goto label_33d5ac;
        case 0x33d5b0u: goto label_33d5b0;
        case 0x33d5b4u: goto label_33d5b4;
        case 0x33d5b8u: goto label_33d5b8;
        case 0x33d5bcu: goto label_33d5bc;
        case 0x33d5c0u: goto label_33d5c0;
        case 0x33d5c4u: goto label_33d5c4;
        case 0x33d5c8u: goto label_33d5c8;
        case 0x33d5ccu: goto label_33d5cc;
        case 0x33d5d0u: goto label_33d5d0;
        case 0x33d5d4u: goto label_33d5d4;
        case 0x33d5d8u: goto label_33d5d8;
        case 0x33d5dcu: goto label_33d5dc;
        case 0x33d5e0u: goto label_33d5e0;
        case 0x33d5e4u: goto label_33d5e4;
        case 0x33d5e8u: goto label_33d5e8;
        case 0x33d5ecu: goto label_33d5ec;
        case 0x33d5f0u: goto label_33d5f0;
        case 0x33d5f4u: goto label_33d5f4;
        case 0x33d5f8u: goto label_33d5f8;
        case 0x33d5fcu: goto label_33d5fc;
        case 0x33d600u: goto label_33d600;
        case 0x33d604u: goto label_33d604;
        case 0x33d608u: goto label_33d608;
        case 0x33d60cu: goto label_33d60c;
        case 0x33d610u: goto label_33d610;
        case 0x33d614u: goto label_33d614;
        case 0x33d618u: goto label_33d618;
        case 0x33d61cu: goto label_33d61c;
        case 0x33d620u: goto label_33d620;
        case 0x33d624u: goto label_33d624;
        case 0x33d628u: goto label_33d628;
        case 0x33d62cu: goto label_33d62c;
        case 0x33d630u: goto label_33d630;
        case 0x33d634u: goto label_33d634;
        case 0x33d638u: goto label_33d638;
        case 0x33d63cu: goto label_33d63c;
        case 0x33d640u: goto label_33d640;
        case 0x33d644u: goto label_33d644;
        case 0x33d648u: goto label_33d648;
        case 0x33d64cu: goto label_33d64c;
        case 0x33d650u: goto label_33d650;
        case 0x33d654u: goto label_33d654;
        case 0x33d658u: goto label_33d658;
        case 0x33d65cu: goto label_33d65c;
        case 0x33d660u: goto label_33d660;
        case 0x33d664u: goto label_33d664;
        case 0x33d668u: goto label_33d668;
        case 0x33d66cu: goto label_33d66c;
        case 0x33d670u: goto label_33d670;
        case 0x33d674u: goto label_33d674;
        case 0x33d678u: goto label_33d678;
        case 0x33d67cu: goto label_33d67c;
        case 0x33d680u: goto label_33d680;
        case 0x33d684u: goto label_33d684;
        case 0x33d688u: goto label_33d688;
        case 0x33d68cu: goto label_33d68c;
        case 0x33d690u: goto label_33d690;
        case 0x33d694u: goto label_33d694;
        case 0x33d698u: goto label_33d698;
        case 0x33d69cu: goto label_33d69c;
        case 0x33d6a0u: goto label_33d6a0;
        case 0x33d6a4u: goto label_33d6a4;
        case 0x33d6a8u: goto label_33d6a8;
        case 0x33d6acu: goto label_33d6ac;
        case 0x33d6b0u: goto label_33d6b0;
        case 0x33d6b4u: goto label_33d6b4;
        case 0x33d6b8u: goto label_33d6b8;
        case 0x33d6bcu: goto label_33d6bc;
        case 0x33d6c0u: goto label_33d6c0;
        case 0x33d6c4u: goto label_33d6c4;
        case 0x33d6c8u: goto label_33d6c8;
        case 0x33d6ccu: goto label_33d6cc;
        case 0x33d6d0u: goto label_33d6d0;
        case 0x33d6d4u: goto label_33d6d4;
        case 0x33d6d8u: goto label_33d6d8;
        case 0x33d6dcu: goto label_33d6dc;
        case 0x33d6e0u: goto label_33d6e0;
        case 0x33d6e4u: goto label_33d6e4;
        case 0x33d6e8u: goto label_33d6e8;
        case 0x33d6ecu: goto label_33d6ec;
        case 0x33d6f0u: goto label_33d6f0;
        case 0x33d6f4u: goto label_33d6f4;
        case 0x33d6f8u: goto label_33d6f8;
        case 0x33d6fcu: goto label_33d6fc;
        case 0x33d700u: goto label_33d700;
        case 0x33d704u: goto label_33d704;
        case 0x33d708u: goto label_33d708;
        case 0x33d70cu: goto label_33d70c;
        case 0x33d710u: goto label_33d710;
        case 0x33d714u: goto label_33d714;
        default: break;
    }

    ctx->pc = 0x33d498u;

label_33d498:
    // 0x33d498: 0x27bdf740  addiu       $sp, $sp, -0x8C0
    ctx->pc = 0x33d498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965056));
label_33d49c:
    // 0x33d49c: 0x7fb20890  sq          $s2, 0x890($sp)
    ctx->pc = 0x33d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2192), GPR_VEC(ctx, 18));
label_33d4a0:
    // 0x33d4a0: 0x7fb30880  sq          $s3, 0x880($sp)
    ctx->pc = 0x33d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2176), GPR_VEC(ctx, 19));
label_33d4a4:
    // 0x33d4a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33d4a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33d4a8:
    // 0x33d4a8: 0x7fb50860  sq          $s5, 0x860($sp)
    ctx->pc = 0x33d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2144), GPR_VEC(ctx, 21));
label_33d4ac:
    // 0x33d4ac: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33d4acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_33d4b0:
    // 0x33d4b0: 0x7fb008b0  sq          $s0, 0x8B0($sp)
    ctx->pc = 0x33d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2224), GPR_VEC(ctx, 16));
label_33d4b4:
    // 0x33d4b4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x33d4b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_33d4b8:
    // 0x33d4b8: 0x7fb108a0  sq          $s1, 0x8A0($sp)
    ctx->pc = 0x33d4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2208), GPR_VEC(ctx, 17));
label_33d4bc:
    // 0x33d4bc: 0x7fb40870  sq          $s4, 0x870($sp)
    ctx->pc = 0x33d4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2160), GPR_VEC(ctx, 20));
label_33d4c0:
    // 0x33d4c0: 0x7fb60850  sq          $s6, 0x850($sp)
    ctx->pc = 0x33d4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2128), GPR_VEC(ctx, 22));
label_33d4c4:
    // 0x33d4c4: 0x7fb70840  sq          $s7, 0x840($sp)
    ctx->pc = 0x33d4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2112), GPR_VEC(ctx, 23));
label_33d4c8:
    // 0x33d4c8: 0x7fbe0830  sq          $fp, 0x830($sp)
    ctx->pc = 0x33d4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2096), GPR_VEC(ctx, 30));
label_33d4cc:
    // 0x33d4cc: 0xffbf0820  sd          $ra, 0x820($sp)
    ctx->pc = 0x33d4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2080), GPR_U64(ctx, 31));
label_33d4d0:
    // 0x33d4d0: 0xafa40800  sw          $a0, 0x800($sp)
    ctx->pc = 0x33d4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2048), GPR_U32(ctx, 4));
label_33d4d4:
    // 0x33d4d4: 0x8e620044  lw          $v0, 0x44($s3)
    ctx->pc = 0x33d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_33d4d8:
    // 0x33d4d8: 0xafa80804  sw          $t0, 0x804($sp)
    ctx->pc = 0x33d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2052), GPR_U32(ctx, 8));
label_33d4dc:
    // 0x33d4dc: 0xafa90808  sw          $t1, 0x808($sp)
    ctx->pc = 0x33d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2056), GPR_U32(ctx, 9));
label_33d4e0:
    // 0x33d4e0: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x33d4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_33d4e4:
    // 0x33d4e4: 0xafaa080c  sw          $t2, 0x80C($sp)
    ctx->pc = 0x33d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2060), GPR_U32(ctx, 10));
label_33d4e8:
    // 0x33d4e8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_33d4ec:
    if (ctx->pc == 0x33D4ECu) {
        ctx->pc = 0x33D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4E8u;
        // 0x33d4ec: 0xafab0810  sw          $t3, 0x810($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2064), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D4F0u;
        goto label_33d4f0;
    }
    ctx->pc = 0x33D4E8u;
    {
        const bool branch_taken_0x33d4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D4E8u;
        // 0x33d4ec: 0xafab0810  sw          $t3, 0x810($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2064), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d4e8) {
            ctx->pc = 0x33D578u;
            goto label_33d578;
        }
    }
    ctx->pc = 0x33D4F0u;
label_33d4f0:
    // 0x33d4f0: 0x8e700034  lw          $s0, 0x34($s3)
    ctx->pc = 0x33d4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33d4f4:
    // 0x33d4f4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x33d4f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33d4f8:
    // 0x33d4f8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x33d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33d4fc:
    // 0x33d4fc: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x33d4fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_33d500:
    // 0x33d500: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x33d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_33d504:
    // 0x33d504: 0x40f809  jalr        $v0
label_33d508:
    if (ctx->pc == 0x33D508u) {
        ctx->pc = 0x33D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D504u;
        // 0x33d508: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D50Cu;
        goto label_33d50c;
    }
    ctx->pc = 0x33D504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33D50Cu);
        ctx->pc = 0x33D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D504u;
        // 0x33d508: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D504u, 0x33D50Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D50Cu;
label_33d50c:
    // 0x33d50c: 0x3c030400  lui         $v1, 0x400
    ctx->pc = 0x33d50cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
label_33d510:
    // 0x33d510: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x33d510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_33d514:
    // 0x33d514: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_33d518:
    if (ctx->pc == 0x33D518u) {
        ctx->pc = 0x33D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D514u;
        // 0x33d518: 0x24110044  addiu       $s1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D51Cu;
        goto label_33d51c;
    }
    ctx->pc = 0x33D514u;
    {
        const bool branch_taken_0x33d514 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d514) {
            ctx->pc = 0x33D518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D514u;
            // 0x33d518: 0x24110044  addiu       $s1, $zero, 0x44 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D534u;
            goto label_33d534;
        }
    }
    ctx->pc = 0x33D51Cu;
label_33d51c:
    // 0x33d51c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33d51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33d520:
    // 0x33d520: 0xc089998  jal         func_226660
label_33d524:
    if (ctx->pc == 0x33D524u) {
        ctx->pc = 0x33D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D520u;
        // 0x33d524: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D528u;
        goto label_33d528;
    }
    ctx->pc = 0x33D520u;
    SET_GPR_U32(ctx, 31, 0x33D528u);
    ctx->pc = 0x33D524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D520u;
    // 0x33d524: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226660u, 0x33D520u, 0x33D528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D528u;
label_33d528:
    // 0x33d528: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_33d52c:
    if (ctx->pc == 0x33D52Cu) {
        ctx->pc = 0x33D52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D528u;
        // 0x33d52c: 0x96a20032  lhu         $v0, 0x32($s5) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D530u;
        goto label_33d530;
    }
    ctx->pc = 0x33D528u;
    {
        const bool branch_taken_0x33d528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d528) {
            ctx->pc = 0x33D52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D528u;
            // 0x33d52c: 0x96a20032  lhu         $v0, 0x32($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D538u;
            goto label_33d538;
        }
    }
    ctx->pc = 0x33D530u;
label_33d530:
    // 0x33d530: 0x24110044  addiu       $s1, $zero, 0x44
    ctx->pc = 0x33d530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_33d534:
    // 0x33d534: 0x96a20032  lhu         $v0, 0x32($s5)
    ctx->pc = 0x33d534u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 50)));
label_33d538:
    // 0x33d538: 0x36240020  ori         $a0, $s1, 0x20
    ctx->pc = 0x33d538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
label_33d53c:
    // 0x33d53c: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x33d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_33d540:
    // 0x33d540: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x33d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_33d544:
    // 0x33d544: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x33d544u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_33d548:
    // 0x33d548: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x33d548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_33d54c:
    // 0x33d54c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_33d550:
    if (ctx->pc == 0x33D550u) {
        ctx->pc = 0x33D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D54Cu;
        // 0x33d550: 0x82880b  movn        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D554u;
        goto label_33d554;
    }
    ctx->pc = 0x33D54Cu;
    {
        const bool branch_taken_0x33d54c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D54Cu;
        // 0x33d550: 0x82880b  movn        $s1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d54c) {
            ctx->pc = 0x33D55Cu;
            goto label_33d55c;
        }
    }
    ctx->pc = 0x33D554u;
label_33d554:
    // 0x33d554: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x33d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_33d558:
    // 0x33d558: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x33d558u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_33d55c:
    // 0x33d55c: 0x820301b0  lb          $v1, 0x1B0($s0)
    ctx->pc = 0x33d55cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
label_33d560:
    // 0x33d560: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x33d560u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_33d564:
    // 0x33d564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_33d568:
    if (ctx->pc == 0x33D568u) {
        ctx->pc = 0x33D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D564u;
        // 0x33d568: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D56Cu;
        goto label_33d56c;
    }
    ctx->pc = 0x33D564u;
    {
        const bool branch_taken_0x33d564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D564u;
        // 0x33d568: 0x3c020008  lui         $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d564) {
            ctx->pc = 0x33D57Cu;
            goto label_33d57c;
        }
    }
    ctx->pc = 0x33D56Cu;
label_33d56c:
    // 0x33d56c: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x33d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_33d570:
    // 0x33d570: 0x10000002  b           . + 4 + (0x2 << 2)
label_33d574:
    if (ctx->pc == 0x33D574u) {
        ctx->pc = 0x33D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D570u;
        // 0x33d574: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D578u;
        goto label_33d578;
    }
    ctx->pc = 0x33D570u;
    {
        const bool branch_taken_0x33d570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D570u;
        // 0x33d574: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d570) {
            ctx->pc = 0x33D57Cu;
            goto label_33d57c;
        }
    }
    ctx->pc = 0x33D578u;
label_33d578:
    // 0x33d578: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x33d578u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_33d57c:
    // 0x33d57c: 0x8e680034  lw          $t0, 0x34($s3)
    ctx->pc = 0x33d57cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33d580:
    // 0x33d580: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x33d580u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_33d584:
    // 0x33d584: 0x8fa40800  lw          $a0, 0x800($sp)
    ctx->pc = 0x33d584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
label_33d588:
    // 0x33d588: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x33d588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d58c:
    // 0x33d58c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x33d58cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d590:
    // 0x33d590: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33d590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_33d594:
    // 0x33d594: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x33d594u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33d598:
    // 0x33d598: 0xc0cffac  jal         func_33FEB0
label_33d59c:
    if (ctx->pc == 0x33D59Cu) {
        ctx->pc = 0x33D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D598u;
        // 0x33d59c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5A0u;
        goto label_33d5a0;
    }
    ctx->pc = 0x33D598u;
    SET_GPR_U32(ctx, 31, 0x33D5A0u);
    ctx->pc = 0x33D59Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D598u;
    // 0x33d59c: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x33FEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33FEB0u, 0x33D598u, 0x33D5A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D5A0u;
label_33d5a0:
    // 0x33d5a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x33d5a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33d5a4:
    // 0x33d5a4: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
label_33d5a8:
    if (ctx->pc == 0x33D5A8u) {
        ctx->pc = 0x33D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5A4u;
        // 0x33d5a8: 0xafa20814  sw          $v0, 0x814($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5ACu;
        goto label_33d5ac;
    }
    ctx->pc = 0x33D5A4u;
    {
        const bool branch_taken_0x33d5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5A4u;
        // 0x33d5a8: 0xafa20814  sw          $v0, 0x814($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 2068), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5a4) {
            ctx->pc = 0x33D6E8u;
            goto label_33d6e8;
        }
    }
    ctx->pc = 0x33D5ACu;
label_33d5ac:
    // 0x33d5ac: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x33d5acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_33d5b0:
    // 0x33d5b0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x33d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_33d5b4:
    // 0x33d5b4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x33d5b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_33d5b8:
    // 0x33d5b8: 0x9643003c  lhu         $v1, 0x3C($s2)
    ctx->pc = 0x33d5b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 60)));
label_33d5bc:
    // 0x33d5bc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_33d5c0:
    if (ctx->pc == 0x33D5C0u) {
        ctx->pc = 0x33D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5BCu;
        // 0x33d5c0: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5C4u;
        goto label_33d5c4;
    }
    ctx->pc = 0x33D5BCu;
    {
        const bool branch_taken_0x33d5bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d5bc) {
            ctx->pc = 0x33D5C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D5BCu;
            // 0x33d5c0: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D5DCu;
            goto label_33d5dc;
        }
    }
    ctx->pc = 0x33D5C4u;
label_33d5c4:
    // 0x33d5c4: 0x9662003c  lhu         $v0, 0x3C($s3)
    ctx->pc = 0x33d5c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 60)));
label_33d5c8:
    // 0x33d5c8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_33d5cc:
    if (ctx->pc == 0x33D5CCu) {
        ctx->pc = 0x33D5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5C8u;
        // 0x33d5cc: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5D0u;
        goto label_33d5d0;
    }
    ctx->pc = 0x33D5C8u;
    {
        const bool branch_taken_0x33d5c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d5c8) {
            ctx->pc = 0x33D5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D5C8u;
            // 0x33d5cc: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D5DCu;
            goto label_33d5dc;
        }
    }
    ctx->pc = 0x33D5D0u;
label_33d5d0:
    // 0x33d5d0: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_33d5d4:
    if (ctx->pc == 0x33D5D4u) {
        ctx->pc = 0x33D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5D0u;
        // 0x33d5d4: 0x26170001  addiu       $s7, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5D8u;
        goto label_33d5d8;
    }
    ctx->pc = 0x33D5D0u;
    {
        const bool branch_taken_0x33d5d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x33D5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5D0u;
        // 0x33d5d4: 0x26170001  addiu       $s7, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5d0) {
            ctx->pc = 0x33D6D4u;
            goto label_33d6d4;
        }
    }
    ctx->pc = 0x33D5D8u;
label_33d5d8:
    // 0x33d5d8: 0x8e660034  lw          $a2, 0x34($s3)
    ctx->pc = 0x33d5d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33d5dc:
    // 0x33d5dc: 0x26170001  addiu       $s7, $s0, 0x1
    ctx->pc = 0x33d5dcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_33d5e0:
    // 0x33d5e0: 0x8e450034  lw          $a1, 0x34($s2)
    ctx->pc = 0x33d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33d5e4:
    // 0x33d5e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x33d5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_33d5e8:
    // 0x33d5e8: 0x84640110  lh          $a0, 0x110($v1)
    ctx->pc = 0x33d5e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_33d5ec:
    // 0x33d5ec: 0x8c620114  lw          $v0, 0x114($v1)
    ctx->pc = 0x33d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 276)));
label_33d5f0:
    // 0x33d5f0: 0x40f809  jalr        $v0
label_33d5f4:
    if (ctx->pc == 0x33D5F4u) {
        ctx->pc = 0x33D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5F0u;
        // 0x33d5f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D5F8u;
        goto label_33d5f8;
    }
    ctx->pc = 0x33D5F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33D5F8u);
        ctx->pc = 0x33D5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5F0u;
        // 0x33d5f4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D5F0u, 0x33D5F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D5F8u;
label_33d5f8:
    // 0x33d5f8: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_33d5fc:
    if (ctx->pc == 0x33D5FCu) {
        ctx->pc = 0x33D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5F8u;
        // 0x33d5fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D600u;
        goto label_33d600;
    }
    ctx->pc = 0x33D5F8u;
    {
        const bool branch_taken_0x33d5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D5F8u;
        // 0x33d5fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d5f8) {
            ctx->pc = 0x33D6D4u;
            goto label_33d6d4;
        }
    }
    ctx->pc = 0x33D600u;
label_33d600:
    // 0x33d600: 0x8e430074  lw          $v1, 0x74($s2)
    ctx->pc = 0x33d600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
label_33d604:
    // 0x33d604: 0x8e670034  lw          $a3, 0x34($s3)
    ctx->pc = 0x33d604u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33d608:
    // 0x33d608: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x33d608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_33d60c:
    // 0x33d60c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x33d60cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_33d610:
    // 0x33d610: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x33d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_33d614:
    // 0x33d614: 0x40f809  jalr        $v0
label_33d618:
    if (ctx->pc == 0x33D618u) {
        ctx->pc = 0x33D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D614u;
        // 0x33d618: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D61Cu;
        goto label_33d61c;
    }
    ctx->pc = 0x33D614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x33D61Cu);
        ctx->pc = 0x33D618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D614u;
        // 0x33d618: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D614u, 0x33D61Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D61Cu;
label_33d61c:
    // 0x33d61c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33d61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33d620:
    // 0x33d620: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_33d624:
    if (ctx->pc == 0x33D624u) {
        ctx->pc = 0x33D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D620u;
        // 0x33d624: 0x8fa20800  lw          $v0, 0x800($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D628u;
        goto label_33d628;
    }
    ctx->pc = 0x33D620u;
    {
        const bool branch_taken_0x33d620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D620u;
        // 0x33d624: 0x8fa20800  lw          $v0, 0x800($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d620) {
            ctx->pc = 0x33D6D4u;
            goto label_33d6d4;
        }
    }
    ctx->pc = 0x33D628u;
label_33d628:
    // 0x33d628: 0x241e0014  addiu       $fp, $zero, 0x14
    ctx->pc = 0x33d628u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_33d62c:
    // 0x33d62c: 0x241600c0  addiu       $s6, $zero, 0xC0
    ctx->pc = 0x33d62cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_33d630:
    // 0x33d630: 0x2454007c  addiu       $s4, $v0, 0x7C
    ctx->pc = 0x33d630u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
label_33d634:
    // 0x33d634: 0x96220032  lhu         $v0, 0x32($s1)
    ctx->pc = 0x33d634u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
label_33d638:
    // 0x33d638: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x33d638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_33d63c:
    // 0x33d63c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_33d640:
    if (ctx->pc == 0x33D640u) {
        ctx->pc = 0x33D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D63Cu;
        // 0x33d640: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D644u;
        goto label_33d644;
    }
    ctx->pc = 0x33D63Cu;
    {
        const bool branch_taken_0x33d63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33d63c) {
            ctx->pc = 0x33D640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D63Cu;
            // 0x33d640: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D6CCu;
            goto label_33d6cc;
        }
    }
    ctx->pc = 0x33D644u;
label_33d644:
    // 0x33d644: 0x92a30030  lbu         $v1, 0x30($s5)
    ctx->pc = 0x33d644u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 48)));
label_33d648:
    // 0x33d648: 0x92220030  lbu         $v0, 0x30($s1)
    ctx->pc = 0x33d648u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 48)));
label_33d64c:
    // 0x33d64c: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x33d64cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_33d650:
    // 0x33d650: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33d650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_33d654:
    // 0x33d654: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33d654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33d658:
    // 0x33d658: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x33d658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_33d65c:
    // 0x33d65c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x33d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33d660:
    // 0x33d660: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_33d664:
    if (ctx->pc == 0x33D664u) {
        ctx->pc = 0x33D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D660u;
        // 0x33d664: 0x8fa4080c  lw          $a0, 0x80C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D668u;
        goto label_33d668;
    }
    ctx->pc = 0x33D660u;
    {
        const bool branch_taken_0x33d660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D660u;
        // 0x33d664: 0x8fa4080c  lw          $a0, 0x80C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d660) {
            ctx->pc = 0x33D6C8u;
            goto label_33d6c8;
        }
    }
    ctx->pc = 0x33D668u;
label_33d668:
    // 0x33d668: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x33d668u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33d66c:
    // 0x33d66c: 0x8fa90810  lw          $t1, 0x810($sp)
    ctx->pc = 0x33d66cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2064)));
label_33d670:
    // 0x33d670: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x33d670u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33d674:
    // 0x33d674: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x33d674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_33d678:
    // 0x33d678: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x33d678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_33d67c:
    // 0x33d67c: 0x8fa40804  lw          $a0, 0x804($sp)
    ctx->pc = 0x33d67cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2052)));
label_33d680:
    // 0x33d680: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x33d680u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d684:
    // 0x33d684: 0x800013  mtlo        $a0
    ctx->pc = 0x33d684u;
    ctx->lo = GPR_U64(ctx, 4);
label_33d688:
    // 0x33d688: 0x70568000  madd        $s0, $v0, $s6
    ctx->pc = 0x33d688u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 22); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_33d68c:
    // 0x33d68c: 0x60f809  jalr        $v1
label_33d690:
    if (ctx->pc == 0x33D690u) {
        ctx->pc = 0x33D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D68Cu;
        // 0x33d690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D694u;
        goto label_33d694;
    }
    ctx->pc = 0x33D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x33D694u);
        ctx->pc = 0x33D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D68Cu;
        // 0x33d690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D68Cu, 0x33D694u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x33D694u;
label_33d694:
    // 0x33d694: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_33d698:
    if (ctx->pc == 0x33D698u) {
        ctx->pc = 0x33D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D694u;
        // 0x33d698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D69Cu;
        goto label_33d69c;
    }
    ctx->pc = 0x33D694u;
    {
        const bool branch_taken_0x33d694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D694u;
        // 0x33d698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d694) {
            ctx->pc = 0x33D6C8u;
            goto label_33d6c8;
        }
    }
    ctx->pc = 0x33D69Cu;
label_33d69c:
    // 0x33d69c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33d69cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_33d6a0:
    // 0x33d6a0: 0x8fa40800  lw          $a0, 0x800($sp)
    ctx->pc = 0x33d6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2048)));
label_33d6a4:
    // 0x33d6a4: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x33d6a4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_33d6a8:
    // 0x33d6a8: 0x8e490034  lw          $t1, 0x34($s2)
    ctx->pc = 0x33d6a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_33d6ac:
    // 0x33d6ac: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x33d6acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_33d6b0:
    // 0x33d6b0: 0x8fa60808  lw          $a2, 0x808($sp)
    ctx->pc = 0x33d6b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2056)));
label_33d6b4:
    // 0x33d6b4: 0x8e680034  lw          $t0, 0x34($s3)
    ctx->pc = 0x33d6b4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_33d6b8:
    // 0x33d6b8: 0xc0cf5c6  jal         func_33D718
label_33d6bc:
    if (ctx->pc == 0x33D6BCu) {
        ctx->pc = 0x33D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6B8u;
        // 0x33d6bc: 0x8fa7080c  lw          $a3, 0x80C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6C0u;
        goto label_33d6c0;
    }
    ctx->pc = 0x33D6B8u;
    SET_GPR_U32(ctx, 31, 0x33D6C0u);
    ctx->pc = 0x33D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33D6B8u;
    // 0x33d6bc: 0x8fa7080c  lw          $a3, 0x80C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33D718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D718u, 0x33D6B8u, 0x33D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33D6C0u;
label_33d6c0:
    // 0x33d6c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_33d6c4:
    if (ctx->pc == 0x33D6C4u) {
        ctx->pc = 0x33D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6C0u;
        // 0x33d6c4: 0x8fa30814  lw          $v1, 0x814($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6C8u;
        goto label_33d6c8;
    }
    ctx->pc = 0x33D6C0u;
    {
        const bool branch_taken_0x33d6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33D6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6C0u;
        // 0x33d6c4: 0x8fa30814  lw          $v1, 0x814($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6c0) {
            ctx->pc = 0x33D6D8u;
            goto label_33d6d8;
        }
    }
    ctx->pc = 0x33D6C8u;
label_33d6c8:
    // 0x33d6c8: 0x8e310000  lw          $s1, 0x0($s1)
    ctx->pc = 0x33d6c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_33d6cc:
    // 0x33d6cc: 0x5620ffda  bnel        $s1, $zero, . + 4 + (-0x26 << 2)
label_33d6d0:
    if (ctx->pc == 0x33D6D0u) {
        ctx->pc = 0x33D6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6CCu;
        // 0x33d6d0: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6D4u;
        goto label_33d6d4;
    }
    ctx->pc = 0x33D6CCu;
    {
        const bool branch_taken_0x33d6cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x33d6cc) {
            ctx->pc = 0x33D6D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33D6CCu;
            // 0x33d6d0: 0x96220032  lhu         $v0, 0x32($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 50)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33D638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d638;
        }
    }
    ctx->pc = 0x33D6D4u;
label_33d6d4:
    // 0x33d6d4: 0x8fa30814  lw          $v1, 0x814($sp)
    ctx->pc = 0x33d6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2068)));
label_33d6d8:
    // 0x33d6d8: 0x2e0802d  daddu       $s0, $s7, $zero
    ctx->pc = 0x33d6d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_33d6dc:
    // 0x33d6dc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x33d6dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_33d6e0:
    // 0x33d6e0: 0x1440ffb3  bnez        $v0, . + 4 + (-0x4D << 2)
label_33d6e4:
    if (ctx->pc == 0x33D6E4u) {
        ctx->pc = 0x33D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6E0u;
        // 0x33d6e4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D6E8u;
        goto label_33d6e8;
    }
    ctx->pc = 0x33D6E0u;
    {
        const bool branch_taken_0x33d6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33D6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D6E0u;
        // 0x33d6e4: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33d6e0) {
            ctx->pc = 0x33D5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33d5b0;
        }
    }
    ctx->pc = 0x33D6E8u;
label_33d6e8:
    // 0x33d6e8: 0x7bb008b0  lq          $s0, 0x8B0($sp)
    ctx->pc = 0x33d6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2224)));
label_33d6ec:
    // 0x33d6ec: 0x7bb108a0  lq          $s1, 0x8A0($sp)
    ctx->pc = 0x33d6ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2208)));
label_33d6f0:
    // 0x33d6f0: 0x7bb20890  lq          $s2, 0x890($sp)
    ctx->pc = 0x33d6f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2192)));
label_33d6f4:
    // 0x33d6f4: 0x7bb30880  lq          $s3, 0x880($sp)
    ctx->pc = 0x33d6f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2176)));
label_33d6f8:
    // 0x33d6f8: 0x7bb40870  lq          $s4, 0x870($sp)
    ctx->pc = 0x33d6f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2160)));
label_33d6fc:
    // 0x33d6fc: 0x7bb50860  lq          $s5, 0x860($sp)
    ctx->pc = 0x33d6fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2144)));
label_33d700:
    // 0x33d700: 0x7bb60850  lq          $s6, 0x850($sp)
    ctx->pc = 0x33d700u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 2128)));
label_33d704:
    // 0x33d704: 0x7bb70840  lq          $s7, 0x840($sp)
    ctx->pc = 0x33d704u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 2112)));
label_33d708:
    // 0x33d708: 0x7bbe0830  lq          $fp, 0x830($sp)
    ctx->pc = 0x33d708u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 2096)));
label_33d70c:
    // 0x33d70c: 0xdfbf0820  ld          $ra, 0x820($sp)
    ctx->pc = 0x33d70cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2080)));
label_33d710:
    // 0x33d710: 0x3e00008  jr          $ra
label_33d714:
    if (ctx->pc == 0x33D714u) {
        ctx->pc = 0x33D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D710u;
        // 0x33d714: 0x27bd08c0  addiu       $sp, $sp, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x33D718u;
        goto label_fallthrough_0x33d710;
    }
    ctx->pc = 0x33D710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33D714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33D710u;
        // 0x33d714: 0x27bd08c0  addiu       $sp, $sp, 0x8C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33D710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x33d710:
    ctx->pc = 0x33D718u;
}
