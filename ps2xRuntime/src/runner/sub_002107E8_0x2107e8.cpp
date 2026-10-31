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

// Function: sub_002107E8
// Address: 0x2107e8 - 0x210b80
void sub_002107E8_0x2107e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002107E8_0x2107e8");
#endif

    switch (ctx->pc) {
        case 0x2107e8u: goto label_2107e8;
        case 0x2107ecu: goto label_2107ec;
        case 0x2107f0u: goto label_2107f0;
        case 0x2107f4u: goto label_2107f4;
        case 0x2107f8u: goto label_2107f8;
        case 0x2107fcu: goto label_2107fc;
        case 0x210800u: goto label_210800;
        case 0x210804u: goto label_210804;
        case 0x210808u: goto label_210808;
        case 0x21080cu: goto label_21080c;
        case 0x210810u: goto label_210810;
        case 0x210814u: goto label_210814;
        case 0x210818u: goto label_210818;
        case 0x21081cu: goto label_21081c;
        case 0x210820u: goto label_210820;
        case 0x210824u: goto label_210824;
        case 0x210828u: goto label_210828;
        case 0x21082cu: goto label_21082c;
        case 0x210830u: goto label_210830;
        case 0x210834u: goto label_210834;
        case 0x210838u: goto label_210838;
        case 0x21083cu: goto label_21083c;
        case 0x210840u: goto label_210840;
        case 0x210844u: goto label_210844;
        case 0x210848u: goto label_210848;
        case 0x21084cu: goto label_21084c;
        case 0x210850u: goto label_210850;
        case 0x210854u: goto label_210854;
        case 0x210858u: goto label_210858;
        case 0x21085cu: goto label_21085c;
        case 0x210860u: goto label_210860;
        case 0x210864u: goto label_210864;
        case 0x210868u: goto label_210868;
        case 0x21086cu: goto label_21086c;
        case 0x210870u: goto label_210870;
        case 0x210874u: goto label_210874;
        case 0x210878u: goto label_210878;
        case 0x21087cu: goto label_21087c;
        case 0x210880u: goto label_210880;
        case 0x210884u: goto label_210884;
        case 0x210888u: goto label_210888;
        case 0x21088cu: goto label_21088c;
        case 0x210890u: goto label_210890;
        case 0x210894u: goto label_210894;
        case 0x210898u: goto label_210898;
        case 0x21089cu: goto label_21089c;
        case 0x2108a0u: goto label_2108a0;
        case 0x2108a4u: goto label_2108a4;
        case 0x2108a8u: goto label_2108a8;
        case 0x2108acu: goto label_2108ac;
        case 0x2108b0u: goto label_2108b0;
        case 0x2108b4u: goto label_2108b4;
        case 0x2108b8u: goto label_2108b8;
        case 0x2108bcu: goto label_2108bc;
        case 0x2108c0u: goto label_2108c0;
        case 0x2108c4u: goto label_2108c4;
        case 0x2108c8u: goto label_2108c8;
        case 0x2108ccu: goto label_2108cc;
        case 0x2108d0u: goto label_2108d0;
        case 0x2108d4u: goto label_2108d4;
        case 0x2108d8u: goto label_2108d8;
        case 0x2108dcu: goto label_2108dc;
        case 0x2108e0u: goto label_2108e0;
        case 0x2108e4u: goto label_2108e4;
        case 0x2108e8u: goto label_2108e8;
        case 0x2108ecu: goto label_2108ec;
        case 0x2108f0u: goto label_2108f0;
        case 0x2108f4u: goto label_2108f4;
        case 0x2108f8u: goto label_2108f8;
        case 0x2108fcu: goto label_2108fc;
        case 0x210900u: goto label_210900;
        case 0x210904u: goto label_210904;
        case 0x210908u: goto label_210908;
        case 0x21090cu: goto label_21090c;
        case 0x210910u: goto label_210910;
        case 0x210914u: goto label_210914;
        case 0x210918u: goto label_210918;
        case 0x21091cu: goto label_21091c;
        case 0x210920u: goto label_210920;
        case 0x210924u: goto label_210924;
        case 0x210928u: goto label_210928;
        case 0x21092cu: goto label_21092c;
        case 0x210930u: goto label_210930;
        case 0x210934u: goto label_210934;
        case 0x210938u: goto label_210938;
        case 0x21093cu: goto label_21093c;
        case 0x210940u: goto label_210940;
        case 0x210944u: goto label_210944;
        case 0x210948u: goto label_210948;
        case 0x21094cu: goto label_21094c;
        case 0x210950u: goto label_210950;
        case 0x210954u: goto label_210954;
        case 0x210958u: goto label_210958;
        case 0x21095cu: goto label_21095c;
        case 0x210960u: goto label_210960;
        case 0x210964u: goto label_210964;
        case 0x210968u: goto label_210968;
        case 0x21096cu: goto label_21096c;
        case 0x210970u: goto label_210970;
        case 0x210974u: goto label_210974;
        case 0x210978u: goto label_210978;
        case 0x21097cu: goto label_21097c;
        case 0x210980u: goto label_210980;
        case 0x210984u: goto label_210984;
        case 0x210988u: goto label_210988;
        case 0x21098cu: goto label_21098c;
        case 0x210990u: goto label_210990;
        case 0x210994u: goto label_210994;
        case 0x210998u: goto label_210998;
        case 0x21099cu: goto label_21099c;
        case 0x2109a0u: goto label_2109a0;
        case 0x2109a4u: goto label_2109a4;
        case 0x2109a8u: goto label_2109a8;
        case 0x2109acu: goto label_2109ac;
        case 0x2109b0u: goto label_2109b0;
        case 0x2109b4u: goto label_2109b4;
        case 0x2109b8u: goto label_2109b8;
        case 0x2109bcu: goto label_2109bc;
        case 0x2109c0u: goto label_2109c0;
        case 0x2109c4u: goto label_2109c4;
        case 0x2109c8u: goto label_2109c8;
        case 0x2109ccu: goto label_2109cc;
        case 0x2109d0u: goto label_2109d0;
        case 0x2109d4u: goto label_2109d4;
        case 0x2109d8u: goto label_2109d8;
        case 0x2109dcu: goto label_2109dc;
        case 0x2109e0u: goto label_2109e0;
        case 0x2109e4u: goto label_2109e4;
        case 0x2109e8u: goto label_2109e8;
        case 0x2109ecu: goto label_2109ec;
        case 0x2109f0u: goto label_2109f0;
        case 0x2109f4u: goto label_2109f4;
        case 0x2109f8u: goto label_2109f8;
        case 0x2109fcu: goto label_2109fc;
        case 0x210a00u: goto label_210a00;
        case 0x210a04u: goto label_210a04;
        case 0x210a08u: goto label_210a08;
        case 0x210a0cu: goto label_210a0c;
        case 0x210a10u: goto label_210a10;
        case 0x210a14u: goto label_210a14;
        case 0x210a18u: goto label_210a18;
        case 0x210a1cu: goto label_210a1c;
        case 0x210a20u: goto label_210a20;
        case 0x210a24u: goto label_210a24;
        case 0x210a28u: goto label_210a28;
        case 0x210a2cu: goto label_210a2c;
        case 0x210a30u: goto label_210a30;
        case 0x210a34u: goto label_210a34;
        case 0x210a38u: goto label_210a38;
        case 0x210a3cu: goto label_210a3c;
        case 0x210a40u: goto label_210a40;
        case 0x210a44u: goto label_210a44;
        case 0x210a48u: goto label_210a48;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a50u: goto label_210a50;
        case 0x210a54u: goto label_210a54;
        case 0x210a58u: goto label_210a58;
        case 0x210a5cu: goto label_210a5c;
        case 0x210a60u: goto label_210a60;
        case 0x210a64u: goto label_210a64;
        case 0x210a68u: goto label_210a68;
        case 0x210a6cu: goto label_210a6c;
        case 0x210a70u: goto label_210a70;
        case 0x210a74u: goto label_210a74;
        case 0x210a78u: goto label_210a78;
        case 0x210a7cu: goto label_210a7c;
        case 0x210a80u: goto label_210a80;
        case 0x210a84u: goto label_210a84;
        case 0x210a88u: goto label_210a88;
        case 0x210a8cu: goto label_210a8c;
        case 0x210a90u: goto label_210a90;
        case 0x210a94u: goto label_210a94;
        case 0x210a98u: goto label_210a98;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aa0u: goto label_210aa0;
        case 0x210aa4u: goto label_210aa4;
        case 0x210aa8u: goto label_210aa8;
        case 0x210aacu: goto label_210aac;
        case 0x210ab0u: goto label_210ab0;
        case 0x210ab4u: goto label_210ab4;
        case 0x210ab8u: goto label_210ab8;
        case 0x210abcu: goto label_210abc;
        case 0x210ac0u: goto label_210ac0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ac8u: goto label_210ac8;
        case 0x210accu: goto label_210acc;
        case 0x210ad0u: goto label_210ad0;
        case 0x210ad4u: goto label_210ad4;
        case 0x210ad8u: goto label_210ad8;
        case 0x210adcu: goto label_210adc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210ae4u: goto label_210ae4;
        case 0x210ae8u: goto label_210ae8;
        case 0x210aecu: goto label_210aec;
        case 0x210af0u: goto label_210af0;
        case 0x210af4u: goto label_210af4;
        case 0x210af8u: goto label_210af8;
        case 0x210afcu: goto label_210afc;
        case 0x210b00u: goto label_210b00;
        case 0x210b04u: goto label_210b04;
        case 0x210b08u: goto label_210b08;
        case 0x210b0cu: goto label_210b0c;
        case 0x210b10u: goto label_210b10;
        case 0x210b14u: goto label_210b14;
        case 0x210b18u: goto label_210b18;
        case 0x210b1cu: goto label_210b1c;
        case 0x210b20u: goto label_210b20;
        case 0x210b24u: goto label_210b24;
        case 0x210b28u: goto label_210b28;
        case 0x210b2cu: goto label_210b2c;
        case 0x210b30u: goto label_210b30;
        case 0x210b34u: goto label_210b34;
        case 0x210b38u: goto label_210b38;
        case 0x210b3cu: goto label_210b3c;
        case 0x210b40u: goto label_210b40;
        case 0x210b44u: goto label_210b44;
        case 0x210b48u: goto label_210b48;
        case 0x210b4cu: goto label_210b4c;
        case 0x210b50u: goto label_210b50;
        case 0x210b54u: goto label_210b54;
        case 0x210b58u: goto label_210b58;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b60u: goto label_210b60;
        case 0x210b64u: goto label_210b64;
        case 0x210b68u: goto label_210b68;
        case 0x210b6cu: goto label_210b6c;
        case 0x210b70u: goto label_210b70;
        case 0x210b74u: goto label_210b74;
        case 0x210b78u: goto label_210b78;
        case 0x210b7cu: goto label_210b7c;
        default: break;
    }

    ctx->pc = 0x2107e8u;

label_2107e8:
    // 0x2107e8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_2107ec:
    // 0x2107ec: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2107ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_2107f0:
    // 0x2107f0: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2107f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_2107f4:
    // 0x2107f4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2107f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2107f8:
    // 0x2107f8: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2107f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_2107fc:
    // 0x2107fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2107fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210800:
    // 0x210800: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x210800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_210804:
    // 0x210804: 0x2e820002  sltiu       $v0, $s4, 0x2
    ctx->pc = 0x210804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_210808:
    // 0x210808: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x210808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_21080c:
    // 0x21080c: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x21080cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_210810:
    // 0x210810: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x210810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_210814:
    // 0x210814: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x210814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_210818:
    // 0x210818: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x210818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_21081c:
    // 0x21081c: 0x104000cc  beqz        $v0, . + 4 + (0xCC << 2)
label_210820:
    if (ctx->pc == 0x210820u) {
        ctx->pc = 0x210820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21081Cu;
        // 0x210820: 0xffbf00d0  sd          $ra, 0xD0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210824u;
        goto label_210824;
    }
    ctx->pc = 0x21081Cu;
    {
        const bool branch_taken_0x21081c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21081Cu;
        // 0x210820: 0xffbf00d0  sd          $ra, 0xD0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21081c) {
            ctx->pc = 0x210B50u;
            goto label_210b50;
        }
    }
    ctx->pc = 0x210824u;
label_210824:
    // 0x210824: 0x26241ef0  addiu       $a0, $s1, 0x1EF0
    ctx->pc = 0x210824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
label_210828:
    // 0x210828: 0xc069ae0  jal         func_1A6B80
label_21082c:
    if (ctx->pc == 0x21082Cu) {
        ctx->pc = 0x21082Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210828u;
        // 0x21082c: 0x26334330  addiu       $s3, $s1, 0x4330 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 17200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210830u;
        goto label_210830;
    }
    ctx->pc = 0x210828u;
    SET_GPR_U32(ctx, 31, 0x210830u);
    ctx->pc = 0x21082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210828u;
    // 0x21082c: 0x26334330  addiu       $s3, $s1, 0x4330 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 17200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6B80u, 0x210828u, 0x210830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210830u;
label_210830:
    // 0x210830: 0x26370070  addiu       $s7, $s1, 0x70
    ctx->pc = 0x210830u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_210834:
    // 0x210834: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x210834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_210838:
    // 0x210838: 0xae3440f4  sw          $s4, 0x40F4($s1)
    ctx->pc = 0x210838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16628), GPR_U32(ctx, 20));
label_21083c:
    // 0x21083c: 0xae2040f8  sw          $zero, 0x40F8($s1)
    ctx->pc = 0x21083cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16632), GPR_U32(ctx, 0));
label_210840:
    // 0x210840: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210844:
    // 0x210844: 0xae2240f0  sw          $v0, 0x40F0($s1)
    ctx->pc = 0x210844u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16624), GPR_U32(ctx, 2));
label_210848:
    // 0x210848: 0xc0840bc  jal         func_2102F0
label_21084c:
    if (ctx->pc == 0x21084Cu) {
        ctx->pc = 0x21084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210848u;
        // 0x21084c: 0x263e4590  addiu       $fp, $s1, 0x4590 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 17808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210850u;
        goto label_210850;
    }
    ctx->pc = 0x210848u;
    SET_GPR_U32(ctx, 31, 0x210850u);
    ctx->pc = 0x21084Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210848u;
    // 0x21084c: 0x263e4590  addiu       $fp, $s1, 0x4590 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 17808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2102F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2102F0u, 0x210848u, 0x210850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210850u;
label_210850:
    // 0x210850: 0x24020120  addiu       $v0, $zero, 0x120
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_210854:
    // 0x210854: 0x8e2940f4  lw          $t1, 0x40F4($s1)
    ctx->pc = 0x210854u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_210858:
    // 0x210858: 0x2823018  mult        $a2, $s4, $v0
    ctx->pc = 0x210858u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_21085c:
    // 0x21085c: 0x8e250068  lw          $a1, 0x68($s1)
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_210860:
    // 0x210860: 0x240a0025  addiu       $t2, $zero, 0x25
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_210864:
    // 0x210864: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x210864u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_210868:
    // 0x210868: 0xa3aa00c0  sb          $t2, 0xC0($sp)
    ctx->pc = 0x210868u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 192), (uint8_t)GPR_U32(ctx, 10));
label_21086c:
    // 0x21086c: 0x2463f7b0  addiu       $v1, $v1, -0x850
    ctx->pc = 0x21086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965168));
label_210870:
    // 0x210870: 0x1224818  mult        $t1, $t1, $v0
    ctx->pc = 0x210870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
label_210874:
    // 0x210874: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x210874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_210878:
    // 0x210878: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x210878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_21087c:
    // 0x21087c: 0x240b00ff  addiu       $t3, $zero, 0xFF
    ctx->pc = 0x21087cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_210880:
    // 0x210880: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x210880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_210884:
    // 0x210884: 0x663021  addu        $a2, $v1, $a2
    ctx->pc = 0x210884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_210888:
    // 0x210888: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_21088c:
    // 0x21088c: 0x2463fff0  addiu       $v1, $v1, -0x10
    ctx->pc = 0x21088cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967280));
label_210890:
    // 0x210890: 0x7e2240e0  sq          $v0, 0x40E0($s1)
    ctx->pc = 0x210890u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16608), GPR_VEC(ctx, 2));
label_210894:
    // 0x210894: 0x1234821  addu        $t1, $t1, $v1
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_210898:
    // 0x210898: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x210898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_21089c:
    // 0x21089c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x21089cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2108a0:
    // 0x2108a0: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2108a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_2108a4:
    // 0x2108a4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2108a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2108a8:
    // 0x2108a8: 0x78c30050  lq          $v1, 0x50($a2)
    ctx->pc = 0x2108a8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 80)));
label_2108ac:
    // 0x2108ac: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2108b0:
    // 0x2108b0: 0xc52d0074  lwc1        $f13, 0x74($t1)
    ctx->pc = 0x2108b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2108b4:
    // 0x2108b4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2108b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_2108b8:
    // 0x2108b8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2108b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2108bc:
    // 0x2108bc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x2108bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2108c0:
    // 0x2108c0: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x2108c0u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_2108c4:
    // 0x2108c4: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x2108c4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_2108c8:
    // 0x2108c8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2108c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2108cc:
    // 0x2108cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2108d0:
    // 0x2108d0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2108d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2108d4:
    // 0x2108d4: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x2108d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
label_2108d8:
    // 0x2108d8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2108d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2108dc:
    // 0x2108dc: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x2108dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2108e0:
    // 0x2108e0: 0xa10b0003  sb          $t3, 0x3($t0)
    ctx->pc = 0x2108e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 3), (uint8_t)GPR_U32(ctx, 11));
label_2108e4:
    // 0x2108e4: 0xa10a0002  sb          $t2, 0x2($t0)
    ctx->pc = 0x2108e4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 2), (uint8_t)GPR_U32(ctx, 10));
label_2108e8:
    // 0x2108e8: 0xa10a0001  sb          $t2, 0x1($t0)
    ctx->pc = 0x2108e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 1), (uint8_t)GPR_U32(ctx, 10));
label_2108ec:
    // 0x2108ec: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2108ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2108f0:
    // 0x2108f0: 0xc52c0070  lwc1        $f12, 0x70($t1)
    ctx->pc = 0x2108f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2108f4:
    // 0x2108f4: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2108f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2108f8:
    // 0x2108f8: 0xc0683f4  jal         func_1A0FD0
label_2108fc:
    if (ctx->pc == 0x2108FCu) {
        ctx->pc = 0x2108FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108F8u;
        // 0x2108fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210900u;
        goto label_210900;
    }
    ctx->pc = 0x2108F8u;
    SET_GPR_U32(ctx, 31, 0x210900u);
    ctx->pc = 0x2108FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2108F8u;
    // 0x2108fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x2108F8u, 0x210900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210900u;
label_210900:
    // 0x210900: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x210900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_210904:
    // 0x210904: 0x27ac00c4  addiu       $t4, $sp, 0xC4
    ctx->pc = 0x210904u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_210908:
    // 0x210908: 0x27b60030  addiu       $s6, $sp, 0x30
    ctx->pc = 0x210908u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_21090c:
    // 0x21090c: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x21090cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_210910:
    // 0x210910: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x210910u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210914:
    // 0x210914: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x210914u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_210918:
    // 0x210918: 0x7a050010  lq          $a1, 0x10($s0)
    ctx->pc = 0x210918u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_21091c:
    // 0x21091c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x21091cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
label_210920:
    // 0x210920: 0x7c450010  sq          $a1, 0x10($v0)
    ctx->pc = 0x210920u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 5));
label_210924:
    // 0x210924: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x210924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_210928:
    // 0x210928: 0x1603fffa  bne         $s0, $v1, . + 4 + (-0x6 << 2)
label_21092c:
    if (ctx->pc == 0x21092Cu) {
        ctx->pc = 0x21092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210928u;
        // 0x21092c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210930u;
        goto label_210930;
    }
    ctx->pc = 0x210928u;
    {
        const bool branch_taken_0x210928 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x21092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210928u;
        // 0x21092c: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210928) {
            ctx->pc = 0x210914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210914;
        }
    }
    ctx->pc = 0x210930u;
label_210930:
    // 0x210930: 0x7a080000  lq          $t0, 0x0($s0)
    ctx->pc = 0x210930u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_210934:
    // 0x210934: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x210934u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_210938:
    // 0x210938: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x210938u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
label_21093c:
    // 0x21093c: 0x24a794a0  addiu       $a3, $a1, -0x6B60
    ctx->pc = 0x21093cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939808));
label_210940:
    // 0x210940: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_210944:
    // 0x210944: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_210948:
    // 0x210948: 0x8e2a40f4  lw          $t2, 0x40F4($s1)
    ctx->pc = 0x210948u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_21094c:
    // 0x21094c: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
label_210950:
    // 0x210950: 0x8e254398  lw          $a1, 0x4398($s1)
    ctx->pc = 0x210950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17304)));
label_210954:
    // 0x210954: 0x2484f840  addiu       $a0, $a0, -0x7C0
    ctx->pc = 0x210954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965312));
label_210958:
    // 0x210958: 0x1435018  mult        $t2, $t2, $v1
    ctx->pc = 0x210958u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
label_21095c:
    // 0x21095c: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x21095cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_210960:
    // 0x210960: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x210960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_210964:
    // 0x210964: 0x2486ff60  addiu       $a2, $a0, -0xA0
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
label_210968:
    // 0x210968: 0xafa700b8  sw          $a3, 0xB8($sp)
    ctx->pc = 0x210968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
label_21096c:
    // 0x21096c: 0x240b0025  addiu       $t3, $zero, 0x25
    ctx->pc = 0x21096cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_210970:
    // 0x210970: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x210970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_210974:
    // 0x210974: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x210974u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_210978:
    // 0x210978: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x210978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_21097c:
    // 0x21097c: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x21097cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210980:
    // 0x210980: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x210980u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_210984:
    // 0x210984: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x210984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
label_210988:
    // 0x210988: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x210988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_21098c:
    // 0x21098c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x21098cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_210990:
    // 0x210990: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x210990u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_210994:
    // 0x210994: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x210994u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_210998:
    // 0x210998: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x210998u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
label_21099c:
    // 0x21099c: 0xa3ab00c4  sb          $t3, 0xC4($sp)
    ctx->pc = 0x21099cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 196), (uint8_t)GPR_U32(ctx, 11));
label_2109a0:
    // 0x2109a0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x2109a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_2109a4:
    // 0x2109a4: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x2109a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_2109a8:
    // 0x2109a8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x2109a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_2109ac:
    // 0x2109ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2109acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2109b0:
    // 0x2109b0: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x2109b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
label_2109b4:
    // 0x2109b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2109b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2109b8:
    // 0x2109b8: 0xa1880003  sb          $t0, 0x3($t4)
    ctx->pc = 0x2109b8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 3), (uint8_t)GPR_U32(ctx, 8));
label_2109bc:
    // 0x2109bc: 0x34e70036  ori         $a3, $a3, 0x36
    ctx->pc = 0x2109bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54);
label_2109c0:
    // 0x2109c0: 0xa18b0002  sb          $t3, 0x2($t4)
    ctx->pc = 0x2109c0u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 2), (uint8_t)GPR_U32(ctx, 11));
label_2109c4:
    // 0x2109c4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2109c8:
    // 0x2109c8: 0xa18b0001  sb          $t3, 0x1($t4)
    ctx->pc = 0x2109c8u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 1), (uint8_t)GPR_U32(ctx, 11));
label_2109cc:
    // 0x2109cc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2109ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2109d0:
    // 0x2109d0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2109d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2109d4:
    // 0x2109d4: 0xc54d00b4  lwc1        $f13, 0xB4($t2)
    ctx->pc = 0x2109d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2109d8:
    // 0x2109d8: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x2109d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_2109dc:
    // 0x2109dc: 0xc0683f4  jal         func_1A0FD0
label_2109e0:
    if (ctx->pc == 0x2109E0u) {
        ctx->pc = 0x2109E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109DCu;
        // 0x2109e0: 0xc54c00b0  lwc1        $f12, 0xB0($t2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2109E4u;
        goto label_2109e4;
    }
    ctx->pc = 0x2109DCu;
    SET_GPR_U32(ctx, 31, 0x2109E4u);
    ctx->pc = 0x2109E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2109DCu;
    // 0x2109e0: 0xc54c00b0  lwc1        $f12, 0xB0($t2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0FD0u, 0x2109DCu, 0x2109E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109E4u;
label_2109e4:
    // 0x2109e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2109e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2109e8:
    // 0x2109e8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2109e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2109ec:
    // 0x2109ec: 0x78860000  lq          $a2, 0x0($a0)
    ctx->pc = 0x2109ecu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_2109f0:
    // 0x2109f0: 0x78870010  lq          $a3, 0x10($a0)
    ctx->pc = 0x2109f0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_2109f4:
    // 0x2109f4: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2109f4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
label_2109f8:
    // 0x2109f8: 0x27ae00b0  addiu       $t6, $sp, 0xB0
    ctx->pc = 0x2109f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2109fc:
    // 0x2109fc: 0x7ca70010  sq          $a3, 0x10($a1)
    ctx->pc = 0x2109fcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 7));
label_210a00:
    // 0x210a00: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x210a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_210a04:
    // 0x210a04: 0x148efff9  bne         $a0, $t6, . + 4 + (-0x7 << 2)
label_210a08:
    if (ctx->pc == 0x210A08u) {
        ctx->pc = 0x210A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A04u;
        // 0x210a08: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A0Cu;
        goto label_210a0c;
    }
    ctx->pc = 0x210A04u;
    {
        const bool branch_taken_0x210a04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 14));
        ctx->pc = 0x210A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A04u;
        // 0x210a08: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a04) {
            ctx->pc = 0x2109ECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2109ec;
        }
    }
    ctx->pc = 0x210A0Cu;
label_210a0c:
    // 0x210a0c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x210a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_210a10:
    // 0x210a10: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_210a14:
    // 0x210a14: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x210a14u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_210a18:
    // 0x210a18: 0x24c394a0  addiu       $v1, $a2, -0x6B60
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939808));
label_210a1c:
    // 0x210a1c: 0x7ca70000  sq          $a3, 0x0($a1)
    ctx->pc = 0x210a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 7));
label_210a20:
    // 0x210a20: 0xae224398  sw          $v0, 0x4398($s1)
    ctx->pc = 0x210a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17304), GPR_U32(ctx, 2));
label_210a24:
    // 0x210a24: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x210a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210a28:
    // 0x210a28: 0xae600058  sw          $zero, 0x58($s3)
    ctx->pc = 0x210a28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
label_210a2c:
    // 0x210a2c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x210a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_210a30:
    // 0x210a30: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x210a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
label_210a34:
    // 0x210a34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x210a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_210a38:
    // 0x210a38: 0x8c46f208  lw          $a2, -0xDF8($v0)
    ctx->pc = 0x210a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963720)));
label_210a3c:
    // 0x210a3c: 0xc0686fa  jal         func_1A1BE8
label_210a40:
    if (ctx->pc == 0x210A40u) {
        ctx->pc = 0x210A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A3Cu;
        // 0x210a40: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A44u;
        goto label_210a44;
    }
    ctx->pc = 0x210A3Cu;
    SET_GPR_U32(ctx, 31, 0x210A44u);
    ctx->pc = 0x210A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A3Cu;
    // 0x210a40: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1BE8u, 0x210A3Cu, 0x210A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A44u;
label_210a44:
    // 0x210a44: 0x8e2540f4  lw          $a1, 0x40F4($s1)
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_210a48:
    // 0x210a48: 0x24030120  addiu       $v1, $zero, 0x120
    ctx->pc = 0x210a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_210a4c:
    // 0x210a4c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x210a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_210a50:
    // 0x210a50: 0x3c0c0051  lui         $t4, 0x51
    ctx->pc = 0x210a50u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)81 << 16));
label_210a54:
    // 0x210a54: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x210a54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_210a58:
    // 0x210a58: 0x8c48d310  lw          $t0, -0x2CF0($v0)
    ctx->pc = 0x210a58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955792)));
label_210a5c:
    // 0x210a5c: 0x258cf7a0  addiu       $t4, $t4, -0x860
    ctx->pc = 0x210a5cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294965152));
label_210a60:
    // 0x210a60: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x210a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_210a64:
    // 0x210a64: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x210a64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_210a68:
    // 0x210a68: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x210a68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_210a6c:
    // 0x210a6c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x210a6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210a70:
    // 0x210a70: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x210a70u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a74:
    // 0x210a74: 0xac1021  addu        $v0, $a1, $t4
    ctx->pc = 0x210a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_210a78:
    // 0x210a78: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x210a78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_210a7c:
    // 0x210a7c: 0x1856021  addu        $t4, $t4, $a1
    ctx->pc = 0x210a7cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 5)));
label_210a80:
    // 0x210a80: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x210a80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_210a84:
    // 0x210a84: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x210a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_210a88:
    // 0x210a88: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x210a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_210a8c:
    // 0x210a8c: 0x6845000f  ldl         $a1, 0xF($v0)
    ctx->pc = 0x210a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_210a90:
    // 0x210a90: 0x6c450008  ldr         $a1, 0x8($v0)
    ctx->pc = 0x210a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_210a94:
    // 0x210a94: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x210a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_210a98:
    // 0x210a98: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x210a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_210a9c:
    // 0x210a9c: 0xb3a5003f  sdl         $a1, 0x3F($sp)
    ctx->pc = 0x210a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_210aa0:
    // 0x210aa0: 0xb7a50038  sdr         $a1, 0x38($sp)
    ctx->pc = 0x210aa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_210aa4:
    // 0x210aa4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x210aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_210aa8:
    // 0x210aa8: 0xa3ad00c8  sb          $t5, 0xC8($sp)
    ctx->pc = 0x210aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 13));
label_210aac:
    // 0x210aac: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x210aacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210ab0:
    // 0x210ab0: 0xa24d0003  sb          $t5, 0x3($s2)
    ctx->pc = 0x210ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 13));
label_210ab4:
    // 0x210ab4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x210ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_210ab8:
    // 0x210ab8: 0xa24d0001  sb          $t5, 0x1($s2)
    ctx->pc = 0x210ab8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 13));
label_210abc:
    // 0x210abc: 0xa24d0002  sb          $t5, 0x2($s2)
    ctx->pc = 0x210abcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 13));
label_210ac0:
    // 0x210ac0: 0x79830080  lq          $v1, 0x80($t4)
    ctx->pc = 0x210ac0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 12), 128)));
label_210ac4:
    // 0x210ac4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x210ac4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_210ac8:
    // 0x210ac8: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x210ac8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_210acc:
    // 0x210acc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x210accu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_210ad0:
    // 0x210ad0: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x210ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_210ad4:
    // 0x210ad4: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x210ad4u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
label_210ad8:
    // 0x210ad8: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x210ad8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
label_210adc:
    // 0x210adc: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x210adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_210ae0:
    // 0x210ae0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x210ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_210ae4:
    // 0x210ae4: 0xc071dcc  jal         func_1C7730
label_210ae8:
    if (ctx->pc == 0x210AE8u) {
        ctx->pc = 0x210AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AE4u;
        // 0x210ae8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AECu;
        goto label_210aec;
    }
    ctx->pc = 0x210AE4u;
    SET_GPR_U32(ctx, 31, 0x210AECu);
    ctx->pc = 0x210AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210AE4u;
    // 0x210ae8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C7730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C7730u, 0x210AE4u, 0x210AECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AECu;
label_210aec:
    // 0x210aec: 0x8e2540f4  lw          $a1, 0x40F4($s1)
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16628)));
label_210af0:
    // 0x210af0: 0xc08388e  jal         func_20E238
label_210af4:
    if (ctx->pc == 0x210AF4u) {
        ctx->pc = 0x210AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AF0u;
        // 0x210af4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AF8u;
        goto label_210af8;
    }
    ctx->pc = 0x210AF0u;
    SET_GPR_U32(ctx, 31, 0x210AF8u);
    ctx->pc = 0x210AF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210AF0u;
    // 0x210af4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E238u, 0x210AF0u, 0x210AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AF8u;
label_210af8:
    // 0x210af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210afc:
    // 0x210afc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210b00:
    // 0x210b00: 0xae224108  sw          $v0, 0x4108($s1)
    ctx->pc = 0x210b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16648), GPR_U32(ctx, 2));
label_210b04:
    // 0x210b04: 0xc083816  jal         func_20E058
label_210b08:
    if (ctx->pc == 0x210B08u) {
        ctx->pc = 0x210B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B04u;
        // 0x210b08: 0xae224100  sw          $v0, 0x4100($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B0Cu;
        goto label_210b0c;
    }
    ctx->pc = 0x210B04u;
    SET_GPR_U32(ctx, 31, 0x210B0Cu);
    ctx->pc = 0x210B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B04u;
    // 0x210b08: 0xae224100  sw          $v0, 0x4100($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E058u, 0x210B04u, 0x210B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B0Cu;
label_210b0c:
    // 0x210b0c: 0xc08385a  jal         func_20E168
label_210b10:
    if (ctx->pc == 0x210B10u) {
        ctx->pc = 0x210B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B0Cu;
        // 0x210b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B14u;
        goto label_210b14;
    }
    ctx->pc = 0x210B0Cu;
    SET_GPR_U32(ctx, 31, 0x210B14u);
    ctx->pc = 0x210B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B0Cu;
    // 0x210b10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E168u, 0x210B0Cu, 0x210B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B14u;
label_210b14:
    // 0x210b14: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x210b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_210b18:
    // 0x210b18: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_210b1c:
    // 0x210b1c: 0xae204114  sw          $zero, 0x4114($s1)
    ctx->pc = 0x210b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16660), GPR_U32(ctx, 0));
label_210b20:
    // 0x210b20: 0xae204118  sw          $zero, 0x4118($s1)
    ctx->pc = 0x210b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16664), GPR_U32(ctx, 0));
label_210b24:
    // 0x210b24: 0xae204104  sw          $zero, 0x4104($s1)
    ctx->pc = 0x210b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16644), GPR_U32(ctx, 0));
label_210b28:
    // 0x210b28: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_210b2c:
    // 0x210b2c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x210b2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_210b30:
    // 0x210b30: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_210b34:
    // 0x210b34: 0x40f809  jalr        $v0
label_210b38:
    if (ctx->pc == 0x210B38u) {
        ctx->pc = 0x210B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B34u;
        // 0x210b38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B3Cu;
        goto label_210b3c;
    }
    ctx->pc = 0x210B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210B3Cu);
        ctx->pc = 0x210B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B34u;
        // 0x210b38: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B34u, 0x210B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210B3Cu;
label_210b3c:
    // 0x210b3c: 0xae22411c  sw          $v0, 0x411C($s1)
    ctx->pc = 0x210b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16668), GPR_U32(ctx, 2));
label_210b40:
    // 0x210b40: 0xae204614  sw          $zero, 0x4614($s1)
    ctx->pc = 0x210b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17940), GPR_U32(ctx, 0));
label_210b44:
    // 0x210b44: 0xae20410c  sw          $zero, 0x410C($s1)
    ctx->pc = 0x210b44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16652), GPR_U32(ctx, 0));
label_210b48:
    // 0x210b48: 0xae204610  sw          $zero, 0x4610($s1)
    ctx->pc = 0x210b48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17936), GPR_U32(ctx, 0));
label_210b4c:
    // 0x210b4c: 0xae204110  sw          $zero, 0x4110($s1)
    ctx->pc = 0x210b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16656), GPR_U32(ctx, 0));
label_210b50:
    // 0x210b50: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x210b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_210b54:
    // 0x210b54: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x210b54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_210b58:
    // 0x210b58: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x210b58u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_210b5c:
    // 0x210b5c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x210b5cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_210b60:
    // 0x210b60: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x210b60u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_210b64:
    // 0x210b64: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x210b64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_210b68:
    // 0x210b68: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x210b68u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_210b6c:
    // 0x210b6c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x210b6cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_210b70:
    // 0x210b70: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x210b70u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_210b74:
    // 0x210b74: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x210b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_210b78:
    // 0x210b78: 0x3e00008  jr          $ra
label_210b7c:
    if (ctx->pc == 0x210B7Cu) {
        ctx->pc = 0x210B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B78u;
        // 0x210b7c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B80u;
        goto label_fallthrough_0x210b78;
    }
    ctx->pc = 0x210B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B78u;
        // 0x210b7c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x210b78:
    ctx->pc = 0x210B80u;
}
