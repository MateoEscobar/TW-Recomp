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

// Function: sub_003147A0
// Address: 0x3147a0 - 0x3149f0
void sub_003147A0_0x3147a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003147A0_0x3147a0");
#endif

    switch (ctx->pc) {
        case 0x3147a0u: goto label_3147a0;
        case 0x3147a4u: goto label_3147a4;
        case 0x3147a8u: goto label_3147a8;
        case 0x3147acu: goto label_3147ac;
        case 0x3147b0u: goto label_3147b0;
        case 0x3147b4u: goto label_3147b4;
        case 0x3147b8u: goto label_3147b8;
        case 0x3147bcu: goto label_3147bc;
        case 0x3147c0u: goto label_3147c0;
        case 0x3147c4u: goto label_3147c4;
        case 0x3147c8u: goto label_3147c8;
        case 0x3147ccu: goto label_3147cc;
        case 0x3147d0u: goto label_3147d0;
        case 0x3147d4u: goto label_3147d4;
        case 0x3147d8u: goto label_3147d8;
        case 0x3147dcu: goto label_3147dc;
        case 0x3147e0u: goto label_3147e0;
        case 0x3147e4u: goto label_3147e4;
        case 0x3147e8u: goto label_3147e8;
        case 0x3147ecu: goto label_3147ec;
        case 0x3147f0u: goto label_3147f0;
        case 0x3147f4u: goto label_3147f4;
        case 0x3147f8u: goto label_3147f8;
        case 0x3147fcu: goto label_3147fc;
        case 0x314800u: goto label_314800;
        case 0x314804u: goto label_314804;
        case 0x314808u: goto label_314808;
        case 0x31480cu: goto label_31480c;
        case 0x314810u: goto label_314810;
        case 0x314814u: goto label_314814;
        case 0x314818u: goto label_314818;
        case 0x31481cu: goto label_31481c;
        case 0x314820u: goto label_314820;
        case 0x314824u: goto label_314824;
        case 0x314828u: goto label_314828;
        case 0x31482cu: goto label_31482c;
        case 0x314830u: goto label_314830;
        case 0x314834u: goto label_314834;
        case 0x314838u: goto label_314838;
        case 0x31483cu: goto label_31483c;
        case 0x314840u: goto label_314840;
        case 0x314844u: goto label_314844;
        case 0x314848u: goto label_314848;
        case 0x31484cu: goto label_31484c;
        case 0x314850u: goto label_314850;
        case 0x314854u: goto label_314854;
        case 0x314858u: goto label_314858;
        case 0x31485cu: goto label_31485c;
        case 0x314860u: goto label_314860;
        case 0x314864u: goto label_314864;
        case 0x314868u: goto label_314868;
        case 0x31486cu: goto label_31486c;
        case 0x314870u: goto label_314870;
        case 0x314874u: goto label_314874;
        case 0x314878u: goto label_314878;
        case 0x31487cu: goto label_31487c;
        case 0x314880u: goto label_314880;
        case 0x314884u: goto label_314884;
        case 0x314888u: goto label_314888;
        case 0x31488cu: goto label_31488c;
        case 0x314890u: goto label_314890;
        case 0x314894u: goto label_314894;
        case 0x314898u: goto label_314898;
        case 0x31489cu: goto label_31489c;
        case 0x3148a0u: goto label_3148a0;
        case 0x3148a4u: goto label_3148a4;
        case 0x3148a8u: goto label_3148a8;
        case 0x3148acu: goto label_3148ac;
        case 0x3148b0u: goto label_3148b0;
        case 0x3148b4u: goto label_3148b4;
        case 0x3148b8u: goto label_3148b8;
        case 0x3148bcu: goto label_3148bc;
        case 0x3148c0u: goto label_3148c0;
        case 0x3148c4u: goto label_3148c4;
        case 0x3148c8u: goto label_3148c8;
        case 0x3148ccu: goto label_3148cc;
        case 0x3148d0u: goto label_3148d0;
        case 0x3148d4u: goto label_3148d4;
        case 0x3148d8u: goto label_3148d8;
        case 0x3148dcu: goto label_3148dc;
        case 0x3148e0u: goto label_3148e0;
        case 0x3148e4u: goto label_3148e4;
        case 0x3148e8u: goto label_3148e8;
        case 0x3148ecu: goto label_3148ec;
        case 0x3148f0u: goto label_3148f0;
        case 0x3148f4u: goto label_3148f4;
        case 0x3148f8u: goto label_3148f8;
        case 0x3148fcu: goto label_3148fc;
        case 0x314900u: goto label_314900;
        case 0x314904u: goto label_314904;
        case 0x314908u: goto label_314908;
        case 0x31490cu: goto label_31490c;
        case 0x314910u: goto label_314910;
        case 0x314914u: goto label_314914;
        case 0x314918u: goto label_314918;
        case 0x31491cu: goto label_31491c;
        case 0x314920u: goto label_314920;
        case 0x314924u: goto label_314924;
        case 0x314928u: goto label_314928;
        case 0x31492cu: goto label_31492c;
        case 0x314930u: goto label_314930;
        case 0x314934u: goto label_314934;
        case 0x314938u: goto label_314938;
        case 0x31493cu: goto label_31493c;
        case 0x314940u: goto label_314940;
        case 0x314944u: goto label_314944;
        case 0x314948u: goto label_314948;
        case 0x31494cu: goto label_31494c;
        case 0x314950u: goto label_314950;
        case 0x314954u: goto label_314954;
        case 0x314958u: goto label_314958;
        case 0x31495cu: goto label_31495c;
        case 0x314960u: goto label_314960;
        case 0x314964u: goto label_314964;
        case 0x314968u: goto label_314968;
        case 0x31496cu: goto label_31496c;
        case 0x314970u: goto label_314970;
        case 0x314974u: goto label_314974;
        case 0x314978u: goto label_314978;
        case 0x31497cu: goto label_31497c;
        case 0x314980u: goto label_314980;
        case 0x314984u: goto label_314984;
        case 0x314988u: goto label_314988;
        case 0x31498cu: goto label_31498c;
        case 0x314990u: goto label_314990;
        case 0x314994u: goto label_314994;
        case 0x314998u: goto label_314998;
        case 0x31499cu: goto label_31499c;
        case 0x3149a0u: goto label_3149a0;
        case 0x3149a4u: goto label_3149a4;
        case 0x3149a8u: goto label_3149a8;
        case 0x3149acu: goto label_3149ac;
        case 0x3149b0u: goto label_3149b0;
        case 0x3149b4u: goto label_3149b4;
        case 0x3149b8u: goto label_3149b8;
        case 0x3149bcu: goto label_3149bc;
        case 0x3149c0u: goto label_3149c0;
        case 0x3149c4u: goto label_3149c4;
        case 0x3149c8u: goto label_3149c8;
        case 0x3149ccu: goto label_3149cc;
        case 0x3149d0u: goto label_3149d0;
        case 0x3149d4u: goto label_3149d4;
        case 0x3149d8u: goto label_3149d8;
        case 0x3149dcu: goto label_3149dc;
        case 0x3149e0u: goto label_3149e0;
        case 0x3149e4u: goto label_3149e4;
        case 0x3149e8u: goto label_3149e8;
        case 0x3149ecu: goto label_3149ec;
        default: break;
    }

    ctx->pc = 0x3147a0u;

label_3147a0:
    // 0x3147a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3147a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3147a4:
    // 0x3147a4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3147a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3147a8:
    // 0x3147a8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3147a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3147ac:
    // 0x3147ac: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3147acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3147b0:
    // 0x3147b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3147b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3147b4:
    // 0x3147b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3147b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3147b8:
    // 0x3147b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3147b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3147bc:
    // 0x3147bc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3147bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_3147c0:
    // 0x3147c0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3147c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3147c4:
    // 0x3147c4: 0xc08a61a  jal         func_229868
label_3147c8:
    if (ctx->pc == 0x3147C8u) {
        ctx->pc = 0x3147C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147C4u;
        // 0x3147c8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147CCu;
        goto label_3147cc;
    }
    ctx->pc = 0x3147C4u;
    SET_GPR_U32(ctx, 31, 0x3147CCu);
    ctx->pc = 0x3147C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147C4u;
    // 0x3147c8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3147C4u, 0x3147CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3147CCu;
label_3147cc:
    // 0x3147cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3147ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3147d0:
    // 0x3147d0: 0x1220007d  beqz        $s1, . + 4 + (0x7D << 2)
label_3147d4:
    if (ctx->pc == 0x3147D4u) {
        ctx->pc = 0x3147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147D0u;
        // 0x3147d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147D8u;
        goto label_3147d8;
    }
    ctx->pc = 0x3147D0u;
    {
        const bool branch_taken_0x3147d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147D0u;
        // 0x3147d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147d0) {
            ctx->pc = 0x3149C8u;
            goto label_3149c8;
        }
    }
    ctx->pc = 0x3147D8u;
label_3147d8:
    // 0x3147d8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x3147d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_3147dc:
    // 0x3147dc: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
label_3147e0:
    if (ctx->pc == 0x3147E0u) {
        ctx->pc = 0x3147E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147DCu;
        // 0x3147e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147E4u;
        goto label_3147e4;
    }
    ctx->pc = 0x3147DCu;
    {
        const bool branch_taken_0x3147dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3147E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147DCu;
        // 0x3147e0: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147dc) {
            ctx->pc = 0x31488Cu;
            goto label_31488c;
        }
    }
    ctx->pc = 0x3147E4u;
label_3147e4:
    // 0x3147e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3147e8:
    if (ctx->pc == 0x3147E8u) {
        ctx->pc = 0x3147E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147E4u;
        // 0x3147e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147ECu;
        goto label_3147ec;
    }
    ctx->pc = 0x3147E4u;
    {
        const bool branch_taken_0x3147e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147E4u;
        // 0x3147e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147e4) {
            ctx->pc = 0x3147FCu;
            goto label_3147fc;
        }
    }
    ctx->pc = 0x3147ECu;
label_3147ec:
    // 0x3147ec: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_3147f0:
    if (ctx->pc == 0x3147F0u) {
        ctx->pc = 0x3147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ECu;
        // 0x3147f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147F4u;
        goto label_3147f4;
    }
    ctx->pc = 0x3147ECu;
    {
        const bool branch_taken_0x3147ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3147F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ECu;
        // 0x3147f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147ec) {
            ctx->pc = 0x314850u;
            goto label_314850;
        }
    }
    ctx->pc = 0x3147F4u;
label_3147f4:
    // 0x3147f4: 0x10000076  b           . + 4 + (0x76 << 2)
label_3147f8:
    if (ctx->pc == 0x3147F8u) {
        ctx->pc = 0x3147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147F4u;
        // 0x3147f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147FCu;
        goto label_3147fc;
    }
    ctx->pc = 0x3147F4u;
    {
        const bool branch_taken_0x3147f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147F4u;
        // 0x3147f8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147f4) {
            ctx->pc = 0x3149D0u;
            goto label_3149d0;
        }
    }
    ctx->pc = 0x3147FCu;
label_3147fc:
    // 0x3147fc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x3147fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_314800:
    // 0x314800: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_314804:
    if (ctx->pc == 0x314804u) {
        ctx->pc = 0x314804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314800u;
        // 0x314804: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314808u;
        goto label_314808;
    }
    ctx->pc = 0x314800u;
    {
        const bool branch_taken_0x314800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x314804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314800u;
        // 0x314804: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314800) {
            ctx->pc = 0x314818u;
            goto label_314818;
        }
    }
    ctx->pc = 0x314808u;
label_314808:
    // 0x314808: 0x1062006d  beq         $v1, $v0, . + 4 + (0x6D << 2)
label_31480c:
    if (ctx->pc == 0x31480Cu) {
        ctx->pc = 0x31480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314808u;
        // 0x31480c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314810u;
        goto label_314810;
    }
    ctx->pc = 0x314808u;
    {
        const bool branch_taken_0x314808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x31480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314808u;
        // 0x31480c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314808) {
            ctx->pc = 0x3149C0u;
            goto label_3149c0;
        }
    }
    ctx->pc = 0x314810u;
label_314810:
    // 0x314810: 0x1000006f  b           . + 4 + (0x6F << 2)
label_314814:
    if (ctx->pc == 0x314814u) {
        ctx->pc = 0x314814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314810u;
        // 0x314814: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314818u;
        goto label_314818;
    }
    ctx->pc = 0x314810u;
    {
        const bool branch_taken_0x314810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314810u;
        // 0x314814: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314810) {
            ctx->pc = 0x3149D0u;
            goto label_3149d0;
        }
    }
    ctx->pc = 0x314818u;
label_314818:
    // 0x314818: 0xc087502  jal         func_21D408
label_31481c:
    if (ctx->pc == 0x31481Cu) {
        ctx->pc = 0x31481Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314818u;
        // 0x31481c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314820u;
        goto label_314820;
    }
    ctx->pc = 0x314818u;
    SET_GPR_U32(ctx, 31, 0x314820u);
    ctx->pc = 0x31481Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314818u;
    // 0x31481c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314818u, 0x314820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314820u;
label_314820:
    // 0x314820: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x314820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
label_314824:
    // 0x314824: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x314824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_314828:
    // 0x314828: 0x14620068  bne         $v1, $v0, . + 4 + (0x68 << 2)
label_31482c:
    if (ctx->pc == 0x31482Cu) {
        ctx->pc = 0x31482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314828u;
        // 0x31482c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314830u;
        goto label_314830;
    }
    ctx->pc = 0x314828u;
    {
        const bool branch_taken_0x314828 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314828u;
        // 0x31482c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314828) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x314830u;
label_314830:
    // 0x314830: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x314830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_314834:
    // 0x314834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_314838:
    // 0x314838: 0x14620064  bne         $v1, $v0, . + 4 + (0x64 << 2)
label_31483c:
    if (ctx->pc == 0x31483Cu) {
        ctx->pc = 0x31483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314838u;
        // 0x31483c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314840u;
        goto label_314840;
    }
    ctx->pc = 0x314838u;
    {
        const bool branch_taken_0x314838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314838u;
        // 0x31483c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314838) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x314840u;
label_314840:
    // 0x314840: 0x92620075  lbu         $v0, 0x75($s3)
    ctx->pc = 0x314840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 117)));
label_314844:
    // 0x314844: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x314844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_314848:
    // 0x314848: 0x1000005f  b           . + 4 + (0x5F << 2)
label_31484c:
    if (ctx->pc == 0x31484Cu) {
        ctx->pc = 0x31484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314848u;
        // 0x31484c: 0xa2620075  sb          $v0, 0x75($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 117), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314850u;
        goto label_314850;
    }
    ctx->pc = 0x314848u;
    {
        const bool branch_taken_0x314848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314848u;
        // 0x31484c: 0xa2620075  sb          $v0, 0x75($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 117), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314848) {
            ctx->pc = 0x3149C8u;
            goto label_3149c8;
        }
    }
    ctx->pc = 0x314850u;
label_314850:
    // 0x314850: 0xc087502  jal         func_21D408
label_314854:
    if (ctx->pc == 0x314854u) {
        ctx->pc = 0x314854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314850u;
        // 0x314854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314858u;
        goto label_314858;
    }
    ctx->pc = 0x314850u;
    SET_GPR_U32(ctx, 31, 0x314858u);
    ctx->pc = 0x314854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314850u;
    // 0x314854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314850u, 0x314858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314858u;
label_314858:
    // 0x314858: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31485c:
    // 0x31485c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x31485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_314860:
    // 0x314860: 0x8e02020c  lw          $v0, 0x20C($s0)
    ctx->pc = 0x314860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 524)));
label_314864:
    // 0x314864: 0x14430059  bne         $v0, $v1, . + 4 + (0x59 << 2)
label_314868:
    if (ctx->pc == 0x314868u) {
        ctx->pc = 0x314868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314864u;
        // 0x314868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31486Cu;
        goto label_31486c;
    }
    ctx->pc = 0x314864u;
    {
        const bool branch_taken_0x314864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x314868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314864u;
        // 0x314868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314864) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x31486Cu;
label_31486c:
    // 0x31486c: 0xc0e409a  jal         func_390268
label_314870:
    if (ctx->pc == 0x314870u) {
        ctx->pc = 0x314870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31486Cu;
        // 0x314870: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314874u;
        goto label_314874;
    }
    ctx->pc = 0x31486Cu;
    SET_GPR_U32(ctx, 31, 0x314874u);
    ctx->pc = 0x314870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31486Cu;
    // 0x314870: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x31486Cu, 0x314874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314874u;
label_314874:
    // 0x314874: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_314878:
    if (ctx->pc == 0x314878u) {
        ctx->pc = 0x314878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314874u;
        // 0x314878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31487Cu;
        goto label_31487c;
    }
    ctx->pc = 0x314874u;
    {
        const bool branch_taken_0x314874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314874u;
        // 0x314878: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314874) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x31487Cu;
label_31487c:
    // 0x31487c: 0xc0a36c8  jal         func_28DB20
label_314880:
    if (ctx->pc == 0x314880u) {
        ctx->pc = 0x314880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31487Cu;
        // 0x314880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314884u;
        goto label_314884;
    }
    ctx->pc = 0x31487Cu;
    SET_GPR_U32(ctx, 31, 0x314884u);
    ctx->pc = 0x314880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31487Cu;
    // 0x314880: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x31487Cu, 0x314884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314884u;
label_314884:
    // 0x314884: 0x10000051  b           . + 4 + (0x51 << 2)
label_314888:
    if (ctx->pc == 0x314888u) {
        ctx->pc = 0x314888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314884u;
        // 0x314888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31488Cu;
        goto label_31488c;
    }
    ctx->pc = 0x314884u;
    {
        const bool branch_taken_0x314884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314884u;
        // 0x314888: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314884) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x31488Cu;
label_31488c:
    // 0x31488c: 0xc087502  jal         func_21D408
label_314890:
    if (ctx->pc == 0x314890u) {
        ctx->pc = 0x314890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31488Cu;
        // 0x314890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314894u;
        goto label_314894;
    }
    ctx->pc = 0x31488Cu;
    SET_GPR_U32(ctx, 31, 0x314894u);
    ctx->pc = 0x314890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31488Cu;
    // 0x314890: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31488Cu, 0x314894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314894u;
label_314894:
    // 0x314894: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314898:
    // 0x314898: 0xc0a3658  jal         func_28D960
label_31489c:
    if (ctx->pc == 0x31489Cu) {
        ctx->pc = 0x31489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314898u;
        // 0x31489c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148A0u;
        goto label_3148a0;
    }
    ctx->pc = 0x314898u;
    SET_GPR_U32(ctx, 31, 0x3148A0u);
    ctx->pc = 0x31489Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314898u;
    // 0x31489c: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x314898u, 0x3148A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3148A0u;
label_3148a0:
    // 0x3148a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3148a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3148a4:
    // 0x3148a4: 0x6000049  bltz        $s0, . + 4 + (0x49 << 2)
label_3148a8:
    if (ctx->pc == 0x3148A8u) {
        ctx->pc = 0x3148A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148A4u;
        // 0x3148a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148ACu;
        goto label_3148ac;
    }
    ctx->pc = 0x3148A4u;
    {
        const bool branch_taken_0x3148a4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x3148A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148A4u;
        // 0x3148a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148a4) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x3148ACu;
label_3148ac:
    // 0x3148ac: 0xc087502  jal         func_21D408
label_3148b0:
    if (ctx->pc == 0x3148B0u) {
        ctx->pc = 0x3148B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148ACu;
        // 0x3148b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148B4u;
        goto label_3148b4;
    }
    ctx->pc = 0x3148ACu;
    SET_GPR_U32(ctx, 31, 0x3148B4u);
    ctx->pc = 0x3148B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148ACu;
    // 0x3148b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3148ACu, 0x3148B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3148B4u;
label_3148b4:
    // 0x3148b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3148b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3148b8:
    // 0x3148b8: 0x8062002c  lb          $v0, 0x2C($v1)
    ctx->pc = 0x3148b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 44)));
label_3148bc:
    // 0x3148bc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3148bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3148c0:
    // 0x3148c0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_3148c4:
    if (ctx->pc == 0x3148C4u) {
        ctx->pc = 0x3148C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148C0u;
        // 0x3148c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148C8u;
        goto label_3148c8;
    }
    ctx->pc = 0x3148C0u;
    {
        const bool branch_taken_0x3148c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3148c0) {
            ctx->pc = 0x3148C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3148C0u;
            // 0x3148c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3148D4u;
            goto label_3148d4;
        }
    }
    ctx->pc = 0x3148C8u;
label_3148c8:
    // 0x3148c8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x3148c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3148cc:
    // 0x3148cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x3148ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3148d0:
    // 0x3148d0: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x3148d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_3148d4:
    // 0x3148d4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3148d8:
    if (ctx->pc == 0x3148D8u) {
        ctx->pc = 0x3148D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148D4u;
        // 0x3148d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148DCu;
        goto label_3148dc;
    }
    ctx->pc = 0x3148D4u;
    {
        const bool branch_taken_0x3148d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3148D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148D4u;
        // 0x3148d8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148d4) {
            ctx->pc = 0x3149A0u;
            goto label_3149a0;
        }
    }
    ctx->pc = 0x3148DCu;
label_3148dc:
    // 0x3148dc: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x3148dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_3148e0:
    // 0x3148e0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3148e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3148e4:
    // 0x3148e4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3148e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3148e8:
    // 0x3148e8: 0x24740048  addiu       $s4, $v1, 0x48
    ctx->pc = 0x3148e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
label_3148ec:
    // 0x3148ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3148ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3148f0:
    // 0x3148f0: 0xc137826  jal         func_4DE098
label_3148f4:
    if (ctx->pc == 0x3148F4u) {
        ctx->pc = 0x3148F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148F0u;
        // 0x3148f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148F8u;
        goto label_3148f8;
    }
    ctx->pc = 0x3148F0u;
    SET_GPR_U32(ctx, 31, 0x3148F8u);
    ctx->pc = 0x3148F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148F0u;
    // 0x3148f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x3148F0u, 0x3148F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3148F8u;
label_3148f8:
    // 0x3148f8: 0xc0e409a  jal         func_390268
label_3148fc:
    if (ctx->pc == 0x3148FCu) {
        ctx->pc = 0x3148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148F8u;
        // 0x3148fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314900u;
        goto label_314900;
    }
    ctx->pc = 0x3148F8u;
    SET_GPR_U32(ctx, 31, 0x314900u);
    ctx->pc = 0x3148FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3148F8u;
    // 0x3148fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3148F8u, 0x314900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314900u;
label_314900:
    // 0x314900: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
label_314904:
    if (ctx->pc == 0x314904u) {
        ctx->pc = 0x314904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314900u;
        // 0x314904: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314908u;
        goto label_314908;
    }
    ctx->pc = 0x314900u;
    {
        const bool branch_taken_0x314900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314900) {
            ctx->pc = 0x314904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314900u;
            // 0x314904: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314994u;
            goto label_314994;
        }
    }
    ctx->pc = 0x314908u;
label_314908:
    // 0x314908: 0xc087502  jal         func_21D408
label_31490c:
    if (ctx->pc == 0x31490Cu) {
        ctx->pc = 0x31490Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314908u;
        // 0x31490c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314910u;
        goto label_314910;
    }
    ctx->pc = 0x314908u;
    SET_GPR_U32(ctx, 31, 0x314910u);
    ctx->pc = 0x31490Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314908u;
    // 0x31490c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x314908u, 0x314910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314910u;
label_314910:
    // 0x314910: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x314910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314914:
    // 0x314914: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x314914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_314918:
    // 0x314918: 0xc0a3658  jal         func_28D960
label_31491c:
    if (ctx->pc == 0x31491Cu) {
        ctx->pc = 0x31491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314918u;
        // 0x31491c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314920u;
        goto label_314920;
    }
    ctx->pc = 0x314918u;
    SET_GPR_U32(ctx, 31, 0x314920u);
    ctx->pc = 0x31491Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314918u;
    // 0x31491c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x314918u, 0x314920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314920u;
label_314920:
    // 0x314920: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314924:
    // 0x314924: 0x602001b  bltzl       $s0, . + 4 + (0x1B << 2)
label_314928:
    if (ctx->pc == 0x314928u) {
        ctx->pc = 0x314928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314924u;
        // 0x314928: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31492Cu;
        goto label_31492c;
    }
    ctx->pc = 0x314924u;
    {
        const bool branch_taken_0x314924 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x314924) {
            ctx->pc = 0x314928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314924u;
            // 0x314928: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314994u;
            goto label_314994;
        }
    }
    ctx->pc = 0x31492Cu;
label_31492c:
    // 0x31492c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x31492cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_314930:
    // 0x314930: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x314930u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_314934:
    // 0x314934: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_314938:
    if (ctx->pc == 0x314938u) {
        ctx->pc = 0x31493Cu;
        goto label_31493c;
    }
    ctx->pc = 0x314934u;
    {
        const bool branch_taken_0x314934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314934) {
            ctx->pc = 0x314958u;
            goto label_314958;
        }
    }
    ctx->pc = 0x31493Cu;
label_31493c:
    // 0x31493c: 0x0  nop
    ctx->pc = 0x31493cu;
    // NOP
label_314940:
    // 0x314940: 0xc0a35f6  jal         func_28D7D8
label_314944:
    if (ctx->pc == 0x314944u) {
        ctx->pc = 0x314944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314940u;
        // 0x314944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314948u;
        goto label_314948;
    }
    ctx->pc = 0x314940u;
    SET_GPR_U32(ctx, 31, 0x314948u);
    ctx->pc = 0x314944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314940u;
    // 0x314944: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x314940u, 0x314948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314948u;
label_314948:
    // 0x314948: 0x8223002c  lb          $v1, 0x2C($s1)
    ctx->pc = 0x314948u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_31494c:
    // 0x31494c: 0x70182a  slt         $v1, $v1, $s0
    ctx->pc = 0x31494cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_314950:
    // 0x314950: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
label_314954:
    if (ctx->pc == 0x314954u) {
        ctx->pc = 0x314958u;
        goto label_314958;
    }
    ctx->pc = 0x314950u;
    {
        const bool branch_taken_0x314950 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x314950) {
            ctx->pc = 0x314940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314940;
        }
    }
    ctx->pc = 0x314958u;
label_314958:
    // 0x314958: 0xc0a4e54  jal         func_293950
label_31495c:
    if (ctx->pc == 0x31495Cu) {
        ctx->pc = 0x314960u;
        goto label_314960;
    }
    ctx->pc = 0x314958u;
    SET_GPR_U32(ctx, 31, 0x314960u);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x314958u, 0x314960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314960u;
label_314960:
    // 0x314960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x314960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314964:
    // 0x314964: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_314968:
    if (ctx->pc == 0x314968u) {
        ctx->pc = 0x314968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314964u;
        // 0x314968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31496Cu;
        goto label_31496c;
    }
    ctx->pc = 0x314964u;
    {
        const bool branch_taken_0x314964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314964u;
        // 0x314968: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314964) {
            ctx->pc = 0x314980u;
            goto label_314980;
        }
    }
    ctx->pc = 0x31496Cu;
label_31496c:
    // 0x31496c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x31496cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
label_314970:
    // 0x314970: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x314970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314974:
    // 0x314974: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x314974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_314978:
    // 0x314978: 0xc0b2386  jal         func_2C8E18
label_31497c:
    if (ctx->pc == 0x31497Cu) {
        ctx->pc = 0x31497Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314978u;
        // 0x31497c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314980u;
        goto label_314980;
    }
    ctx->pc = 0x314978u;
    SET_GPR_U32(ctx, 31, 0x314980u);
    ctx->pc = 0x31497Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314978u;
    // 0x31497c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C8E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C8E18u, 0x314978u, 0x314980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x314980u;
label_314980:
    // 0x314980: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x314980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_314984:
    // 0x314984: 0xc0a35d6  jal         func_28D758
label_314988:
    if (ctx->pc == 0x314988u) {
        ctx->pc = 0x314988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314984u;
        // 0x314988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31498Cu;
        goto label_31498c;
    }
    ctx->pc = 0x314984u;
    SET_GPR_U32(ctx, 31, 0x31498Cu);
    ctx->pc = 0x314988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314984u;
    // 0x314988: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x314984u, 0x31498Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31498Cu;
label_31498c:
    // 0x31498c: 0x10000005  b           . + 4 + (0x5 << 2)
label_314990:
    if (ctx->pc == 0x314990u) {
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31498Cu;
        // 0x314990: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314994u;
        goto label_314994;
    }
    ctx->pc = 0x31498Cu;
    {
        const bool branch_taken_0x31498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31498Cu;
        // 0x314990: 0x8e62001c  lw          $v0, 0x1C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31498c) {
            ctx->pc = 0x3149A4u;
            goto label_3149a4;
        }
    }
    ctx->pc = 0x314994u;
label_314994:
    // 0x314994: 0x2e420010  sltiu       $v0, $s2, 0x10
    ctx->pc = 0x314994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_314998:
    // 0x314998: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_31499c:
    if (ctx->pc == 0x31499Cu) {
        ctx->pc = 0x31499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314998u;
        // 0x31499c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149A0u;
        goto label_3149a0;
    }
    ctx->pc = 0x314998u;
    {
        const bool branch_taken_0x314998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314998u;
        // 0x31499c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314998) {
            ctx->pc = 0x3148F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3148f0;
        }
    }
    ctx->pc = 0x3149A0u;
label_3149a0:
    // 0x3149a0: 0x8e62001c  lw          $v0, 0x1C($s3)
    ctx->pc = 0x3149a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_3149a4:
    // 0x3149a4: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x3149a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_3149a8:
    // 0x3149a8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x3149a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_3149ac:
    // 0x3149ac: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x3149acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_3149b0:
    // 0x3149b0: 0x60f809  jalr        $v1
label_3149b4:
    if (ctx->pc == 0x3149B4u) {
        ctx->pc = 0x3149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B0u;
        // 0x3149b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149B8u;
        goto label_3149b8;
    }
    ctx->pc = 0x3149B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3149B8u);
        ctx->pc = 0x3149B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B0u;
        // 0x3149b4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3149B0u, 0x3149B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3149B8u;
label_3149b8:
    // 0x3149b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3149bc:
    if (ctx->pc == 0x3149BCu) {
        ctx->pc = 0x3149BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B8u;
        // 0x3149bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149C0u;
        goto label_3149c0;
    }
    ctx->pc = 0x3149B8u;
    {
        const bool branch_taken_0x3149b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B8u;
        // 0x3149bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149b8) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x3149C0u;
label_3149c0:
    // 0x3149c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3149c4:
    if (ctx->pc == 0x3149C4u) {
        ctx->pc = 0x3149C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149C0u;
        // 0x3149c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149C8u;
        goto label_3149c8;
    }
    ctx->pc = 0x3149C0u;
    {
        const bool branch_taken_0x3149c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149C0u;
        // 0x3149c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149c0) {
            ctx->pc = 0x3149CCu;
            goto label_3149cc;
        }
    }
    ctx->pc = 0x3149C8u;
label_3149c8:
    // 0x3149c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3149c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3149cc:
    // 0x3149cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3149ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3149d0:
    // 0x3149d0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3149d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3149d4:
    // 0x3149d4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3149d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3149d8:
    // 0x3149d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3149d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3149dc:
    // 0x3149dc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3149dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3149e0:
    // 0x3149e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3149e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3149e4:
    // 0x3149e4: 0x3e00008  jr          $ra
label_3149e8:
    if (ctx->pc == 0x3149E8u) {
        ctx->pc = 0x3149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E4u;
        // 0x3149e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149ECu;
        goto label_3149ec;
    }
    ctx->pc = 0x3149E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E4u;
        // 0x3149e8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3149E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3149ECu;
label_3149ec:
    // 0x3149ec: 0x0  nop
    ctx->pc = 0x3149ecu;
    // NOP
    ctx->pc = 0x3149f0u;
}
