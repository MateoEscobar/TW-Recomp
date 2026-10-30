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

// Function: sub_00264878
// Address: 0x264878 - 0x264a80
void sub_00264878_0x264878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264878_0x264878");
#endif

    switch (ctx->pc) {
        case 0x264878u: goto label_264878;
        case 0x26487cu: goto label_26487c;
        case 0x264880u: goto label_264880;
        case 0x264884u: goto label_264884;
        case 0x264888u: goto label_264888;
        case 0x26488cu: goto label_26488c;
        case 0x264890u: goto label_264890;
        case 0x264894u: goto label_264894;
        case 0x264898u: goto label_264898;
        case 0x26489cu: goto label_26489c;
        case 0x2648a0u: goto label_2648a0;
        case 0x2648a4u: goto label_2648a4;
        case 0x2648a8u: goto label_2648a8;
        case 0x2648acu: goto label_2648ac;
        case 0x2648b0u: goto label_2648b0;
        case 0x2648b4u: goto label_2648b4;
        case 0x2648b8u: goto label_2648b8;
        case 0x2648bcu: goto label_2648bc;
        case 0x2648c0u: goto label_2648c0;
        case 0x2648c4u: goto label_2648c4;
        case 0x2648c8u: goto label_2648c8;
        case 0x2648ccu: goto label_2648cc;
        case 0x2648d0u: goto label_2648d0;
        case 0x2648d4u: goto label_2648d4;
        case 0x2648d8u: goto label_2648d8;
        case 0x2648dcu: goto label_2648dc;
        case 0x2648e0u: goto label_2648e0;
        case 0x2648e4u: goto label_2648e4;
        case 0x2648e8u: goto label_2648e8;
        case 0x2648ecu: goto label_2648ec;
        case 0x2648f0u: goto label_2648f0;
        case 0x2648f4u: goto label_2648f4;
        case 0x2648f8u: goto label_2648f8;
        case 0x2648fcu: goto label_2648fc;
        case 0x264900u: goto label_264900;
        case 0x264904u: goto label_264904;
        case 0x264908u: goto label_264908;
        case 0x26490cu: goto label_26490c;
        case 0x264910u: goto label_264910;
        case 0x264914u: goto label_264914;
        case 0x264918u: goto label_264918;
        case 0x26491cu: goto label_26491c;
        case 0x264920u: goto label_264920;
        case 0x264924u: goto label_264924;
        case 0x264928u: goto label_264928;
        case 0x26492cu: goto label_26492c;
        case 0x264930u: goto label_264930;
        case 0x264934u: goto label_264934;
        case 0x264938u: goto label_264938;
        case 0x26493cu: goto label_26493c;
        case 0x264940u: goto label_264940;
        case 0x264944u: goto label_264944;
        case 0x264948u: goto label_264948;
        case 0x26494cu: goto label_26494c;
        case 0x264950u: goto label_264950;
        case 0x264954u: goto label_264954;
        case 0x264958u: goto label_264958;
        case 0x26495cu: goto label_26495c;
        case 0x264960u: goto label_264960;
        case 0x264964u: goto label_264964;
        case 0x264968u: goto label_264968;
        case 0x26496cu: goto label_26496c;
        case 0x264970u: goto label_264970;
        case 0x264974u: goto label_264974;
        case 0x264978u: goto label_264978;
        case 0x26497cu: goto label_26497c;
        case 0x264980u: goto label_264980;
        case 0x264984u: goto label_264984;
        case 0x264988u: goto label_264988;
        case 0x26498cu: goto label_26498c;
        case 0x264990u: goto label_264990;
        case 0x264994u: goto label_264994;
        case 0x264998u: goto label_264998;
        case 0x26499cu: goto label_26499c;
        case 0x2649a0u: goto label_2649a0;
        case 0x2649a4u: goto label_2649a4;
        case 0x2649a8u: goto label_2649a8;
        case 0x2649acu: goto label_2649ac;
        case 0x2649b0u: goto label_2649b0;
        case 0x2649b4u: goto label_2649b4;
        case 0x2649b8u: goto label_2649b8;
        case 0x2649bcu: goto label_2649bc;
        case 0x2649c0u: goto label_2649c0;
        case 0x2649c4u: goto label_2649c4;
        case 0x2649c8u: goto label_2649c8;
        case 0x2649ccu: goto label_2649cc;
        case 0x2649d0u: goto label_2649d0;
        case 0x2649d4u: goto label_2649d4;
        case 0x2649d8u: goto label_2649d8;
        case 0x2649dcu: goto label_2649dc;
        case 0x2649e0u: goto label_2649e0;
        case 0x2649e4u: goto label_2649e4;
        case 0x2649e8u: goto label_2649e8;
        case 0x2649ecu: goto label_2649ec;
        case 0x2649f0u: goto label_2649f0;
        case 0x2649f4u: goto label_2649f4;
        case 0x2649f8u: goto label_2649f8;
        case 0x2649fcu: goto label_2649fc;
        case 0x264a00u: goto label_264a00;
        case 0x264a04u: goto label_264a04;
        case 0x264a08u: goto label_264a08;
        case 0x264a0cu: goto label_264a0c;
        case 0x264a10u: goto label_264a10;
        case 0x264a14u: goto label_264a14;
        case 0x264a18u: goto label_264a18;
        case 0x264a1cu: goto label_264a1c;
        case 0x264a20u: goto label_264a20;
        case 0x264a24u: goto label_264a24;
        case 0x264a28u: goto label_264a28;
        case 0x264a2cu: goto label_264a2c;
        case 0x264a30u: goto label_264a30;
        case 0x264a34u: goto label_264a34;
        case 0x264a38u: goto label_264a38;
        case 0x264a3cu: goto label_264a3c;
        case 0x264a40u: goto label_264a40;
        case 0x264a44u: goto label_264a44;
        case 0x264a48u: goto label_264a48;
        case 0x264a4cu: goto label_264a4c;
        case 0x264a50u: goto label_264a50;
        case 0x264a54u: goto label_264a54;
        case 0x264a58u: goto label_264a58;
        case 0x264a5cu: goto label_264a5c;
        case 0x264a60u: goto label_264a60;
        case 0x264a64u: goto label_264a64;
        case 0x264a68u: goto label_264a68;
        case 0x264a6cu: goto label_264a6c;
        case 0x264a70u: goto label_264a70;
        case 0x264a74u: goto label_264a74;
        case 0x264a78u: goto label_264a78;
        case 0x264a7cu: goto label_264a7c;
        default: break;
    }

    ctx->pc = 0x264878u;

label_264878:
    // 0x264878: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x264878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26487c:
    // 0x26487c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x26487cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_264880:
    // 0x264880: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x264880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_264884:
    // 0x264884: 0x3c100056  lui         $s0, 0x56
    ctx->pc = 0x264884u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)86 << 16));
label_264888:
    // 0x264888: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x264888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_26488c:
    // 0x26488c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26488cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264890:
    // 0x264890: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x264890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_264894:
    // 0x264894: 0x2610ddf8  addiu       $s0, $s0, -0x2208
    ctx->pc = 0x264894u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958584));
label_264898:
    // 0x264898: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x264898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_26489c:
    // 0x26489c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26489cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2648a0:
    // 0x2648a0: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2648a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_2648a4:
    // 0x2648a4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2648a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_2648a8:
    // 0x2648a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2648a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2648ac:
    // 0x2648ac: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2648acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_2648b0:
    // 0x2648b0: 0xc041532  jal         func_1054C8
label_2648b4:
    if (ctx->pc == 0x2648B4u) {
        ctx->pc = 0x2648B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648B0u;
        // 0x2648b4: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2648B8u;
        goto label_2648b8;
    }
    ctx->pc = 0x2648B0u;
    SET_GPR_U32(ctx, 31, 0x2648B8u);
    ctx->pc = 0x2648B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2648B0u;
    // 0x2648b4: 0x8e3500d8  lw          $s5, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2648B0u, 0x2648B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648B8u;
label_2648b8:
    // 0x2648b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2648b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2648bc:
    // 0x2648bc: 0xc041532  jal         func_1054C8
label_2648c0:
    if (ctx->pc == 0x2648C0u) {
        ctx->pc = 0x2648C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648BCu;
        // 0x2648c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2648C4u;
        goto label_2648c4;
    }
    ctx->pc = 0x2648BCu;
    SET_GPR_U32(ctx, 31, 0x2648C4u);
    ctx->pc = 0x2648C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2648BCu;
    // 0x2648c0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2648BCu, 0x2648C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648C4u;
label_2648c4:
    // 0x2648c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2648c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2648c8:
    // 0x2648c8: 0xc041532  jal         func_1054C8
label_2648cc:
    if (ctx->pc == 0x2648CCu) {
        ctx->pc = 0x2648CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648C8u;
        // 0x2648cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2648D0u;
        goto label_2648d0;
    }
    ctx->pc = 0x2648C8u;
    SET_GPR_U32(ctx, 31, 0x2648D0u);
    ctx->pc = 0x2648CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2648C8u;
    // 0x2648cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1054C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1054C8u, 0x2648C8u, 0x2648D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648D0u;
label_2648d0:
    // 0x2648d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2648d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2648d4:
    // 0x2648d4: 0xc089baa  jal         func_226EA8
label_2648d8:
    if (ctx->pc == 0x2648D8u) {
        ctx->pc = 0x2648D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648D4u;
        // 0x2648d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2648DCu;
        goto label_2648dc;
    }
    ctx->pc = 0x2648D4u;
    SET_GPR_U32(ctx, 31, 0x2648DCu);
    ctx->pc = 0x2648D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2648D4u;
    // 0x2648d8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226EA8u, 0x2648D4u, 0x2648DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648DCu;
label_2648dc:
    // 0x2648dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2648dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2648e0:
    // 0x2648e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2648e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2648e4:
    // 0x2648e4: 0xc095142  jal         func_254508
label_2648e8:
    if (ctx->pc == 0x2648E8u) {
        ctx->pc = 0x2648E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648E4u;
        // 0x2648e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2648ECu;
        goto label_2648ec;
    }
    ctx->pc = 0x2648E4u;
    SET_GPR_U32(ctx, 31, 0x2648ECu);
    ctx->pc = 0x2648E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2648E4u;
    // 0x2648e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254508u, 0x2648E4u, 0x2648ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648ECu;
label_2648ec:
    // 0x2648ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2648ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2648f0:
    // 0x2648f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2648f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2648f4:
    // 0x2648f4: 0xc095128  jal         func_2544A0
label_2648f8:
    if (ctx->pc == 0x2648F8u) {
        ctx->pc = 0x2648F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2648F4u;
        // 0x2648f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2648FCu;
        goto label_2648fc;
    }
    ctx->pc = 0x2648F4u;
    SET_GPR_U32(ctx, 31, 0x2648FCu);
    ctx->pc = 0x2648F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2648F4u;
    // 0x2648f8: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2544A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2544A0u, 0x2648F4u, 0x2648FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2648FCu;
label_2648fc:
    // 0x2648fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2648fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_264900:
    // 0x264900: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264904:
    // 0x264904: 0xc089988  jal         func_226620
label_264908:
    if (ctx->pc == 0x264908u) {
        ctx->pc = 0x264908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264904u;
        // 0x264908: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26490Cu;
        goto label_26490c;
    }
    ctx->pc = 0x264904u;
    SET_GPR_U32(ctx, 31, 0x26490Cu);
    ctx->pc = 0x264908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264904u;
    // 0x264908: 0x3c050100  lui         $a1, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226620u, 0x264904u, 0x26490Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26490Cu;
label_26490c:
    // 0x26490c: 0xc087502  jal         func_21D408
label_264910:
    if (ctx->pc == 0x264910u) {
        ctx->pc = 0x264910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26490Cu;
        // 0x264910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264914u;
        goto label_264914;
    }
    ctx->pc = 0x26490Cu;
    SET_GPR_U32(ctx, 31, 0x264914u);
    ctx->pc = 0x264910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26490Cu;
    // 0x264910: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x26490Cu, 0x264914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264914u;
label_264914:
    // 0x264914: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x264914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_264918:
    // 0x264918: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_26491c:
    if (ctx->pc == 0x26491Cu) {
        ctx->pc = 0x26491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264918u;
        // 0x26491c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x264920u;
        goto label_264920;
    }
    ctx->pc = 0x264918u;
    {
        const bool branch_taken_0x264918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264918u;
        // 0x26491c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264918) {
            ctx->pc = 0x264944u;
            goto label_264944;
        }
    }
    ctx->pc = 0x264920u;
label_264920:
    // 0x264920: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x264920u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_264924:
    // 0x264924: 0xc09ec16  jal         func_27B058
label_264928:
    if (ctx->pc == 0x264928u) {
        ctx->pc = 0x264928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264924u;
        // 0x264928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26492Cu;
        goto label_26492c;
    }
    ctx->pc = 0x264924u;
    SET_GPR_U32(ctx, 31, 0x26492Cu);
    ctx->pc = 0x264928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264924u;
    // 0x264928: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B058u, 0x264924u, 0x26492Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26492Cu;
label_26492c:
    // 0x26492c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26492cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264930:
    // 0x264930: 0xc089b34  jal         func_226CD0
label_264934:
    if (ctx->pc == 0x264934u) {
        ctx->pc = 0x264934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264930u;
        // 0x264934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264938u;
        goto label_264938;
    }
    ctx->pc = 0x264930u;
    SET_GPR_U32(ctx, 31, 0x264938u);
    ctx->pc = 0x264934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264930u;
    // 0x264934: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226CD0u, 0x264930u, 0x264938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264938u;
label_264938:
    // 0x264938: 0xc089b98  jal         func_226E60
label_26493c:
    if (ctx->pc == 0x26493Cu) {
        ctx->pc = 0x26493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264938u;
        // 0x26493c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264940u;
        goto label_264940;
    }
    ctx->pc = 0x264938u;
    SET_GPR_U32(ctx, 31, 0x264940u);
    ctx->pc = 0x26493Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264938u;
    // 0x26493c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226E60u, 0x264938u, 0x264940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264940u;
label_264940:
    // 0x264940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264944:
    // 0x264944: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_264948:
    if (ctx->pc == 0x264948u) {
        ctx->pc = 0x264948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264944u;
        // 0x264948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26494Cu;
        goto label_26494c;
    }
    ctx->pc = 0x264944u;
    {
        const bool branch_taken_0x264944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264944u;
        // 0x264948: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264944) {
            ctx->pc = 0x264964u;
            goto label_264964;
        }
    }
    ctx->pc = 0x26494Cu;
label_26494c:
    // 0x26494c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26494cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_264950:
    // 0x264950: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x264950u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_264954:
    // 0x264954: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x264954u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_264958:
    // 0x264958: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26495c:
    // 0x26495c: 0xc09d872  jal         func_2761C8
label_264960:
    if (ctx->pc == 0x264960u) {
        ctx->pc = 0x264960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26495Cu;
        // 0x264960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264964u;
        goto label_264964;
    }
    ctx->pc = 0x26495Cu;
    SET_GPR_U32(ctx, 31, 0x264964u);
    ctx->pc = 0x264960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26495Cu;
    // 0x264960: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2761C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2761C8u, 0x26495Cu, 0x264964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264964u;
label_264964:
    // 0x264964: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_264968:
    if (ctx->pc == 0x264968u) {
        ctx->pc = 0x264968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264964u;
        // 0x264968: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26496Cu;
        goto label_26496c;
    }
    ctx->pc = 0x264964u;
    {
        const bool branch_taken_0x264964 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x264968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264964u;
        // 0x264968: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264964) {
            ctx->pc = 0x264988u;
            goto label_264988;
        }
    }
    ctx->pc = 0x26496Cu;
label_26496c:
    // 0x26496c: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x26496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_264970:
    // 0x264970: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x264970u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_264974:
    // 0x264974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_264978:
    // 0x264978: 0x8c660054  lw          $a2, 0x54($v1)
    ctx->pc = 0x264978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_26497c:
    // 0x26497c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26497cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_264980:
    // 0x264980: 0xc04159e  jal         func_105678
label_264984:
    if (ctx->pc == 0x264984u) {
        ctx->pc = 0x264984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264980u;
        // 0x264984: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264988u;
        goto label_264988;
    }
    ctx->pc = 0x264980u;
    SET_GPR_U32(ctx, 31, 0x264988u);
    ctx->pc = 0x264984u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264980u;
    // 0x264984: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105678u, 0x264980u, 0x264988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264988u;
label_264988:
    // 0x264988: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x264988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_26498c:
    // 0x26498c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x26498cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_264990:
    // 0x264990: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_264994:
    if (ctx->pc == 0x264994u) {
        ctx->pc = 0x264994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264990u;
        // 0x264994: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264998u;
        goto label_264998;
    }
    ctx->pc = 0x264990u;
    {
        const bool branch_taken_0x264990 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x264994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264990u;
        // 0x264994: 0xac620018  sw          $v0, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264990) {
            ctx->pc = 0x2649D0u;
            goto label_2649d0;
        }
    }
    ctx->pc = 0x264998u;
label_264998:
    // 0x264998: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x264998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26499c:
    // 0x26499c: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x26499cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2649a0:
    // 0x2649a0: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2649a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2649a4:
    // 0x2649a4: 0x40f809  jalr        $v0
label_2649a8:
    if (ctx->pc == 0x2649A8u) {
        ctx->pc = 0x2649A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649A4u;
        // 0x2649a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2649ACu;
        goto label_2649ac;
    }
    ctx->pc = 0x2649A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2649ACu);
        ctx->pc = 0x2649A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649A4u;
        // 0x2649a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2649A4u, 0x2649ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2649ACu;
label_2649ac:
    // 0x2649ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2649acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2649b0:
    // 0x2649b0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2649b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2649b4:
    // 0x2649b4: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2649b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2649b8:
    // 0x2649b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2649b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2649bc:
    // 0x2649bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2649bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2649c0:
    // 0x2649c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2649c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2649c4:
    // 0x2649c4: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2649c4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2649c8:
    // 0x2649c8: 0xc041664  jal         func_105990
label_2649cc:
    if (ctx->pc == 0x2649CCu) {
        ctx->pc = 0x2649CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649C8u;
        // 0x2649cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2649D0u;
        goto label_2649d0;
    }
    ctx->pc = 0x2649C8u;
    SET_GPR_U32(ctx, 31, 0x2649D0u);
    ctx->pc = 0x2649CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2649C8u;
    // 0x2649cc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105990u, 0x2649C8u, 0x2649D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2649D0u;
label_2649d0:
    // 0x2649d0: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_2649d4:
    if (ctx->pc == 0x2649D4u) {
        ctx->pc = 0x2649D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649D0u;
        // 0x2649d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2649D8u;
        goto label_2649d8;
    }
    ctx->pc = 0x2649D0u;
    {
        const bool branch_taken_0x2649d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2649D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649D0u;
        // 0x2649d4: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2649d0) {
            ctx->pc = 0x2649F8u;
            goto label_2649f8;
        }
    }
    ctx->pc = 0x2649D8u;
label_2649d8:
    // 0x2649d8: 0x8e2500d8  lw          $a1, 0xD8($s1)
    ctx->pc = 0x2649d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
label_2649dc:
    // 0x2649dc: 0x8c47bd30  lw          $a3, -0x42D0($v0)
    ctx->pc = 0x2649dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2649e0:
    // 0x2649e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2649e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2649e4:
    // 0x2649e4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x2649e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_2649e8:
    // 0x2649e8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2649e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2649ec:
    // 0x2649ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2649ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2649f0:
    // 0x2649f0: 0xc041b20  jal         func_106C80
label_2649f4:
    if (ctx->pc == 0x2649F4u) {
        ctx->pc = 0x2649F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649F0u;
        // 0x2649f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2649F8u;
        goto label_2649f8;
    }
    ctx->pc = 0x2649F0u;
    SET_GPR_U32(ctx, 31, 0x2649F8u);
    ctx->pc = 0x2649F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2649F0u;
    // 0x2649f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106C80u, 0x2649F0u, 0x2649F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2649F8u;
label_2649f8:
    // 0x2649f8: 0xc05d484  jal         func_175210
label_2649fc:
    if (ctx->pc == 0x2649FCu) {
        ctx->pc = 0x2649FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2649F8u;
        // 0x2649fc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A00u;
        goto label_264a00;
    }
    ctx->pc = 0x2649F8u;
    SET_GPR_U32(ctx, 31, 0x264A00u);
    ctx->pc = 0x2649FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2649F8u;
    // 0x2649fc: 0x8e2400d8  lw          $a0, 0xD8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175210u, 0x2649F8u, 0x264A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A00u;
label_264a00:
    // 0x264a00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x264a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_264a04:
    // 0x264a04: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x264a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_264a08:
    // 0x264a08: 0x8c650084  lw          $a1, 0x84($v1)
    ctx->pc = 0x264a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_264a0c:
    // 0x264a0c: 0xa0f809  jalr        $a1
label_264a10:
    if (ctx->pc == 0x264A10u) {
        ctx->pc = 0x264A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A0Cu;
        // 0x264a10: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A14u;
        goto label_264a14;
    }
    ctx->pc = 0x264A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 5);
        SET_GPR_U32(ctx, 31, 0x264A14u);
        ctx->pc = 0x264A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A0Cu;
        // 0x264a10: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264A0Cu, 0x264A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264A14u;
label_264a14:
    // 0x264a14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264a18:
    // 0x264a18: 0xc087016  jal         func_21C058
label_264a1c:
    if (ctx->pc == 0x264A1Cu) {
        ctx->pc = 0x264A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A18u;
        // 0x264a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A20u;
        goto label_264a20;
    }
    ctx->pc = 0x264A18u;
    SET_GPR_U32(ctx, 31, 0x264A20u);
    ctx->pc = 0x264A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A18u;
    // 0x264a1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21C058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21C058u, 0x264A18u, 0x264A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A20u;
label_264a20:
    // 0x264a20: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_264a24:
    // 0x264a24: 0xc05d53a  jal         func_1754E8
label_264a28:
    if (ctx->pc == 0x264A28u) {
        ctx->pc = 0x264A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A24u;
        // 0x264a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A2Cu;
        goto label_264a2c;
    }
    ctx->pc = 0x264A24u;
    SET_GPR_U32(ctx, 31, 0x264A2Cu);
    ctx->pc = 0x264A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A24u;
    // 0x264a28: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1754E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1754E8u, 0x264A24u, 0x264A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A2Cu;
label_264a2c:
    // 0x264a2c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x264a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_264a30:
    // 0x264a30: 0xc05d4f6  jal         func_1753D8
label_264a34:
    if (ctx->pc == 0x264A34u) {
        ctx->pc = 0x264A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A30u;
        // 0x264a34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A38u;
        goto label_264a38;
    }
    ctx->pc = 0x264A30u;
    SET_GPR_U32(ctx, 31, 0x264A38u);
    ctx->pc = 0x264A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A30u;
    // 0x264a34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1753D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1753D8u, 0x264A30u, 0x264A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A38u;
label_264a38:
    // 0x264a38: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x264a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_264a3c:
    // 0x264a3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x264a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264a40:
    // 0x264a40: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x264a40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_264a44:
    // 0x264a44: 0xac6000b8  sw          $zero, 0xB8($v1)
    ctx->pc = 0x264a44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 184), GPR_U32(ctx, 0));
label_264a48:
    // 0x264a48: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x264a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_264a4c:
    // 0x264a4c: 0xc089990  jal         func_226640
label_264a50:
    if (ctx->pc == 0x264A50u) {
        ctx->pc = 0x264A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A4Cu;
        // 0x264a50: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A54u;
        goto label_264a54;
    }
    ctx->pc = 0x264A4Cu;
    SET_GPR_U32(ctx, 31, 0x264A54u);
    ctx->pc = 0x264A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264A4Cu;
    // 0x264a50: 0xa44000bc  sh          $zero, 0xBC($v0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 2), 188), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226640u, 0x264A4Cu, 0x264A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x264A54u;
label_264a54:
    // 0x264a54: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x264a54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_264a58:
    // 0x264a58: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x264a58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_264a5c:
    // 0x264a5c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x264a5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_264a60:
    // 0x264a60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x264a60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_264a64:
    // 0x264a64: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x264a64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264a68:
    // 0x264a68: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x264a68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264a6c:
    // 0x264a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264a70:
    // 0x264a70: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x264a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_264a74:
    // 0x264a74: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x264a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_264a78:
    // 0x264a78: 0x3e00008  jr          $ra
label_264a7c:
    if (ctx->pc == 0x264A7Cu) {
        ctx->pc = 0x264A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A78u;
        // 0x264a7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264A80u;
        goto label_fallthrough_0x264a78;
    }
    ctx->pc = 0x264A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264A78u;
        // 0x264a7c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x264a78:
    ctx->pc = 0x264A80u;
}
