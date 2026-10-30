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

// Function: sub_003EE4A8
// Address: 0x3ee4a8 - 0x3ee838
void sub_003EE4A8_0x3ee4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EE4A8_0x3ee4a8");
#endif

    switch (ctx->pc) {
        case 0x3ee4a8u: goto label_3ee4a8;
        case 0x3ee4acu: goto label_3ee4ac;
        case 0x3ee4b0u: goto label_3ee4b0;
        case 0x3ee4b4u: goto label_3ee4b4;
        case 0x3ee4b8u: goto label_3ee4b8;
        case 0x3ee4bcu: goto label_3ee4bc;
        case 0x3ee4c0u: goto label_3ee4c0;
        case 0x3ee4c4u: goto label_3ee4c4;
        case 0x3ee4c8u: goto label_3ee4c8;
        case 0x3ee4ccu: goto label_3ee4cc;
        case 0x3ee4d0u: goto label_3ee4d0;
        case 0x3ee4d4u: goto label_3ee4d4;
        case 0x3ee4d8u: goto label_3ee4d8;
        case 0x3ee4dcu: goto label_3ee4dc;
        case 0x3ee4e0u: goto label_3ee4e0;
        case 0x3ee4e4u: goto label_3ee4e4;
        case 0x3ee4e8u: goto label_3ee4e8;
        case 0x3ee4ecu: goto label_3ee4ec;
        case 0x3ee4f0u: goto label_3ee4f0;
        case 0x3ee4f4u: goto label_3ee4f4;
        case 0x3ee4f8u: goto label_3ee4f8;
        case 0x3ee4fcu: goto label_3ee4fc;
        case 0x3ee500u: goto label_3ee500;
        case 0x3ee504u: goto label_3ee504;
        case 0x3ee508u: goto label_3ee508;
        case 0x3ee50cu: goto label_3ee50c;
        case 0x3ee510u: goto label_3ee510;
        case 0x3ee514u: goto label_3ee514;
        case 0x3ee518u: goto label_3ee518;
        case 0x3ee51cu: goto label_3ee51c;
        case 0x3ee520u: goto label_3ee520;
        case 0x3ee524u: goto label_3ee524;
        case 0x3ee528u: goto label_3ee528;
        case 0x3ee52cu: goto label_3ee52c;
        case 0x3ee530u: goto label_3ee530;
        case 0x3ee534u: goto label_3ee534;
        case 0x3ee538u: goto label_3ee538;
        case 0x3ee53cu: goto label_3ee53c;
        case 0x3ee540u: goto label_3ee540;
        case 0x3ee544u: goto label_3ee544;
        case 0x3ee548u: goto label_3ee548;
        case 0x3ee54cu: goto label_3ee54c;
        case 0x3ee550u: goto label_3ee550;
        case 0x3ee554u: goto label_3ee554;
        case 0x3ee558u: goto label_3ee558;
        case 0x3ee55cu: goto label_3ee55c;
        case 0x3ee560u: goto label_3ee560;
        case 0x3ee564u: goto label_3ee564;
        case 0x3ee568u: goto label_3ee568;
        case 0x3ee56cu: goto label_3ee56c;
        case 0x3ee570u: goto label_3ee570;
        case 0x3ee574u: goto label_3ee574;
        case 0x3ee578u: goto label_3ee578;
        case 0x3ee57cu: goto label_3ee57c;
        case 0x3ee580u: goto label_3ee580;
        case 0x3ee584u: goto label_3ee584;
        case 0x3ee588u: goto label_3ee588;
        case 0x3ee58cu: goto label_3ee58c;
        case 0x3ee590u: goto label_3ee590;
        case 0x3ee594u: goto label_3ee594;
        case 0x3ee598u: goto label_3ee598;
        case 0x3ee59cu: goto label_3ee59c;
        case 0x3ee5a0u: goto label_3ee5a0;
        case 0x3ee5a4u: goto label_3ee5a4;
        case 0x3ee5a8u: goto label_3ee5a8;
        case 0x3ee5acu: goto label_3ee5ac;
        case 0x3ee5b0u: goto label_3ee5b0;
        case 0x3ee5b4u: goto label_3ee5b4;
        case 0x3ee5b8u: goto label_3ee5b8;
        case 0x3ee5bcu: goto label_3ee5bc;
        case 0x3ee5c0u: goto label_3ee5c0;
        case 0x3ee5c4u: goto label_3ee5c4;
        case 0x3ee5c8u: goto label_3ee5c8;
        case 0x3ee5ccu: goto label_3ee5cc;
        case 0x3ee5d0u: goto label_3ee5d0;
        case 0x3ee5d4u: goto label_3ee5d4;
        case 0x3ee5d8u: goto label_3ee5d8;
        case 0x3ee5dcu: goto label_3ee5dc;
        case 0x3ee5e0u: goto label_3ee5e0;
        case 0x3ee5e4u: goto label_3ee5e4;
        case 0x3ee5e8u: goto label_3ee5e8;
        case 0x3ee5ecu: goto label_3ee5ec;
        case 0x3ee5f0u: goto label_3ee5f0;
        case 0x3ee5f4u: goto label_3ee5f4;
        case 0x3ee5f8u: goto label_3ee5f8;
        case 0x3ee5fcu: goto label_3ee5fc;
        case 0x3ee600u: goto label_3ee600;
        case 0x3ee604u: goto label_3ee604;
        case 0x3ee608u: goto label_3ee608;
        case 0x3ee60cu: goto label_3ee60c;
        case 0x3ee610u: goto label_3ee610;
        case 0x3ee614u: goto label_3ee614;
        case 0x3ee618u: goto label_3ee618;
        case 0x3ee61cu: goto label_3ee61c;
        case 0x3ee620u: goto label_3ee620;
        case 0x3ee624u: goto label_3ee624;
        case 0x3ee628u: goto label_3ee628;
        case 0x3ee62cu: goto label_3ee62c;
        case 0x3ee630u: goto label_3ee630;
        case 0x3ee634u: goto label_3ee634;
        case 0x3ee638u: goto label_3ee638;
        case 0x3ee63cu: goto label_3ee63c;
        case 0x3ee640u: goto label_3ee640;
        case 0x3ee644u: goto label_3ee644;
        case 0x3ee648u: goto label_3ee648;
        case 0x3ee64cu: goto label_3ee64c;
        case 0x3ee650u: goto label_3ee650;
        case 0x3ee654u: goto label_3ee654;
        case 0x3ee658u: goto label_3ee658;
        case 0x3ee65cu: goto label_3ee65c;
        case 0x3ee660u: goto label_3ee660;
        case 0x3ee664u: goto label_3ee664;
        case 0x3ee668u: goto label_3ee668;
        case 0x3ee66cu: goto label_3ee66c;
        case 0x3ee670u: goto label_3ee670;
        case 0x3ee674u: goto label_3ee674;
        case 0x3ee678u: goto label_3ee678;
        case 0x3ee67cu: goto label_3ee67c;
        case 0x3ee680u: goto label_3ee680;
        case 0x3ee684u: goto label_3ee684;
        case 0x3ee688u: goto label_3ee688;
        case 0x3ee68cu: goto label_3ee68c;
        case 0x3ee690u: goto label_3ee690;
        case 0x3ee694u: goto label_3ee694;
        case 0x3ee698u: goto label_3ee698;
        case 0x3ee69cu: goto label_3ee69c;
        case 0x3ee6a0u: goto label_3ee6a0;
        case 0x3ee6a4u: goto label_3ee6a4;
        case 0x3ee6a8u: goto label_3ee6a8;
        case 0x3ee6acu: goto label_3ee6ac;
        case 0x3ee6b0u: goto label_3ee6b0;
        case 0x3ee6b4u: goto label_3ee6b4;
        case 0x3ee6b8u: goto label_3ee6b8;
        case 0x3ee6bcu: goto label_3ee6bc;
        case 0x3ee6c0u: goto label_3ee6c0;
        case 0x3ee6c4u: goto label_3ee6c4;
        case 0x3ee6c8u: goto label_3ee6c8;
        case 0x3ee6ccu: goto label_3ee6cc;
        case 0x3ee6d0u: goto label_3ee6d0;
        case 0x3ee6d4u: goto label_3ee6d4;
        case 0x3ee6d8u: goto label_3ee6d8;
        case 0x3ee6dcu: goto label_3ee6dc;
        case 0x3ee6e0u: goto label_3ee6e0;
        case 0x3ee6e4u: goto label_3ee6e4;
        case 0x3ee6e8u: goto label_3ee6e8;
        case 0x3ee6ecu: goto label_3ee6ec;
        case 0x3ee6f0u: goto label_3ee6f0;
        case 0x3ee6f4u: goto label_3ee6f4;
        case 0x3ee6f8u: goto label_3ee6f8;
        case 0x3ee6fcu: goto label_3ee6fc;
        case 0x3ee700u: goto label_3ee700;
        case 0x3ee704u: goto label_3ee704;
        case 0x3ee708u: goto label_3ee708;
        case 0x3ee70cu: goto label_3ee70c;
        case 0x3ee710u: goto label_3ee710;
        case 0x3ee714u: goto label_3ee714;
        case 0x3ee718u: goto label_3ee718;
        case 0x3ee71cu: goto label_3ee71c;
        case 0x3ee720u: goto label_3ee720;
        case 0x3ee724u: goto label_3ee724;
        case 0x3ee728u: goto label_3ee728;
        case 0x3ee72cu: goto label_3ee72c;
        case 0x3ee730u: goto label_3ee730;
        case 0x3ee734u: goto label_3ee734;
        case 0x3ee738u: goto label_3ee738;
        case 0x3ee73cu: goto label_3ee73c;
        case 0x3ee740u: goto label_3ee740;
        case 0x3ee744u: goto label_3ee744;
        case 0x3ee748u: goto label_3ee748;
        case 0x3ee74cu: goto label_3ee74c;
        case 0x3ee750u: goto label_3ee750;
        case 0x3ee754u: goto label_3ee754;
        case 0x3ee758u: goto label_3ee758;
        case 0x3ee75cu: goto label_3ee75c;
        case 0x3ee760u: goto label_3ee760;
        case 0x3ee764u: goto label_3ee764;
        case 0x3ee768u: goto label_3ee768;
        case 0x3ee76cu: goto label_3ee76c;
        case 0x3ee770u: goto label_3ee770;
        case 0x3ee774u: goto label_3ee774;
        case 0x3ee778u: goto label_3ee778;
        case 0x3ee77cu: goto label_3ee77c;
        case 0x3ee780u: goto label_3ee780;
        case 0x3ee784u: goto label_3ee784;
        case 0x3ee788u: goto label_3ee788;
        case 0x3ee78cu: goto label_3ee78c;
        case 0x3ee790u: goto label_3ee790;
        case 0x3ee794u: goto label_3ee794;
        case 0x3ee798u: goto label_3ee798;
        case 0x3ee79cu: goto label_3ee79c;
        case 0x3ee7a0u: goto label_3ee7a0;
        case 0x3ee7a4u: goto label_3ee7a4;
        case 0x3ee7a8u: goto label_3ee7a8;
        case 0x3ee7acu: goto label_3ee7ac;
        case 0x3ee7b0u: goto label_3ee7b0;
        case 0x3ee7b4u: goto label_3ee7b4;
        case 0x3ee7b8u: goto label_3ee7b8;
        case 0x3ee7bcu: goto label_3ee7bc;
        case 0x3ee7c0u: goto label_3ee7c0;
        case 0x3ee7c4u: goto label_3ee7c4;
        case 0x3ee7c8u: goto label_3ee7c8;
        case 0x3ee7ccu: goto label_3ee7cc;
        case 0x3ee7d0u: goto label_3ee7d0;
        case 0x3ee7d4u: goto label_3ee7d4;
        case 0x3ee7d8u: goto label_3ee7d8;
        case 0x3ee7dcu: goto label_3ee7dc;
        case 0x3ee7e0u: goto label_3ee7e0;
        case 0x3ee7e4u: goto label_3ee7e4;
        case 0x3ee7e8u: goto label_3ee7e8;
        case 0x3ee7ecu: goto label_3ee7ec;
        case 0x3ee7f0u: goto label_3ee7f0;
        case 0x3ee7f4u: goto label_3ee7f4;
        case 0x3ee7f8u: goto label_3ee7f8;
        case 0x3ee7fcu: goto label_3ee7fc;
        case 0x3ee800u: goto label_3ee800;
        case 0x3ee804u: goto label_3ee804;
        case 0x3ee808u: goto label_3ee808;
        case 0x3ee80cu: goto label_3ee80c;
        case 0x3ee810u: goto label_3ee810;
        case 0x3ee814u: goto label_3ee814;
        case 0x3ee818u: goto label_3ee818;
        case 0x3ee81cu: goto label_3ee81c;
        case 0x3ee820u: goto label_3ee820;
        case 0x3ee824u: goto label_3ee824;
        case 0x3ee828u: goto label_3ee828;
        case 0x3ee82cu: goto label_3ee82c;
        case 0x3ee830u: goto label_3ee830;
        case 0x3ee834u: goto label_3ee834;
        default: break;
    }

    ctx->pc = 0x3ee4a8u;

label_3ee4a8:
    // 0x3ee4a8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3ee4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_3ee4ac:
    // 0x3ee4ac: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x3ee4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_3ee4b0:
    // 0x3ee4b0: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x3ee4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_3ee4b4:
    // 0x3ee4b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3ee4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ee4b8:
    // 0x3ee4b8: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x3ee4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_3ee4bc:
    // 0x3ee4bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x3ee4bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3ee4c0:
    // 0x3ee4c0: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x3ee4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_3ee4c4:
    // 0x3ee4c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3ee4c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee4c8:
    // 0x3ee4c8: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x3ee4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_3ee4cc:
    // 0x3ee4cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3ee4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3ee4d0:
    // 0x3ee4d0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3ee4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3ee4d4:
    // 0x3ee4d4: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3ee4d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3ee4d8:
    // 0x3ee4d8: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3ee4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3ee4dc:
    // 0x3ee4dc: 0x40f809  jalr        $v0
label_3ee4e0:
    if (ctx->pc == 0x3EE4E0u) {
        ctx->pc = 0x3EE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4DCu;
        // 0x3ee4e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE4E4u;
        goto label_3ee4e4;
    }
    ctx->pc = 0x3EE4DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EE4E4u);
        ctx->pc = 0x3EE4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4DCu;
        // 0x3ee4e0: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE4DCu, 0x3EE4E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EE4E4u;
label_3ee4e4:
    // 0x3ee4e4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3ee4e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee4e8:
    // 0x3ee4e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3ee4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3ee4ec:
    // 0x3ee4ec: 0x120200c7  beq         $s0, $v0, . + 4 + (0xC7 << 2)
label_3ee4f0:
    if (ctx->pc == 0x3EE4F0u) {
        ctx->pc = 0x3EE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4ECu;
        // 0x3ee4f0: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE4F4u;
        goto label_3ee4f4;
    }
    ctx->pc = 0x3EE4ECu;
    {
        const bool branch_taken_0x3ee4ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EE4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4ECu;
        // 0x3ee4f0: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4ec) {
            ctx->pc = 0x3EE80Cu;
            goto label_3ee80c;
        }
    }
    ctx->pc = 0x3EE4F4u;
label_3ee4f4:
    // 0x3ee4f4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3ee4f8:
    if (ctx->pc == 0x3EE4F8u) {
        ctx->pc = 0x3EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4F4u;
        // 0x3ee4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE4FCu;
        goto label_3ee4fc;
    }
    ctx->pc = 0x3EE4F4u;
    {
        const bool branch_taken_0x3ee4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4F4u;
        // 0x3ee4f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4f4) {
            ctx->pc = 0x3EE50Cu;
            goto label_3ee50c;
        }
    }
    ctx->pc = 0x3EE4FCu;
label_3ee4fc:
    // 0x3ee4fc: 0x1202003a  beq         $s0, $v0, . + 4 + (0x3A << 2)
label_3ee500:
    if (ctx->pc == 0x3EE500u) {
        ctx->pc = 0x3EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4FCu;
        // 0x3ee500: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE504u;
        goto label_3ee504;
    }
    ctx->pc = 0x3EE4FCu;
    {
        const bool branch_taken_0x3ee4fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EE500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE4FCu;
        // 0x3ee500: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee4fc) {
            ctx->pc = 0x3EE5E8u;
            goto label_3ee5e8;
        }
    }
    ctx->pc = 0x3EE504u;
label_3ee504:
    // 0x3ee504: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_3ee508:
    if (ctx->pc == 0x3EE508u) {
        ctx->pc = 0x3EE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE504u;
        // 0x3ee508: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE50Cu;
        goto label_3ee50c;
    }
    ctx->pc = 0x3EE504u;
    {
        const bool branch_taken_0x3ee504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE504u;
        // 0x3ee508: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee504) {
            ctx->pc = 0x3EE81Cu;
            goto label_3ee81c;
        }
    }
    ctx->pc = 0x3EE50Cu;
label_3ee50c:
    // 0x3ee50c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3ee50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3ee510:
    // 0x3ee510: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
label_3ee514:
    if (ctx->pc == 0x3EE514u) {
        ctx->pc = 0x3EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE510u;
        // 0x3ee514: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE518u;
        goto label_3ee518;
    }
    ctx->pc = 0x3EE510u;
    {
        const bool branch_taken_0x3ee510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3EE514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE510u;
        // 0x3ee514: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee510) {
            ctx->pc = 0x3EE5D8u;
            goto label_3ee5d8;
        }
    }
    ctx->pc = 0x3EE518u;
label_3ee518:
    // 0x3ee518: 0x160200bf  bne         $s0, $v0, . + 4 + (0xBF << 2)
label_3ee51c:
    if (ctx->pc == 0x3EE51Cu) {
        ctx->pc = 0x3EE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE518u;
        // 0x3ee51c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE520u;
        goto label_3ee520;
    }
    ctx->pc = 0x3EE518u;
    {
        const bool branch_taken_0x3ee518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3EE51Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE518u;
        // 0x3ee51c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee518) {
            ctx->pc = 0x3EE818u;
            goto label_3ee818;
        }
    }
    ctx->pc = 0x3EE520u;
label_3ee520:
    // 0x3ee520: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x3ee520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_3ee524:
    // 0x3ee524: 0x144000bd  bnez        $v0, . + 4 + (0xBD << 2)
label_3ee528:
    if (ctx->pc == 0x3EE528u) {
        ctx->pc = 0x3EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE524u;
        // 0x3ee528: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE52Cu;
        goto label_3ee52c;
    }
    ctx->pc = 0x3EE524u;
    {
        const bool branch_taken_0x3ee524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE524u;
        // 0x3ee528: 0x7bb100d0  lq          $s1, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee524) {
            ctx->pc = 0x3EE81Cu;
            goto label_3ee81c;
        }
    }
    ctx->pc = 0x3EE52Cu;
label_3ee52c:
    // 0x3ee52c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3ee52cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3ee530:
    // 0x3ee530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ee530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee534:
    // 0x3ee534: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ee534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee538:
    // 0x3ee538: 0xc0e8f5c  jal         func_3A3D70
label_3ee53c:
    if (ctx->pc == 0x3EE53Cu) {
        ctx->pc = 0x3EE53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE538u;
        // 0x3ee53c: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE540u;
        goto label_3ee540;
    }
    ctx->pc = 0x3EE538u;
    SET_GPR_U32(ctx, 31, 0x3EE540u);
    ctx->pc = 0x3EE53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE538u;
    // 0x3ee53c: 0x26700010  addiu       $s0, $s3, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3D70u, 0x3EE538u, 0x3EE540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE540u;
label_3ee540:
    // 0x3ee540: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee544:
    // 0x3ee544: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3ee544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee548:
    // 0x3ee548: 0xc136afa  jal         func_4DABE8
label_3ee54c:
    if (ctx->pc == 0x3EE54Cu) {
        ctx->pc = 0x3EE54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE548u;
        // 0x3ee54c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE550u;
        goto label_3ee550;
    }
    ctx->pc = 0x3EE548u;
    SET_GPR_U32(ctx, 31, 0x3EE550u);
    ctx->pc = 0x3EE54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE548u;
    // 0x3ee54c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x3EE548u, 0x3EE550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE550u;
label_3ee550:
    // 0x3ee550: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ee550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee554:
    // 0x3ee554: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ee554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee558:
    // 0x3ee558: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x3ee558u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_3ee55c:
    // 0x3ee55c: 0x4bc108ea  vmul.xyz    $vf3, $vf1, $vf1
    ctx->pc = 0x3ee55cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee560:
    // 0x3ee560: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x3ee560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee564:
    // 0x3ee564: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x3ee564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_3ee568:
    // 0x3ee568: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x3ee568u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_3ee56c:
    // 0x3ee56c: 0x3c0144c8  lui         $at, 0x44C8
    ctx->pc = 0x3ee56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17608 << 16));
label_3ee570:
    // 0x3ee570: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3ee570u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3ee574:
    // 0x3ee574: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3ee574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3ee578:
    // 0x3ee578: 0x0  nop
    ctx->pc = 0x3ee578u;
    // NOP
label_3ee57c:
    // 0x3ee57c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3ee57cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3ee580:
    // 0x3ee580: 0x0  nop
    ctx->pc = 0x3ee580u;
    // NOP
label_3ee584:
    // 0x3ee584: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_3ee588:
    if (ctx->pc == 0x3EE588u) {
        ctx->pc = 0x3EE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE584u;
        // 0x3ee588: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE58Cu;
        goto label_3ee58c;
    }
    ctx->pc = 0x3EE584u;
    {
        const bool branch_taken_0x3ee584 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3EE588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE584u;
        // 0x3ee588: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee584) {
            ctx->pc = 0x3EE590u;
            goto label_3ee590;
        }
    }
    ctx->pc = 0x3EE58Cu;
label_3ee58c:
    // 0x3ee58c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3ee58cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ee590:
    // 0x3ee590: 0x106000a0  beqz        $v1, . + 4 + (0xA0 << 2)
label_3ee594:
    if (ctx->pc == 0x3EE594u) {
        ctx->pc = 0x3EE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE590u;
        // 0x3ee594: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE598u;
        goto label_3ee598;
    }
    ctx->pc = 0x3EE590u;
    {
        const bool branch_taken_0x3ee590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE590u;
        // 0x3ee594: 0x3c11006f  lui         $s1, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee590) {
            ctx->pc = 0x3EE814u;
            goto label_3ee814;
        }
    }
    ctx->pc = 0x3EE598u;
label_3ee598:
    // 0x3ee598: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ee598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ee59c:
    // 0x3ee59c: 0x26313190  addiu       $s1, $s1, 0x3190
    ctx->pc = 0x3ee59cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12688));
label_3ee5a0:
    // 0x3ee5a0: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ee5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ee5a4:
    // 0x3ee5a4: 0xc0cd4ee  jal         func_3353B8
label_3ee5a8:
    if (ctx->pc == 0x3EE5A8u) {
        ctx->pc = 0x3EE5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5A4u;
        // 0x3ee5a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5ACu;
        goto label_3ee5ac;
    }
    ctx->pc = 0x3EE5A4u;
    SET_GPR_U32(ctx, 31, 0x3EE5ACu);
    ctx->pc = 0x3EE5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5A4u;
    // 0x3ee5a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3EE5A4u, 0x3EE5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5ACu;
label_3ee5ac:
    // 0x3ee5ac: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3ee5acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee5b0:
    // 0x3ee5b0: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x3ee5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3ee5b4:
    // 0x3ee5b4: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x3ee5b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_3ee5b8:
    // 0x3ee5b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ee5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee5bc:
    // 0x3ee5bc: 0xc0e90ca  jal         func_3A4328
label_3ee5c0:
    if (ctx->pc == 0x3EE5C0u) {
        ctx->pc = 0x3EE5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5BCu;
        // 0x3ee5c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5C4u;
        goto label_3ee5c4;
    }
    ctx->pc = 0x3EE5BCu;
    SET_GPR_U32(ctx, 31, 0x3EE5C4u);
    ctx->pc = 0x3EE5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5BCu;
    // 0x3ee5c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EE5BCu, 0x3EE5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5C4u;
label_3ee5c4:
    // 0x3ee5c4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ee5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3ee5c8:
    // 0x3ee5c8: 0xc045c8e  jal         func_117238
label_3ee5cc:
    if (ctx->pc == 0x3EE5CCu) {
        ctx->pc = 0x3EE5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5C8u;
        // 0x3ee5cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5D0u;
        goto label_3ee5d0;
    }
    ctx->pc = 0x3EE5C8u;
    SET_GPR_U32(ctx, 31, 0x3EE5D0u);
    ctx->pc = 0x3EE5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5C8u;
    // 0x3ee5cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117238u, 0x3EE5C8u, 0x3EE5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5D0u;
label_3ee5d0:
    // 0x3ee5d0: 0x10000090  b           . + 4 + (0x90 << 2)
label_3ee5d4:
    if (ctx->pc == 0x3EE5D4u) {
        ctx->pc = 0x3EE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5D0u;
        // 0x3ee5d4: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5D8u;
        goto label_3ee5d8;
    }
    ctx->pc = 0x3EE5D0u;
    {
        const bool branch_taken_0x3ee5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5D0u;
        // 0x3ee5d4: 0xae820024  sw          $v0, 0x24($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee5d0) {
            ctx->pc = 0x3EE814u;
            goto label_3ee814;
        }
    }
    ctx->pc = 0x3EE5D8u;
label_3ee5d8:
    // 0x3ee5d8: 0xc0e8616  jal         func_3A1858
label_3ee5dc:
    if (ctx->pc == 0x3EE5DCu) {
        ctx->pc = 0x3EE5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5D8u;
        // 0x3ee5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5E0u;
        goto label_3ee5e0;
    }
    ctx->pc = 0x3EE5D8u;
    SET_GPR_U32(ctx, 31, 0x3EE5E0u);
    ctx->pc = 0x3EE5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5D8u;
    // 0x3ee5dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1858u, 0x3EE5D8u, 0x3EE5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5E0u;
label_3ee5e0:
    // 0x3ee5e0: 0x1000008d  b           . + 4 + (0x8D << 2)
label_3ee5e4:
    if (ctx->pc == 0x3EE5E4u) {
        ctx->pc = 0x3EE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5E0u;
        // 0x3ee5e4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5E8u;
        goto label_3ee5e8;
    }
    ctx->pc = 0x3EE5E0u;
    {
        const bool branch_taken_0x3ee5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5E0u;
        // 0x3ee5e4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee5e0) {
            ctx->pc = 0x3EE818u;
            goto label_3ee818;
        }
    }
    ctx->pc = 0x3EE5E8u;
label_3ee5e8:
    // 0x3ee5e8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee5ec:
    // 0x3ee5ec: 0xc0ea12a  jal         func_3A84A8
label_3ee5f0:
    if (ctx->pc == 0x3EE5F0u) {
        ctx->pc = 0x3EE5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE5ECu;
        // 0x3ee5f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE5F4u;
        goto label_3ee5f4;
    }
    ctx->pc = 0x3EE5ECu;
    SET_GPR_U32(ctx, 31, 0x3EE5F4u);
    ctx->pc = 0x3EE5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE5ECu;
    // 0x3ee5f0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EE5ECu, 0x3EE5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE5F4u;
label_3ee5f4:
    // 0x3ee5f4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ee5f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee5f8:
    // 0x3ee5f8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3ee5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3ee5fc:
    // 0x3ee5fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3ee5fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee600:
    // 0x3ee600: 0xc0ea12a  jal         func_3A84A8
label_3ee604:
    if (ctx->pc == 0x3EE604u) {
        ctx->pc = 0x3EE604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE600u;
        // 0x3ee604: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE608u;
        goto label_3ee608;
    }
    ctx->pc = 0x3EE600u;
    SET_GPR_U32(ctx, 31, 0x3EE608u);
    ctx->pc = 0x3EE604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE600u;
    // 0x3ee604: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3EE600u, 0x3EE608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE608u;
label_3ee608:
    // 0x3ee608: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3ee608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3ee60c:
    // 0x3ee60c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3ee60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee610:
    // 0x3ee610: 0xc0ea146  jal         func_3A8518
label_3ee614:
    if (ctx->pc == 0x3EE614u) {
        ctx->pc = 0x3EE614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE610u;
        // 0x3ee614: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE618u;
        goto label_3ee618;
    }
    ctx->pc = 0x3EE610u;
    SET_GPR_U32(ctx, 31, 0x3EE618u);
    ctx->pc = 0x3EE614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE610u;
    // 0x3ee614: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EE610u, 0x3EE618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE618u;
label_3ee618:
    // 0x3ee618: 0xc0ea146  jal         func_3A8518
label_3ee61c:
    if (ctx->pc == 0x3EE61Cu) {
        ctx->pc = 0x3EE61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE618u;
        // 0x3ee61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE620u;
        goto label_3ee620;
    }
    ctx->pc = 0x3EE618u;
    SET_GPR_U32(ctx, 31, 0x3EE620u);
    ctx->pc = 0x3EE61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE618u;
    // 0x3ee61c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3EE618u, 0x3EE620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE620u;
label_3ee620:
    // 0x3ee620: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3ee620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee624:
    // 0x3ee624: 0xc0ea14c  jal         func_3A8530
label_3ee628:
    if (ctx->pc == 0x3EE628u) {
        ctx->pc = 0x3EE628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE624u;
        // 0x3ee628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE62Cu;
        goto label_3ee62c;
    }
    ctx->pc = 0x3EE624u;
    SET_GPR_U32(ctx, 31, 0x3EE62Cu);
    ctx->pc = 0x3EE628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE624u;
    // 0x3ee628: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EE624u, 0x3EE62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE62Cu;
label_3ee62c:
    // 0x3ee62c: 0xc0ea14c  jal         func_3A8530
label_3ee630:
    if (ctx->pc == 0x3EE630u) {
        ctx->pc = 0x3EE630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE62Cu;
        // 0x3ee630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE634u;
        goto label_3ee634;
    }
    ctx->pc = 0x3EE62Cu;
    SET_GPR_U32(ctx, 31, 0x3EE634u);
    ctx->pc = 0x3EE630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE62Cu;
    // 0x3ee630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3EE62Cu, 0x3EE634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE634u;
label_3ee634:
    // 0x3ee634: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_3ee638:
    if (ctx->pc == 0x3EE638u) {
        ctx->pc = 0x3EE638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE634u;
        // 0x3ee638: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE63Cu;
        goto label_3ee63c;
    }
    ctx->pc = 0x3EE634u;
    {
        const bool branch_taken_0x3ee634 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3ee634) {
            ctx->pc = 0x3EE638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EE634u;
            // 0x3ee638: 0x8e82002c  lw          $v0, 0x2C($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EE64Cu;
            goto label_3ee64c;
        }
    }
    ctx->pc = 0x3EE63Cu;
label_3ee63c:
    // 0x3ee63c: 0x8e820028  lw          $v0, 0x28($s4)
    ctx->pc = 0x3ee63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_3ee640:
    // 0x3ee640: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ee644:
    // 0x3ee644: 0x10000003  b           . + 4 + (0x3 << 2)
label_3ee648:
    if (ctx->pc == 0x3EE648u) {
        ctx->pc = 0x3EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE644u;
        // 0x3ee648: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE64Cu;
        goto label_3ee64c;
    }
    ctx->pc = 0x3EE644u;
    {
        const bool branch_taken_0x3ee644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE644u;
        // 0x3ee648: 0xae820028  sw          $v0, 0x28($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee644) {
            ctx->pc = 0x3EE654u;
            goto label_3ee654;
        }
    }
    ctx->pc = 0x3EE64Cu;
label_3ee64c:
    // 0x3ee64c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3ee64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3ee650:
    // 0x3ee650: 0xae82002c  sw          $v0, 0x2C($s4)
    ctx->pc = 0x3ee650u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 44), GPR_U32(ctx, 2));
label_3ee654:
    // 0x3ee654: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_3ee658:
    if (ctx->pc == 0x3EE658u) {
        ctx->pc = 0x3EE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE654u;
        // 0x3ee658: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE65Cu;
        goto label_3ee65c;
    }
    ctx->pc = 0x3EE654u;
    {
        const bool branch_taken_0x3ee654 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3EE658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE654u;
        // 0x3ee658: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee654) {
            ctx->pc = 0x3EE68Cu;
            goto label_3ee68c;
        }
    }
    ctx->pc = 0x3EE65Cu;
label_3ee65c:
    // 0x3ee65c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3ee65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3ee660:
    // 0x3ee660: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ee660u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ee664:
    // 0x3ee664: 0x3c05690c  lui         $a1, 0x690C
    ctx->pc = 0x3ee664u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26892 << 16));
label_3ee668:
    // 0x3ee668: 0x8c44aa84  lw          $a0, -0x557C($v0)
    ctx->pc = 0x3ee668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945412)));
label_3ee66c:
    // 0x3ee66c: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x3ee66cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3ee670:
    // 0x3ee670: 0x34a52ae3  ori         $a1, $a1, 0x2AE3
    ctx->pc = 0x3ee670u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)10979);
label_3ee674:
    // 0x3ee674: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3ee674u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_3ee678:
    // 0x3ee678: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ee678u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee67c:
    // 0x3ee67c: 0xc043f74  jal         func_10FDD0
label_3ee680:
    if (ctx->pc == 0x3EE680u) {
        ctx->pc = 0x3EE680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE67Cu;
        // 0x3ee680: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE684u;
        goto label_3ee684;
    }
    ctx->pc = 0x3EE67Cu;
    SET_GPR_U32(ctx, 31, 0x3EE684u);
    ctx->pc = 0x3EE680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE67Cu;
    // 0x3ee680: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FDD0u, 0x3EE67Cu, 0x3EE684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE684u;
label_3ee684:
    // 0x3ee684: 0x10000064  b           . + 4 + (0x64 << 2)
label_3ee688:
    if (ctx->pc == 0x3EE688u) {
        ctx->pc = 0x3EE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE684u;
        // 0x3ee688: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE68Cu;
        goto label_3ee68c;
    }
    ctx->pc = 0x3EE684u;
    {
        const bool branch_taken_0x3ee684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE684u;
        // 0x3ee688: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee684) {
            ctx->pc = 0x3EE818u;
            goto label_3ee818;
        }
    }
    ctx->pc = 0x3EE68Cu;
label_3ee68c:
    // 0x3ee68c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x3ee68cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3ee690:
    // 0x3ee690: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x3ee690u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3ee694:
    // 0x3ee694: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x3ee694u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_3ee698:
    // 0x3ee698: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3ee698u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ee69c:
    // 0x3ee69c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x3ee69cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ee6a0:
    // 0x3ee6a0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x3ee6a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_3ee6a4:
    // 0x3ee6a4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x3ee6a4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_3ee6a8:
    // 0x3ee6a8: 0x4a0003bf  vwaitq
    ctx->pc = 0x3ee6a8u;
    // VWAITQ (Q already resolved in this runtime)
label_3ee6ac:
    // 0x3ee6ac: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x3ee6acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_3ee6b0:
    // 0x3ee6b0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x3ee6b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_3ee6b4:
    // 0x3ee6b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ee6b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee6b8:
    // 0x3ee6b8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3ee6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3ee6bc:
    // 0x3ee6bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ee6bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ee6c0:
    // 0x3ee6c0: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x3ee6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
label_3ee6c4:
    // 0x3ee6c4: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x3ee6c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_3ee6c8:
    // 0x3ee6c8: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x3ee6c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_3ee6cc:
    // 0x3ee6cc: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x3ee6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
label_3ee6d0:
    // 0x3ee6d0: 0xc0e92f4  jal         func_3A4BD0
label_3ee6d4:
    if (ctx->pc == 0x3EE6D4u) {
        ctx->pc = 0x3EE6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6D0u;
        // 0x3ee6d4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE6D8u;
        goto label_3ee6d8;
    }
    ctx->pc = 0x3EE6D0u;
    SET_GPR_U32(ctx, 31, 0x3EE6D8u);
    ctx->pc = 0x3EE6D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE6D0u;
    // 0x3ee6d4: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x3EE6D0u, 0x3EE6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE6D8u;
label_3ee6d8:
    // 0x3ee6d8: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3ee6d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3ee6dc:
    // 0x3ee6dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x3ee6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_3ee6e0:
    // 0x3ee6e0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x3ee6e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_3ee6e4:
    // 0x3ee6e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ee6e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ee6e8:
    // 0x3ee6e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3ee6e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3ee6ec:
    // 0x3ee6ec: 0x2484b8b8  addiu       $a0, $a0, -0x4748
    ctx->pc = 0x3ee6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
label_3ee6f0:
    // 0x3ee6f0: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x3ee6f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_3ee6f4:
    // 0x3ee6f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ee6f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ee6f8:
    // 0x3ee6f8: 0xc0cd518  jal         func_335460
label_3ee6fc:
    if (ctx->pc == 0x3EE6FCu) {
        ctx->pc = 0x3EE6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE6F8u;
        // 0x3ee6fc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE700u;
        goto label_3ee700;
    }
    ctx->pc = 0x3EE6F8u;
    SET_GPR_U32(ctx, 31, 0x3EE700u);
    ctx->pc = 0x3EE6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE6F8u;
    // 0x3ee6fc: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3EE6F8u, 0x3EE700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE700u;
label_3ee700:
    // 0x3ee700: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3ee700u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3ee704:
    // 0x3ee704: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3ee704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ee708:
    // 0x3ee708: 0xc136b24  jal         func_4DAC90
label_3ee70c:
    if (ctx->pc == 0x3EE70Cu) {
        ctx->pc = 0x3EE70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE708u;
        // 0x3ee70c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE710u;
        goto label_3ee710;
    }
    ctx->pc = 0x3EE708u;
    SET_GPR_U32(ctx, 31, 0x3EE710u);
    ctx->pc = 0x3EE70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE708u;
    // 0x3ee70c: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x3EE708u, 0x3EE710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE710u;
label_3ee710:
    // 0x3ee710: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x3ee710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ee714:
    // 0x3ee714: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee718:
    // 0x3ee718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ee718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ee71c:
    // 0x3ee71c: 0xc0f1778  jal         func_3C5DE0
label_3ee720:
    if (ctx->pc == 0x3EE720u) {
        ctx->pc = 0x3EE720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE71Cu;
        // 0x3ee720: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE724u;
        goto label_3ee724;
    }
    ctx->pc = 0x3EE71Cu;
    SET_GPR_U32(ctx, 31, 0x3EE724u);
    ctx->pc = 0x3EE720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE71Cu;
    // 0x3ee720: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5DE0u, 0x3EE71Cu, 0x3EE724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE724u;
label_3ee724:
    // 0x3ee724: 0x3c013fe0  lui         $at, 0x3FE0
    ctx->pc = 0x3ee724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16352 << 16));
label_3ee728:
    // 0x3ee728: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ee728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ee72c:
    // 0x3ee72c: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x3ee72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
label_3ee730:
    // 0x3ee730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee734:
    // 0x3ee734: 0xc0f15f6  jal         func_3C57D8
label_3ee738:
    if (ctx->pc == 0x3EE738u) {
        ctx->pc = 0x3EE738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE734u;
        // 0x3ee738: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE73Cu;
        goto label_3ee73c;
    }
    ctx->pc = 0x3EE734u;
    SET_GPR_U32(ctx, 31, 0x3EE73Cu);
    ctx->pc = 0x3EE738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE734u;
    // 0x3ee738: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x3EE734u, 0x3EE73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE73Cu;
label_3ee73c:
    // 0x3ee73c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3ee73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3ee740:
    // 0x3ee740: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3ee740u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3ee744:
    // 0x3ee744: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3ee744u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3ee748:
    // 0x3ee748: 0x3c064a48  lui         $a2, 0x4A48
    ctx->pc = 0x3ee748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)19016 << 16));
label_3ee74c:
    // 0x3ee74c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x3ee74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3ee750:
    // 0x3ee750: 0x34c64220  ori         $a2, $a2, 0x4220
    ctx->pc = 0x3ee750u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16928);
label_3ee754:
    // 0x3ee754: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3ee754u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3ee758:
    // 0x3ee758: 0xc0f1658  jal         func_3C5960
label_3ee75c:
    if (ctx->pc == 0x3EE75Cu) {
        ctx->pc = 0x3EE75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE758u;
        // 0x3ee75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE760u;
        goto label_3ee760;
    }
    ctx->pc = 0x3EE758u;
    SET_GPR_U32(ctx, 31, 0x3EE760u);
    ctx->pc = 0x3EE75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE758u;
    // 0x3ee75c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x3EE758u, 0x3EE760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE760u;
label_3ee760:
    // 0x3ee760: 0x3c058a97  lui         $a1, 0x8A97
    ctx->pc = 0x3ee760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35479 << 16));
label_3ee764:
    // 0x3ee764: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ee764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee768:
    // 0x3ee768: 0xc0e9132  jal         func_3A44C8
label_3ee76c:
    if (ctx->pc == 0x3EE76Cu) {
        ctx->pc = 0x3EE76Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE768u;
        // 0x3ee76c: 0x34a58e78  ori         $a1, $a1, 0x8E78 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36472);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE770u;
        goto label_3ee770;
    }
    ctx->pc = 0x3EE768u;
    SET_GPR_U32(ctx, 31, 0x3EE770u);
    ctx->pc = 0x3EE76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE768u;
    // 0x3ee76c: 0x34a58e78  ori         $a1, $a1, 0x8E78 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36472);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A44C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A44C8u, 0x3EE768u, 0x3EE770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE770u;
label_3ee770:
    // 0x3ee770: 0xae6200c4  sw          $v0, 0xC4($s3)
    ctx->pc = 0x3ee770u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 196), GPR_U32(ctx, 2));
label_3ee774:
    // 0x3ee774: 0x240300f0  addiu       $v1, $zero, 0xF0
    ctx->pc = 0x3ee774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_3ee778:
    // 0x3ee778: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3ee778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3ee77c:
    // 0x3ee77c: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3ee77cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3ee780:
    // 0x3ee780: 0xae830014  sw          $v1, 0x14($s4)
    ctx->pc = 0x3ee780u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
label_3ee784:
    // 0x3ee784: 0x26105d30  addiu       $s0, $s0, 0x5D30
    ctx->pc = 0x3ee784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 23856));
label_3ee788:
    // 0x3ee788: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x3ee788u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_3ee78c:
    // 0x3ee78c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3ee78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ee790:
    // 0x3ee790: 0xc0e90ca  jal         func_3A4328
label_3ee794:
    if (ctx->pc == 0x3EE794u) {
        ctx->pc = 0x3EE794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE790u;
        // 0x3ee794: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE798u;
        goto label_3ee798;
    }
    ctx->pc = 0x3EE790u;
    SET_GPR_U32(ctx, 31, 0x3EE798u);
    ctx->pc = 0x3EE794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE790u;
    // 0x3ee794: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x3EE790u, 0x3EE798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE798u;
label_3ee798:
    // 0x3ee798: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x3ee798u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3ee79c:
    // 0x3ee79c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3ee79cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7a0:
    // 0x3ee7a0: 0xc0e911e  jal         func_3A4478
label_3ee7a4:
    if (ctx->pc == 0x3EE7A4u) {
        ctx->pc = 0x3EE7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7A0u;
        // 0x3ee7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE7A8u;
        goto label_3ee7a8;
    }
    ctx->pc = 0x3EE7A0u;
    SET_GPR_U32(ctx, 31, 0x3EE7A8u);
    ctx->pc = 0x3EE7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE7A0u;
    // 0x3ee7a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4478u, 0x3EE7A0u, 0x3EE7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE7A8u;
label_3ee7a8:
    // 0x3ee7a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3ee7a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7ac:
    // 0x3ee7ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x3ee7acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7b0:
    // 0x3ee7b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3ee7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7b4:
    // 0x3ee7b4: 0xc0e94fc  jal         func_3A53F0
label_3ee7b8:
    if (ctx->pc == 0x3EE7B8u) {
        ctx->pc = 0x3EE7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7B4u;
        // 0x3ee7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE7BCu;
        goto label_3ee7bc;
    }
    ctx->pc = 0x3EE7B4u;
    SET_GPR_U32(ctx, 31, 0x3EE7BCu);
    ctx->pc = 0x3EE7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE7B4u;
    // 0x3ee7b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A53F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A53F0u, 0x3EE7B4u, 0x3EE7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE7BCu;
label_3ee7bc:
    // 0x3ee7bc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x3ee7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_3ee7c0:
    // 0x3ee7c0: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x3ee7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3ee7c4:
    // 0x3ee7c4: 0x8c64489c  lw          $a0, 0x489C($v1)
    ctx->pc = 0x3ee7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18588)));
label_3ee7c8:
    // 0x3ee7c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3ee7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3ee7cc:
    // 0x3ee7cc: 0xc1073cc  jal         func_41CF30
label_3ee7d0:
    if (ctx->pc == 0x3EE7D0u) {
        ctx->pc = 0x3EE7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7CCu;
        // 0x3ee7d0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE7D4u;
        goto label_3ee7d4;
    }
    ctx->pc = 0x3EE7CCu;
    SET_GPR_U32(ctx, 31, 0x3EE7D4u);
    ctx->pc = 0x3EE7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE7CCu;
    // 0x3ee7d0: 0xae820010  sw          $v0, 0x10($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF30u, 0x3EE7CCu, 0x3EE7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE7D4u;
label_3ee7d4:
    // 0x3ee7d4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3ee7d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3ee7d8:
    // 0x3ee7d8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_3ee7dc:
    if (ctx->pc == 0x3EE7DCu) {
        ctx->pc = 0x3EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7D8u;
        // 0x3ee7dc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE7E0u;
        goto label_3ee7e0;
    }
    ctx->pc = 0x3EE7D8u;
    {
        const bool branch_taken_0x3ee7d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EE7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7D8u;
        // 0x3ee7dc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee7d8) {
            ctx->pc = 0x3EE818u;
            goto label_3ee818;
        }
    }
    ctx->pc = 0x3EE7E0u;
label_3ee7e0:
    // 0x3ee7e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3ee7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7e4:
    // 0x3ee7e4: 0xc0e8dee  jal         func_3A37B8
label_3ee7e8:
    if (ctx->pc == 0x3EE7E8u) {
        ctx->pc = 0x3EE7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7E4u;
        // 0x3ee7e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE7ECu;
        goto label_3ee7ec;
    }
    ctx->pc = 0x3EE7E4u;
    SET_GPR_U32(ctx, 31, 0x3EE7ECu);
    ctx->pc = 0x3EE7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE7E4u;
    // 0x3ee7e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A37B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A37B8u, 0x3EE7E4u, 0x3EE7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE7ECu;
label_3ee7ec:
    // 0x3ee7ec: 0x7a630010  lq          $v1, 0x10($s3)
    ctx->pc = 0x3ee7ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 16)));
label_3ee7f0:
    // 0x3ee7f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ee7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7f4:
    // 0x3ee7f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3ee7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7f8:
    // 0x3ee7f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ee7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ee7fc:
    // 0x3ee7fc: 0xc045ca0  jal         func_117280
label_3ee800:
    if (ctx->pc == 0x3EE800u) {
        ctx->pc = 0x3EE800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE7FCu;
        // 0x3ee800: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE804u;
        goto label_3ee804;
    }
    ctx->pc = 0x3EE7FCu;
    SET_GPR_U32(ctx, 31, 0x3EE804u);
    ctx->pc = 0x3EE800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EE7FCu;
    // 0x3ee800: 0x7fa30040  sq          $v1, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x3EE7FCu, 0x3EE804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EE804u;
label_3ee804:
    // 0x3ee804: 0x10000004  b           . + 4 + (0x4 << 2)
label_3ee808:
    if (ctx->pc == 0x3EE808u) {
        ctx->pc = 0x3EE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE804u;
        // 0x3ee808: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE80Cu;
        goto label_3ee80c;
    }
    ctx->pc = 0x3EE804u;
    {
        const bool branch_taken_0x3ee804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EE808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE804u;
        // 0x3ee808: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ee804) {
            ctx->pc = 0x3EE818u;
            goto label_3ee818;
        }
    }
    ctx->pc = 0x3EE80Cu;
label_3ee80c:
    // 0x3ee80c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3ee80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3ee810:
    // 0x3ee810: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x3ee810u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
label_3ee814:
    // 0x3ee814: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x3ee814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3ee818:
    // 0x3ee818: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x3ee818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3ee81c:
    // 0x3ee81c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x3ee81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3ee820:
    // 0x3ee820: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x3ee820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3ee824:
    // 0x3ee824: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x3ee824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3ee828:
    // 0x3ee828: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3ee828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3ee82c:
    // 0x3ee82c: 0x3e00008  jr          $ra
label_3ee830:
    if (ctx->pc == 0x3EE830u) {
        ctx->pc = 0x3EE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE82Cu;
        // 0x3ee830: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EE834u;
        goto label_3ee834;
    }
    ctx->pc = 0x3EE82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EE830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EE82Cu;
        // 0x3ee830: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EE82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3EE834u;
label_3ee834:
    // 0x3ee834: 0x0  nop
    ctx->pc = 0x3ee834u;
    // NOP
    ctx->pc = 0x3ee838u;
}
