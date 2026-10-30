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

// Function: sub_004034B8
// Address: 0x4034b8 - 0x4041a8
void sub_004034B8_0x4034b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004034B8_0x4034b8");
#endif

    switch (ctx->pc) {
        case 0x403524u: goto label_403524;
        case 0x403538u: goto label_403538;
        case 0x403548u: goto label_403548;
        case 0x403554u: goto label_403554;
        case 0x40355cu: goto label_40355c;
        case 0x403564u: goto label_403564;
        case 0x403588u: goto label_403588;
        case 0x4035a0u: goto label_4035a0;
        case 0x4035b8u: goto label_4035b8;
        case 0x4035e0u: goto label_4035e0;
        case 0x4035f0u: goto label_4035f0;
        case 0x40371cu: goto label_40371c;
        case 0x40373cu: goto label_40373c;
        case 0x403770u: goto label_403770;
        case 0x4037bcu: goto label_4037bc;
        case 0x4037c8u: goto label_4037c8;
        case 0x4037e8u: goto label_4037e8;
        case 0x403818u: goto label_403818;
        case 0x40384cu: goto label_40384c;
        case 0x40387cu: goto label_40387c;
        case 0x4038b0u: goto label_4038b0;
        case 0x4038e0u: goto label_4038e0;
        case 0x403910u: goto label_403910;
        case 0x403998u: goto label_403998;
        case 0x4039a8u: goto label_4039a8;
        case 0x4039bcu: goto label_4039bc;
        case 0x4039d0u: goto label_4039d0;
        case 0x4039fcu: goto label_4039fc;
        case 0x403a0cu: goto label_403a0c;
        case 0x403a34u: goto label_403a34;
        case 0x403a44u: goto label_403a44;
        case 0x403a58u: goto label_403a58;
        case 0x403a6cu: goto label_403a6c;
        case 0x403a98u: goto label_403a98;
        case 0x403aa8u: goto label_403aa8;
        case 0x403ad0u: goto label_403ad0;
        case 0x403b10u: goto label_403b10;
        case 0x403b1cu: goto label_403b1c;
        case 0x403b30u: goto label_403b30;
        case 0x403b4cu: goto label_403b4c;
        case 0x403b78u: goto label_403b78;
        case 0x403ba8u: goto label_403ba8;
        case 0x403bdcu: goto label_403bdc;
        case 0x403c08u: goto label_403c08;
        case 0x403c18u: goto label_403c18;
        case 0x403c50u: goto label_403c50;
        case 0x403c60u: goto label_403c60;
        case 0x403c88u: goto label_403c88;
        case 0x403cbcu: goto label_403cbc;
        case 0x403d10u: goto label_403d10;
        case 0x403d2cu: goto label_403d2c;
        case 0x403d78u: goto label_403d78;
        case 0x403da8u: goto label_403da8;
        case 0x403ddcu: goto label_403ddc;
        case 0x403e08u: goto label_403e08;
        case 0x403e2cu: goto label_403e2c;
        case 0x403e68u: goto label_403e68;
        case 0x403e78u: goto label_403e78;
        case 0x403e8cu: goto label_403e8c;
        case 0x403ea0u: goto label_403ea0;
        case 0x403ec8u: goto label_403ec8;
        case 0x403ee4u: goto label_403ee4;
        case 0x403ef4u: goto label_403ef4;
        case 0x403f1cu: goto label_403f1c;
        case 0x403f34u: goto label_403f34;
        case 0x403f4cu: goto label_403f4c;
        case 0x403f7cu: goto label_403f7c;
        case 0x403fa0u: goto label_403fa0;
        case 0x403fd8u: goto label_403fd8;
        case 0x403fe8u: goto label_403fe8;
        case 0x403ffcu: goto label_403ffc;
        case 0x404010u: goto label_404010;
        case 0x404038u: goto label_404038;
        case 0x404054u: goto label_404054;
        case 0x404064u: goto label_404064;
        case 0x40408cu: goto label_40408c;
        case 0x4040a0u: goto label_4040a0;
        case 0x4040e0u: goto label_4040e0;
        case 0x4040f8u: goto label_4040f8;
        case 0x404124u: goto label_404124;
        case 0x40414cu: goto label_40414c;
        default: break;
    }

    ctx->pc = 0x4034b8u;

    // 0x4034b8: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x4034b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x4034bc: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x4034bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x4034c0: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x4034c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x4034c4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4034c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034c8: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x4034c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x4034cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4034ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034d0: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x4034d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034d4: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x4034d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
    // 0x4034d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4034d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x4034dc: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x4034dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x4034e0: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x4034e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x4034e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4034e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4034e8: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x4034e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x4034ec: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x4034ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x4034f0: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x4034f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x4034f4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x4034f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x4034f8: 0xe7bd0198  swc1        $f29, 0x198($sp)
    ctx->pc = 0x4034f8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x4034fc: 0xe7bc0190  swc1        $f28, 0x190($sp)
    ctx->pc = 0x4034fcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x403500: 0xe7bb0188  swc1        $f27, 0x188($sp)
    ctx->pc = 0x403500u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x403504: 0xe7ba0180  swc1        $f26, 0x180($sp)
    ctx->pc = 0x403504u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x403508: 0xe7b90178  swc1        $f25, 0x178($sp)
    ctx->pc = 0x403508u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
    // 0x40350c: 0xe7b80170  swc1        $f24, 0x170($sp)
    ctx->pc = 0x40350cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x403510: 0xe7b70168  swc1        $f23, 0x168($sp)
    ctx->pc = 0x403510u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x403514: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x403514u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x403518: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x403518u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x40351c: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x40351Cu;
    SET_GPR_U32(ctx, 31, 0x403524u);
    ctx->pc = 0x403520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40351Cu;
    // 0x403520: 0xe7b40150  swc1        $f20, 0x150($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x40351Cu, 0x403524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403524u;
label_403524:
    // 0x403524: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x403524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x403528: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x403528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x40352c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40352cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403530: 0xc0ea12a  jal         func_3A84A8
    ctx->pc = 0x403530u;
    SET_GPR_U32(ctx, 31, 0x403538u);
    ctx->pc = 0x403534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403530u;
    // 0x403534: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x403530u, 0x403538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403538u;
label_403538:
    // 0x403538: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x403538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40353c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40353cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403540: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x403540u;
    SET_GPR_U32(ctx, 31, 0x403548u);
    ctx->pc = 0x403544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403540u;
    // 0x403544: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x403540u, 0x403548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403548u;
label_403548:
    // 0x403548: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40354c: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x40354Cu;
    SET_GPR_U32(ctx, 31, 0x403554u);
    ctx->pc = 0x403550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40354Cu;
    // 0x403550: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x40354Cu, 0x403554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403554u;
label_403554:
    // 0x403554: 0xc0ea14c  jal         func_3A8530
    ctx->pc = 0x403554u;
    SET_GPR_U32(ctx, 31, 0x40355Cu);
    ctx->pc = 0x403558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403554u;
    // 0x403558: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x403554u, 0x40355Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40355Cu;
label_40355c:
    // 0x40355c: 0xc0ea14c  jal         func_3A8530
    ctx->pc = 0x40355Cu;
    SET_GPR_U32(ctx, 31, 0x403564u);
    ctx->pc = 0x403560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40355Cu;
    // 0x403560: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x40355Cu, 0x403564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403564u;
label_403564:
    // 0x403564: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x403564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x403568: 0x13c30002  beq         $fp, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x403568u;
    {
        const bool branch_taken_0x403568 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 3));
        ctx->pc = 0x40356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403568u;
        // 0x40356c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403568) {
            ctx->pc = 0x403574u;
            goto label_403574;
        }
    }
    ctx->pc = 0x403570u;
    // 0x403570: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x403570u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_403574:
    // 0x403574: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x403574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x403578: 0x17c0000b  bnez        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x403578u;
    {
        const bool branch_taken_0x403578 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x40357Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403578u;
        // 0x40357c: 0x7ec20010  sq          $v0, 0x10($s6) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 22), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403578) {
            ctx->pc = 0x4035A8u;
            goto label_4035a8;
        }
    }
    ctx->pc = 0x403580u;
    // 0x403580: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x403580u;
    SET_GPR_U32(ctx, 31, 0x403588u);
    ctx->pc = 0x403584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403580u;
    // 0x403584: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x403580u, 0x403588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403588u;
label_403588:
    // 0x403588: 0x104002f1  beqz        $v0, . + 4 + (0x2F1 << 2)
    ctx->pc = 0x403588u;
    {
        const bool branch_taken_0x403588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403588u;
        // 0x40358c: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403588) {
            ctx->pc = 0x404150u;
            goto label_404150;
        }
    }
    ctx->pc = 0x403590u;
    // 0x403590: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x403590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x403594: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403594u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403598: 0xc0e947e  jal         func_3A51F8
    ctx->pc = 0x403598u;
    SET_GPR_U32(ctx, 31, 0x4035A0u);
    ctx->pc = 0x40359Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403598u;
    // 0x40359c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A51F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A51F8u, 0x403598u, 0x4035A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035A0u;
label_4035a0:
    // 0x4035a0: 0x104002eb  beqz        $v0, . + 4 + (0x2EB << 2)
    ctx->pc = 0x4035A0u;
    {
        const bool branch_taken_0x4035a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4035A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4035A0u;
        // 0x4035a4: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4035a0) {
            ctx->pc = 0x404150u;
            goto label_404150;
        }
    }
    ctx->pc = 0x4035A8u;
label_4035a8:
    // 0x4035a8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x4035a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4035ac: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4035acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4035b0: 0xc0e92f4  jal         func_3A4BD0
    ctx->pc = 0x4035B0u;
    SET_GPR_U32(ctx, 31, 0x4035B8u);
    ctx->pc = 0x4035B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4035B0u;
    // 0x4035b4: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4BD0u, 0x4035B0u, 0x4035B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035B8u;
label_4035b8:
    // 0x4035b8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x4035b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4035bc: 0x27b00070  addiu       $s0, $sp, 0x70
    ctx->pc = 0x4035bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x4035c0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x4035c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x4035c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4035c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x4035c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x4035c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4035cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4035ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4035d0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4035d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x4035d4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4035d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4035d8: 0xc0e90ca  jal         func_3A4328
    ctx->pc = 0x4035D8u;
    SET_GPR_U32(ctx, 31, 0x4035E0u);
    ctx->pc = 0x4035DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4035D8u;
    // 0x4035dc: 0xe6c000d4  swc1        $f0, 0xD4($s6) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4328u, 0x4035D8u, 0x4035E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035E0u;
label_4035e0:
    // 0x4035e0: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x4035e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x4035e4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4035e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x4035e8: 0xc136afa  jal         func_4DABE8
    ctx->pc = 0x4035E8u;
    SET_GPR_U32(ctx, 31, 0x4035F0u);
    ctx->pc = 0x4035ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4035E8u;
    // 0x4035ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DABE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DABE8u, 0x4035E8u, 0x4035F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4035F0u;
label_4035f0:
    // 0x4035f0: 0x7ba30080  lq          $v1, 0x80($sp)
    ctx->pc = 0x4035f0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4035f4: 0x3c04ade9  lui         $a0, 0xADE9
    ctx->pc = 0x4035f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44521 << 16));
    // 0x4035f8: 0x8ed100c4  lw          $s1, 0xC4($s6)
    ctx->pc = 0x4035f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 196)));
    // 0x4035fc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x4035fcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x403600: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x403600u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x403604: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x403604u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x403608: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x403608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x40360c: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x40360cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x403610: 0x4a0003bf  vwaitq
    ctx->pc = 0x403610u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x403614: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x403614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x403618: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x403618u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x40361c: 0x3484cd66  ori         $a0, $a0, 0xCD66
    ctx->pc = 0x40361cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52582);
    // 0x403620: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x403620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x403624: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x403624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x403628: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x403628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x40362c: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x40362cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x403630: 0x12240029  beq         $s1, $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x403630u;
    {
        const bool branch_taken_0x403630 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 4));
        ctx->pc = 0x403634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403630u;
        // 0x403634: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403630) {
            ctx->pc = 0x4036D8u;
            goto label_4036d8;
        }
    }
    ctx->pc = 0x403638u;
    // 0x403638: 0x3c02eafc  lui         $v0, 0xEAFC
    ctx->pc = 0x403638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60156 << 16));
    // 0x40363c: 0x34427fa6  ori         $v0, $v0, 0x7FA6
    ctx->pc = 0x40363cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32678);
    // 0x403640: 0x12220026  beq         $s1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x403640u;
    {
        const bool branch_taken_0x403640 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403640u;
        // 0x403644: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403640) {
            ctx->pc = 0x4036DCu;
            goto label_4036dc;
        }
    }
    ctx->pc = 0x403648u;
    // 0x403648: 0x3c02f777  lui         $v0, 0xF777
    ctx->pc = 0x403648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63351 << 16));
    // 0x40364c: 0x344211ed  ori         $v0, $v0, 0x11ED
    ctx->pc = 0x40364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4589);
    // 0x403650: 0x12220022  beq         $s1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x403650u;
    {
        const bool branch_taken_0x403650 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403650u;
        // 0x403654: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403650) {
            ctx->pc = 0x4036DCu;
            goto label_4036dc;
        }
    }
    ctx->pc = 0x403658u;
    // 0x403658: 0x3c02f29f  lui         $v0, 0xF29F
    ctx->pc = 0x403658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)62111 << 16));
    // 0x40365c: 0x344215db  ori         $v0, $v0, 0x15DB
    ctx->pc = 0x40365cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5595);
    // 0x403660: 0x1222001d  beq         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x403660u;
    {
        const bool branch_taken_0x403660 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403660u;
        // 0x403664: 0x3c0231a7  lui         $v0, 0x31A7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12711 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403660) {
            ctx->pc = 0x4036D8u;
            goto label_4036d8;
        }
    }
    ctx->pc = 0x403668u;
    // 0x403668: 0x3442dd7a  ori         $v0, $v0, 0xDD7A
    ctx->pc = 0x403668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56698);
    // 0x40366c: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x40366Cu;
    {
        const bool branch_taken_0x40366c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40366Cu;
        // 0x403670: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40366c) {
            ctx->pc = 0x4036DCu;
            goto label_4036dc;
        }
    }
    ctx->pc = 0x403674u;
    // 0x403674: 0x3c02a8ae  lui         $v0, 0xA8AE
    ctx->pc = 0x403674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43182 << 16));
    // 0x403678: 0x34428cc0  ori         $v0, $v0, 0x8CC0
    ctx->pc = 0x403678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36032);
    // 0x40367c: 0x12220017  beq         $s1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x40367Cu;
    {
        const bool branch_taken_0x40367c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40367Cu;
        // 0x403680: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40367c) {
            ctx->pc = 0x4036DCu;
            goto label_4036dc;
        }
    }
    ctx->pc = 0x403684u;
    // 0x403684: 0x3c02dfa9  lui         $v0, 0xDFA9
    ctx->pc = 0x403684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57257 << 16));
    // 0x403688: 0x3442bc56  ori         $v0, $v0, 0xBC56
    ctx->pc = 0x403688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)48214);
    // 0x40368c: 0x12220013  beq         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x40368Cu;
    {
        const bool branch_taken_0x40368c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40368Cu;
        // 0x403690: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40368c) {
            ctx->pc = 0x4036DCu;
            goto label_4036dc;
        }
    }
    ctx->pc = 0x403694u;
    // 0x403694: 0x3c02c07d  lui         $v0, 0xC07D
    ctx->pc = 0x403694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49277 << 16));
    // 0x403698: 0x3442850e  ori         $v0, $v0, 0x850E
    ctx->pc = 0x403698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34062);
    // 0x40369c: 0x1222000f  beq         $s1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x40369Cu;
    {
        const bool branch_taken_0x40369c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4036A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40369Cu;
        // 0x4036a0: 0x7ba20020  lq          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40369c) {
            ctx->pc = 0x4036DCu;
            goto label_4036dc;
        }
    }
    ctx->pc = 0x4036A4u;
    // 0x4036a4: 0x3c02cf3c  lui         $v0, 0xCF3C
    ctx->pc = 0x4036a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53052 << 16));
    // 0x4036a8: 0x3442e42e  ori         $v0, $v0, 0xE42E
    ctx->pc = 0x4036a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58414);
    // 0x4036ac: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x4036ACu;
    {
        const bool branch_taken_0x4036ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4036B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036ACu;
        // 0x4036b0: 0x3c0217c3  lui         $v0, 0x17C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6083 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4036ac) {
            ctx->pc = 0x4036D8u;
            goto label_4036d8;
        }
    }
    ctx->pc = 0x4036B4u;
    // 0x4036b4: 0x34429130  ori         $v0, $v0, 0x9130
    ctx->pc = 0x4036b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37168);
    // 0x4036b8: 0x12220007  beq         $s1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4036B8u;
    {
        const bool branch_taken_0x4036b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4036BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036B8u;
        // 0x4036bc: 0x3c025063  lui         $v0, 0x5063 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20579 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4036b8) {
            ctx->pc = 0x4036D8u;
            goto label_4036d8;
        }
    }
    ctx->pc = 0x4036C0u;
    // 0x4036c0: 0x3442ebe0  ori         $v0, $v0, 0xEBE0
    ctx->pc = 0x4036c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)60384);
    // 0x4036c4: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4036C4u;
    {
        const bool branch_taken_0x4036c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4036C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4036C4u;
        // 0x4036c8: 0x3c026d03  lui         $v0, 0x6D03 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27907 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4036c4) {
            ctx->pc = 0x4036D8u;
            goto label_4036d8;
        }
    }
    ctx->pc = 0x4036CCu;
    // 0x4036cc: 0x3442c250  ori         $v0, $v0, 0xC250
    ctx->pc = 0x4036ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49744);
    // 0x4036d0: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4036D0u;
    {
        const bool branch_taken_0x4036d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4036d0) {
            ctx->pc = 0x403724u;
            goto label_403724;
        }
    }
    ctx->pc = 0x4036D8u;
label_4036d8:
    // 0x4036d8: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x4036d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4036dc:
    // 0x4036dc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4036dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4036e0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x4036e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x4036e4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x4036e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4036e8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x4036e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4036ec: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x4036ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x4036f0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x4036f0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x4036f4: 0x4a0003bf  vwaitq
    ctx->pc = 0x4036f4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x4036f8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x4036f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x4036fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x4036fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x403700: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x403700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x403704: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x403704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x403708: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x403708u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40370c: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x40370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x403710: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x403710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x403714: 0xc0e9bda  jal         func_3A6F68
    ctx->pc = 0x403714u;
    SET_GPR_U32(ctx, 31, 0x40371Cu);
    ctx->pc = 0x403718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403714u;
    // 0x403718: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6F68u, 0x403714u, 0x40371Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40371Cu;
label_40371c:
    // 0x40371c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x40371Cu;
    {
        const bool branch_taken_0x40371c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40371Cu;
        // 0x403720: 0x3c023ac2  lui         $v0, 0x3AC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15042 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40371c) {
            ctx->pc = 0x4037ECu;
            goto label_4037ec;
        }
    }
    ctx->pc = 0x403724u;
label_403724:
    // 0x403724: 0x3c02bdba  lui         $v0, 0xBDBA
    ctx->pc = 0x403724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48570 << 16));
    // 0x403728: 0x3442351e  ori         $v0, $v0, 0x351E
    ctx->pc = 0x403728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13598);
    // 0x40372c: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40372Cu;
    {
        const bool branch_taken_0x40372c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40372Cu;
        // 0x403730: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40372c) {
            ctx->pc = 0x403744u;
            goto label_403744;
        }
    }
    ctx->pc = 0x403734u;
    // 0x403734: 0xc0f175c  jal         func_3C5D70
    ctx->pc = 0x403734u;
    SET_GPR_U32(ctx, 31, 0x40373Cu);
    ctx->pc = 0x403738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403734u;
    // 0x403738: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5D70u, 0x403734u, 0x40373Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40373Cu;
label_40373c:
    // 0x40373c: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x40373Cu;
    {
        const bool branch_taken_0x40373c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x403740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40373Cu;
        // 0x403740: 0x3c023ac2  lui         $v0, 0x3AC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15042 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40373c) {
            ctx->pc = 0x4037ECu;
            goto label_4037ec;
        }
    }
    ctx->pc = 0x403744u;
label_403744:
    // 0x403744: 0x3c02ba45  lui         $v0, 0xBA45
    ctx->pc = 0x403744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)47685 << 16));
    // 0x403748: 0x34421c62  ori         $v0, $v0, 0x1C62
    ctx->pc = 0x403748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7266);
    // 0x40374c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40374Cu;
    {
        const bool branch_taken_0x40374c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40374Cu;
        // 0x403750: 0x3c020421  lui         $v0, 0x421 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1057 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40374c) {
            ctx->pc = 0x403760u;
            goto label_403760;
        }
    }
    ctx->pc = 0x403754u;
    // 0x403754: 0x3442d9f1  ori         $v0, $v0, 0xD9F1
    ctx->pc = 0x403754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55793);
    // 0x403758: 0x1622001d  bne         $s1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x403758u;
    {
        const bool branch_taken_0x403758 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x40375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403758u;
        // 0x40375c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403758) {
            ctx->pc = 0x4037D0u;
            goto label_4037d0;
        }
    }
    ctx->pc = 0x403760u;
label_403760:
    // 0x403760: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x403760u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x403764: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x403764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x403768: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x403768u;
    SET_GPR_U32(ctx, 31, 0x403770u);
    ctx->pc = 0x40376Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403768u;
    // 0x40376c: 0x2484b8b8  addiu       $a0, $a0, -0x4748 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403768u, 0x403770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403770u;
label_403770:
    // 0x403770: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x403770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x403774: 0x3c08bcc4  lui         $t0, 0xBCC4
    ctx->pc = 0x403774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)48324 << 16));
    // 0x403778: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x403778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x40377c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40377cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403780: 0x2445000a  addiu       $a1, $v0, 0xA
    ctx->pc = 0x403780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x403784: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x403784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x403788: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x403788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x40378c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403790: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x403790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x403794: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x403794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403798: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x403798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x40379c: 0x34c60018  ori         $a2, $a2, 0x18
    ctx->pc = 0x40379cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24);
    // 0x4037a0: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x4037a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x4037a4: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x4037a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x4037a8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x4037a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x4037ac: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x4037acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x4037b0: 0x3508beff  ori         $t0, $t0, 0xBEFF
    ctx->pc = 0x4037b0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)48895);
    // 0x4037b4: 0xc0e97ec  jal         func_3A5FB0
    ctx->pc = 0x4037B4u;
    SET_GPR_U32(ctx, 31, 0x4037BCu);
    ctx->pc = 0x4037B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4037B4u;
    // 0x4037b8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5FB0u, 0x4037B4u, 0x4037BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4037BCu;
label_4037bc:
    // 0x4037bc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4037bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4037c0: 0xc0f175c  jal         func_3C5D70
    ctx->pc = 0x4037C0u;
    SET_GPR_U32(ctx, 31, 0x4037C8u);
    ctx->pc = 0x4037C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4037C0u;
    // 0x4037c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5D70u, 0x4037C0u, 0x4037C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4037C8u;
label_4037c8:
    // 0x4037c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4037C8u;
    {
        const bool branch_taken_0x4037c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4037CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037C8u;
        // 0x4037cc: 0x3c023ac2  lui         $v0, 0x3AC2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15042 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4037c8) {
            ctx->pc = 0x4037ECu;
            goto label_4037ec;
        }
    }
    ctx->pc = 0x4037D0u;
label_4037d0:
    // 0x4037d0: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x4037d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x4037d4: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x4037d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x4037d8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x4037d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x4037dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4037dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4037e0: 0xc0f15f6  jal         func_3C57D8
    ctx->pc = 0x4037E0u;
    SET_GPR_U32(ctx, 31, 0x4037E8u);
    ctx->pc = 0x4037E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4037E0u;
    // 0x4037e4: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x4037E0u, 0x4037E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4037E8u;
label_4037e8:
    // 0x4037e8: 0x3c023ac2  lui         $v0, 0x3AC2
    ctx->pc = 0x4037e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15042 << 16));
label_4037ec:
    // 0x4037ec: 0x3442d3a7  ori         $v0, $v0, 0xD3A7
    ctx->pc = 0x4037ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54183);
    // 0x4037f0: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4037F0u;
    {
        const bool branch_taken_0x4037f0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4037F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4037F0u;
        // 0x4037f4: 0x3c067320  lui         $a2, 0x7320 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29472 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4037f0) {
            ctx->pc = 0x403818u;
            goto label_403818;
        }
    }
    ctx->pc = 0x4037F8u;
    // 0x4037f8: 0x3c07366b  lui         $a3, 0x366B
    ctx->pc = 0x4037f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)13931 << 16));
    // 0x4037fc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4037fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403800: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403804: 0x34c62390  ori         $a2, $a2, 0x2390
    ctx->pc = 0x403804u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9104);
    // 0x403808: 0x34e74290  ori         $a3, $a3, 0x4290
    ctx->pc = 0x403808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)17040);
    // 0x40380c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x40380cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403810: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x403810u;
    SET_GPR_U32(ctx, 31, 0x403818u);
    ctx->pc = 0x403814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403810u;
    // 0x403814: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x403810u, 0x403818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403818u;
label_403818:
    // 0x403818: 0x3c02ec12  lui         $v0, 0xEC12
    ctx->pc = 0x403818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60434 << 16));
    // 0x40381c: 0x3442a5d0  ori         $v0, $v0, 0xA5D0
    ctx->pc = 0x40381cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)42448);
    // 0x403820: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x403820u;
    {
        const bool branch_taken_0x403820 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403820u;
        // 0x403824: 0x3c0205a5  lui         $v0, 0x5A5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1445 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403820) {
            ctx->pc = 0x403850u;
            goto label_403850;
        }
    }
    ctx->pc = 0x403828u;
    // 0x403828: 0x3c067d71  lui         $a2, 0x7D71
    ctx->pc = 0x403828u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32113 << 16));
    // 0x40382c: 0x3c07342d  lui         $a3, 0x342D
    ctx->pc = 0x40382cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)13357 << 16));
    // 0x403830: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403834: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403838: 0x34c676ff  ori         $a2, $a2, 0x76FF
    ctx->pc = 0x403838u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30463);
    // 0x40383c: 0x34e725ff  ori         $a3, $a3, 0x25FF
    ctx->pc = 0x40383cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9727);
    // 0x403840: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x403840u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403844: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x403844u;
    SET_GPR_U32(ctx, 31, 0x40384Cu);
    ctx->pc = 0x403848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403844u;
    // 0x403848: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x403844u, 0x40384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40384Cu;
label_40384c:
    // 0x40384c: 0x3c0205a5  lui         $v0, 0x5A5
    ctx->pc = 0x40384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1445 << 16));
label_403850:
    // 0x403850: 0x344265c9  ori         $v0, $v0, 0x65C9
    ctx->pc = 0x403850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26057);
    // 0x403854: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x403854u;
    {
        const bool branch_taken_0x403854 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403854u;
        // 0x403858: 0x3c061f10  lui         $a2, 0x1F10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)7952 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403854) {
            ctx->pc = 0x40387Cu;
            goto label_40387c;
        }
    }
    ctx->pc = 0x40385Cu;
    // 0x40385c: 0x3c071f10  lui         $a3, 0x1F10
    ctx->pc = 0x40385cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)7952 << 16));
    // 0x403860: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403864: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403868: 0x34c60fff  ori         $a2, $a2, 0xFFF
    ctx->pc = 0x403868u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4095);
    // 0x40386c: 0x34e724ff  ori         $a3, $a3, 0x24FF
    ctx->pc = 0x40386cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)9471);
    // 0x403870: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x403870u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403874: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x403874u;
    SET_GPR_U32(ctx, 31, 0x40387Cu);
    ctx->pc = 0x403878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403874u;
    // 0x403878: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x403874u, 0x40387Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40387Cu;
label_40387c:
    // 0x40387c: 0x3c029476  lui         $v0, 0x9476
    ctx->pc = 0x40387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38006 << 16));
    // 0x403880: 0x3442d3c2  ori         $v0, $v0, 0xD3C2
    ctx->pc = 0x403880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54210);
    // 0x403884: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x403884u;
    {
        const bool branch_taken_0x403884 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403884u;
        // 0x403888: 0x3c02787d  lui         $v0, 0x787D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30845 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403884) {
            ctx->pc = 0x4038B4u;
            goto label_4038b4;
        }
    }
    ctx->pc = 0x40388Cu;
    // 0x40388c: 0x3c069287  lui         $a2, 0x9287
    ctx->pc = 0x40388cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37511 << 16));
    // 0x403890: 0x3c07cbc1  lui         $a3, 0xCBC1
    ctx->pc = 0x403890u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52161 << 16));
    // 0x403894: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403898: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403898u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40389c: 0x34c676ff  ori         $a2, $a2, 0x76FF
    ctx->pc = 0x40389cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)30463);
    // 0x4038a0: 0x34e7aeff  ori         $a3, $a3, 0xAEFF
    ctx->pc = 0x4038a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)44799);
    // 0x4038a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4038a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038a8: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x4038A8u;
    SET_GPR_U32(ctx, 31, 0x4038B0u);
    ctx->pc = 0x4038ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4038A8u;
    // 0x4038ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x4038A8u, 0x4038B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4038B0u;
label_4038b0:
    // 0x4038b0: 0x3c02787d  lui         $v0, 0x787D
    ctx->pc = 0x4038b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30845 << 16));
label_4038b4:
    // 0x4038b4: 0x344220aa  ori         $v0, $v0, 0x20AA
    ctx->pc = 0x4038b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8362);
    // 0x4038b8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4038B8u;
    {
        const bool branch_taken_0x4038b8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4038BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4038B8u;
        // 0x4038bc: 0x3c06577c  lui         $a2, 0x577C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22396 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4038b8) {
            ctx->pc = 0x4038E0u;
            goto label_4038e0;
        }
    }
    ctx->pc = 0x4038C0u;
    // 0x4038c0: 0x3c074968  lui         $a3, 0x4968
    ctx->pc = 0x4038c0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)18792 << 16));
    // 0x4038c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4038c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038c8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4038c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038cc: 0x34c624ff  ori         $a2, $a2, 0x24FF
    ctx->pc = 0x4038ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)9471);
    // 0x4038d0: 0x34e71aff  ori         $a3, $a3, 0x1AFF
    ctx->pc = 0x4038d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)6911);
    // 0x4038d4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4038d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038d8: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x4038D8u;
    SET_GPR_U32(ctx, 31, 0x4038E0u);
    ctx->pc = 0x4038DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4038D8u;
    // 0x4038dc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x4038D8u, 0x4038E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4038E0u;
label_4038e0:
    // 0x4038e0: 0x3c029051  lui         $v0, 0x9051
    ctx->pc = 0x4038e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36945 << 16));
    // 0x4038e4: 0x34423fe7  ori         $v0, $v0, 0x3FE7
    ctx->pc = 0x4038e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16359);
    // 0x4038e8: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4038E8u;
    {
        const bool branch_taken_0x4038e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4038ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4038E8u;
        // 0x4038ec: 0x3c066971  lui         $a2, 0x6971 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26993 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4038e8) {
            ctx->pc = 0x403910u;
            goto label_403910;
        }
    }
    ctx->pc = 0x4038F0u;
    // 0x4038f0: 0x3c079fa1  lui         $a3, 0x9FA1
    ctx->pc = 0x4038f0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40865 << 16));
    // 0x4038f4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4038f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4038f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4038fc: 0x34c670ff  ori         $a2, $a2, 0x70FF
    ctx->pc = 0x4038fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)28927);
    // 0x403900: 0x34e7aaff  ori         $a3, $a3, 0xAAFF
    ctx->pc = 0x403900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)43775);
    // 0x403904: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x403904u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403908: 0xc0e9978  jal         func_3A65E0
    ctx->pc = 0x403908u;
    SET_GPR_U32(ctx, 31, 0x403910u);
    ctx->pc = 0x40390Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403908u;
    // 0x40390c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A65E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A65E0u, 0x403908u, 0x403910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403910u;
label_403910:
    // 0x403910: 0x3c02d456  lui         $v0, 0xD456
    ctx->pc = 0x403910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54358 << 16));
    // 0x403914: 0x3442144b  ori         $v0, $v0, 0x144B
    ctx->pc = 0x403914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5195);
    // 0x403918: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x403918u;
    {
        const bool branch_taken_0x403918 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x40391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403918u;
        // 0x40391c: 0x3c022538  lui         $v0, 0x2538 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9528 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403918) {
            ctx->pc = 0x40392Cu;
            goto label_40392c;
        }
    }
    ctx->pc = 0x403920u;
    // 0x403920: 0x344245de  ori         $v0, $v0, 0x45DE
    ctx->pc = 0x403920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17886);
    // 0x403924: 0x1622006d  bne         $s1, $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x403924u;
    {
        const bool branch_taken_0x403924 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403924u;
        // 0x403928: 0x3c022266  lui         $v0, 0x2266 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8806 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403924) {
            ctx->pc = 0x403ADCu;
            goto label_403adc;
        }
    }
    ctx->pc = 0x40392Cu;
label_40392c:
    // 0x40392c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x40392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x403930: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x403930u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x403934: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x403934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x403938: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x403938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x40393c: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x40393cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x403940: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x403940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x403944: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x403944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x403948: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x403948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x40394c: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x40394cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x403950: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x403950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
    // 0x403954: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x403954u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x403958: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x403958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x40395c: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x40395cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x403960: 0x3673001b  ori         $s3, $s3, 0x1B
    ctx->pc = 0x403960u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)27);
    // 0x403964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x403964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x403968: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x403968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x40396c: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x40396cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403970: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x403970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x403974: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x403974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x403978: 0x4481d000  mtc1        $at, $f26
    ctx->pc = 0x403978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
    // 0x40397c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x40397cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x403980: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x403980u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x403984: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x403984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
    // 0x403988: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x403988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x40398c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x40398cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403990: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x403990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x403994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_403998:
    // 0x403998: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403998u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x40399c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x40399cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x4039a0: 0xc0cd518  jal         func_335460
    ctx->pc = 0x4039A0u;
    SET_GPR_U32(ctx, 31, 0x4039A8u);
    ctx->pc = 0x4039A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4039A0u;
    // 0x4039a4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4039A0u, 0x4039A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4039A8u;
label_4039a8:
    // 0x4039a8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4039a8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x4039ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4039acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4039b0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x4039b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x4039b4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x4039B4u;
    SET_GPR_U32(ctx, 31, 0x4039BCu);
    ctx->pc = 0x4039B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4039B4u;
    // 0x4039b8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4039B4u, 0x4039BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4039BCu;
label_4039bc:
    // 0x4039bc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4039bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x4039c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4039c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4039c4: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x4039c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x4039c8: 0xc0cd518  jal         func_335460
    ctx->pc = 0x4039C8u;
    SET_GPR_U32(ctx, 31, 0x4039D0u);
    ctx->pc = 0x4039CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4039C8u;
    // 0x4039cc: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4039C8u, 0x4039D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4039D0u;
label_4039d0:
    // 0x4039d0: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x4039d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x4039d4: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x4039d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x4039d8: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x4039d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x4039dc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x4039dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x4039e0: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x4039e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x4039e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4039e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4039e8: 0xe6bb000c  swc1        $f27, 0xC($s5)
    ctx->pc = 0x4039e8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x4039ec: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4039ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4039f0: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x4039f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x4039f4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x4039F4u;
    SET_GPR_U32(ctx, 31, 0x4039FCu);
    ctx->pc = 0x4039F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4039F4u;
    // 0x4039f8: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x4039F4u, 0x4039FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4039FCu;
label_4039fc:
    // 0x4039fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x4039fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x403a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a04: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x403A04u;
    SET_GPR_U32(ctx, 31, 0x403A0Cu);
    ctx->pc = 0x403A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A04u;
    // 0x403a08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403A04u, 0x403A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A0Cu;
label_403a0c:
    // 0x403a0c: 0x3c07c3a0  lui         $a3, 0xC3A0
    ctx->pc = 0x403a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)50080 << 16));
    // 0x403a10: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x403a10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x403a14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x403a14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a18: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x403a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x403a1c: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x403a1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x403a20: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x403a20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a24: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x403a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a28: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x403a28u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x403a2c: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x403A2Cu;
    SET_GPR_U32(ctx, 31, 0x403A34u);
    ctx->pc = 0x403A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A2Cu;
    // 0x403a30: 0x4600d306  mov.s       $f12, $f26 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x403A2Cu, 0x403A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A34u;
label_403a34:
    // 0x403a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a38: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403a38u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403a3c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403A3Cu;
    SET_GPR_U32(ctx, 31, 0x403A44u);
    ctx->pc = 0x403A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A3Cu;
    // 0x403a40: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403A3Cu, 0x403A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A44u;
label_403a44:
    // 0x403a44: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x403a44u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x403a48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a4c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403a50: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403A50u;
    SET_GPR_U32(ctx, 31, 0x403A58u);
    ctx->pc = 0x403A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A50u;
    // 0x403a54: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403A50u, 0x403A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A58u;
label_403a58:
    // 0x403a58: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x403a58u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x403a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a60: 0x4600eb06  mov.s       $f12, $f29
    ctx->pc = 0x403a60u;
    ctx->f[12] = FPU_MOV_S(ctx->f[29]);
    // 0x403a64: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403A64u;
    SET_GPR_U32(ctx, 31, 0x403A6Cu);
    ctx->pc = 0x403A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A64u;
    // 0x403a68: 0x4600e346  mov.s       $f13, $f28 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[28]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403A64u, 0x403A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A6Cu;
label_403a6c:
    // 0x403a6c: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x403a6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x403a70: 0x4600cb06  mov.s       $f12, $f25
    ctx->pc = 0x403a70u;
    ctx->f[12] = FPU_MOV_S(ctx->f[25]);
    // 0x403a74: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x403a74u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x403a78: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x403a78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x403a7c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x403a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x403a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403a84: 0xe6bb000c  swc1        $f27, 0xC($s5)
    ctx->pc = 0x403a84u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x403a88: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x403a88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403a8c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x403a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x403a90: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403A90u;
    SET_GPR_U32(ctx, 31, 0x403A98u);
    ctx->pc = 0x403A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403A90u;
    // 0x403a94: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403A90u, 0x403A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403A98u;
label_403a98:
    // 0x403a98: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x403a98u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x403a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403aa0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x403AA0u;
    SET_GPR_U32(ctx, 31, 0x403AA8u);
    ctx->pc = 0x403AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403AA0u;
    // 0x403aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403AA0u, 0x403AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403AA8u;
label_403aa8:
    // 0x403aa8: 0x3c07715d  lui         $a3, 0x715D
    ctx->pc = 0x403aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)29021 << 16));
    // 0x403aac: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x403aacu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x403ab0: 0x534021  addu        $t0, $v0, $s3
    ctx->pc = 0x403ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x403ab4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x403ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ab8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x403ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403abc: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x403abcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x403ac0: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x403ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x403ac4: 0x34e746ff  ori         $a3, $a3, 0x46FF
    ctx->pc = 0x403ac4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)18175);
    // 0x403ac8: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x403AC8u;
    SET_GPR_U32(ctx, 31, 0x403AD0u);
    ctx->pc = 0x403ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403AC8u;
    // 0x403acc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x403AC8u, 0x403AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403AD0u;
label_403ad0:
    // 0x403ad0: 0x641ffb1  bgez        $s2, . + 4 + (-0x4F << 2)
    ctx->pc = 0x403AD0u;
    {
        const bool branch_taken_0x403ad0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x403AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AD0u;
        // 0x403ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ad0) {
            ctx->pc = 0x403998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403998;
        }
    }
    ctx->pc = 0x403AD8u;
    // 0x403ad8: 0x3c022266  lui         $v0, 0x2266
    ctx->pc = 0x403ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8806 << 16));
label_403adc:
    // 0x403adc: 0x344268e4  ori         $v0, $v0, 0x68E4
    ctx->pc = 0x403adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26852);
    // 0x403ae0: 0x1622007b  bne         $s1, $v0, . + 4 + (0x7B << 2)
    ctx->pc = 0x403AE0u;
    {
        const bool branch_taken_0x403ae0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403AE0u;
        // 0x403ae4: 0x3c025e39  lui         $v0, 0x5E39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24121 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403ae0) {
            ctx->pc = 0x403CD0u;
            goto label_403cd0;
        }
    }
    ctx->pc = 0x403AE8u;
    // 0x403ae8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x403aec: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x403aecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x403af0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x403af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x403af4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x403af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x403af8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x403af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x403afc: 0x2453b8b8  addiu       $s3, $v0, -0x4748
    ctx->pc = 0x403afcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x403b00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x403b00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b04: 0x27b50060  addiu       $s5, $sp, 0x60
    ctx->pc = 0x403b04u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x403b08: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x403b08u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x403b0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x403b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_403b10:
    // 0x403b10: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403b10u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403b14: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403B14u;
    SET_GPR_U32(ctx, 31, 0x403B1Cu);
    ctx->pc = 0x403B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403B14u;
    // 0x403b18: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403B14u, 0x403B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403B1Cu;
label_403b1c:
    // 0x403b1c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x403b1cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x403b20: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x403b20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b24: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403b24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403b28: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403B28u;
    SET_GPR_U32(ctx, 31, 0x403B30u);
    ctx->pc = 0x403B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403B28u;
    // 0x403b2c: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403B28u, 0x403B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403B30u;
label_403b30:
    // 0x403b30: 0x3c01be80  lui         $at, 0xBE80
    ctx->pc = 0x403b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48768 << 16));
    // 0x403b34: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403b34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403b38: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x403b38u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x403b3c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x403b3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x403b40: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x403b40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x403b44: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403B44u;
    SET_GPR_U32(ctx, 31, 0x403B4Cu);
    ctx->pc = 0x403B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403B44u;
    // 0x403b48: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403B44u, 0x403B4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403B4Cu;
label_403b4c:
    // 0x403b4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x403b4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x403b50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x403b50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x403b54: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x403b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403b58: 0xe7b50060  swc1        $f21, 0x60($sp)
    ctx->pc = 0x403b58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x403b5c: 0xe7b40064  swc1        $f20, 0x64($sp)
    ctx->pc = 0x403b5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x403b60: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x403b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x403b64: 0xe6a1000c  swc1        $f1, 0xC($s5)
    ctx->pc = 0x403b64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 12), bits); }
    // 0x403b68: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x403b68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403b6c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x403b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x403b70: 0xc0e9694  jal         func_3A5A50
    ctx->pc = 0x403B70u;
    SET_GPR_U32(ctx, 31, 0x403B78u);
    ctx->pc = 0x403B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403B70u;
    // 0x403b74: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A5A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A5A50u, 0x403B70u, 0x403B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403B78u;
label_403b78:
    // 0x403b78: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
    ctx->pc = 0x403B78u;
    {
        const bool branch_taken_0x403b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x403b78) {
            ctx->pc = 0x403B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403B78u;
            // 0x403b7c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x403CC0u;
            goto label_403cc0;
        }
    }
    ctx->pc = 0x403B80u;
    // 0x403b80: 0x16400016  bnez        $s2, . + 4 + (0x16 << 2)
    ctx->pc = 0x403B80u;
    {
        const bool branch_taken_0x403b80 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x403B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403B80u;
        // 0x403b84: 0x26d00010  addiu       $s0, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403b80) {
            ctx->pc = 0x403BDCu;
            goto label_403bdc;
        }
    }
    ctx->pc = 0x403B88u;
    // 0x403b88: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x403b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x403b8c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x403b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403b90: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403b94: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x403b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x403b98: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x403b98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x403b9c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x403b9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x403ba0: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403BA0u;
    SET_GPR_U32(ctx, 31, 0x403BA8u);
    ctx->pc = 0x403BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403BA0u;
    // 0x403ba4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403BA0u, 0x403BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403BA8u;
label_403ba8:
    // 0x403ba8: 0x3c07a79f  lui         $a3, 0xA79F
    ctx->pc = 0x403ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42911 << 16));
    // 0x403bac: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x403bacu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x403bb0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x403bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x403bb4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x403bb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x403bb8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403bbc: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x403bbcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x403bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bc4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x403bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403bc8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x403bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x403bcc: 0x34e77cff  ori         $a3, $a3, 0x7CFF
    ctx->pc = 0x403bccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)31999);
    // 0x403bd0: 0x3508003e  ori         $t0, $t0, 0x3E
    ctx->pc = 0x403bd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)62);
    // 0x403bd4: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x403BD4u;
    SET_GPR_U32(ctx, 31, 0x403BDCu);
    ctx->pc = 0x403BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403BD4u;
    // 0x403bd8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x403BD4u, 0x403BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403BDCu;
label_403bdc:
    // 0x403bdc: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x403bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x403be0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x403BE0u;
    {
        const bool branch_taken_0x403be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x403BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403BE0u;
        // 0x403be4: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403be0) {
            ctx->pc = 0x403C54u;
            goto label_403c54;
        }
    }
    ctx->pc = 0x403BE8u;
    // 0x403be8: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x403be8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x403bec: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x403becu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x403bf0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403bf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403bf4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x403bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x403bf8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x403bf8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403bfc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x403bfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x403c00: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403C00u;
    SET_GPR_U32(ctx, 31, 0x403C08u);
    ctx->pc = 0x403C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403C00u;
    // 0x403c04: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403C00u, 0x403C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403C08u;
label_403c08:
    // 0x403c08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x403c08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x403c0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x403c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c10: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x403C10u;
    SET_GPR_U32(ctx, 31, 0x403C18u);
    ctx->pc = 0x403C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403C10u;
    // 0x403c14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403C10u, 0x403C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403C18u;
label_403c18:
    // 0x403c18: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x403c18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x403c1c: 0x3c078967  lui         $a3, 0x8967
    ctx->pc = 0x403c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)35175 << 16));
    // 0x403c20: 0x3508003c  ori         $t0, $t0, 0x3C
    ctx->pc = 0x403c20u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)60);
    // 0x403c24: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x403c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x403c28: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x403c28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x403c2c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403c2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403c30: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x403c30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x403c34: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x403c34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x403c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c3c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x403c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c40: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x403c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x403c44: 0x34e73aff  ori         $a3, $a3, 0x3AFF
    ctx->pc = 0x403c44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)15103);
    // 0x403c48: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x403C48u;
    SET_GPR_U32(ctx, 31, 0x403C50u);
    ctx->pc = 0x403C4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403C48u;
    // 0x403c4c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x403C48u, 0x403C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403C50u;
label_403c50:
    // 0x403c50: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x403c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_403c54:
    // 0x403c54: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x403c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c58: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x403C58u;
    SET_GPR_U32(ctx, 31, 0x403C60u);
    ctx->pc = 0x403C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403C58u;
    // 0x403c5c: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x403C58u, 0x403C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403C60u;
label_403c60:
    // 0x403c60: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x403c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403c64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x403c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403c68: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x403c68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x403c6c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x403c6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x403c70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403c74: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x403c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x403c78: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x403c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403c7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x403c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x403c80: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403C80u;
    SET_GPR_U32(ctx, 31, 0x403C88u);
    ctx->pc = 0x403C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403C80u;
    // 0x403c84: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403C80u, 0x403C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403C88u;
label_403c88:
    // 0x403c88: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x403c88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x403c8c: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x403c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x403c90: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x403c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x403c94: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x403c94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x403c98: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403c98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403c9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ca0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x403ca0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x403ca4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x403ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ca8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x403ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x403cac: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x403cacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
    // 0x403cb0: 0x3508003b  ori         $t0, $t0, 0x3B
    ctx->pc = 0x403cb0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)59);
    // 0x403cb4: 0xc0f1618  jal         func_3C5860
    ctx->pc = 0x403CB4u;
    SET_GPR_U32(ctx, 31, 0x403CBCu);
    ctx->pc = 0x403CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403CB4u;
    // 0x403cb8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5860u, 0x403CB4u, 0x403CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403CBCu;
label_403cbc:
    // 0x403cbc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x403cbcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_403cc0:
    // 0x403cc0: 0x2a42003c  slti        $v0, $s2, 0x3C
    ctx->pc = 0x403cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)60) ? 1 : 0);
    // 0x403cc4: 0x1440ff92  bnez        $v0, . + 4 + (-0x6E << 2)
    ctx->pc = 0x403CC4u;
    {
        const bool branch_taken_0x403cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x403CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CC4u;
        // 0x403cc8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403cc4) {
            ctx->pc = 0x403B10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403b10;
        }
    }
    ctx->pc = 0x403CCCu;
    // 0x403ccc: 0x3c025e39  lui         $v0, 0x5E39
    ctx->pc = 0x403cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)24121 << 16));
label_403cd0:
    // 0x403cd0: 0x34425556  ori         $v0, $v0, 0x5556
    ctx->pc = 0x403cd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x403cd4: 0x16220028  bne         $s1, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x403CD4u;
    {
        const bool branch_taken_0x403cd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403CD4u;
        // 0x403cd8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403cd4) {
            ctx->pc = 0x403D78u;
            goto label_403d78;
        }
    }
    ctx->pc = 0x403CDCu;
    // 0x403cdc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x403cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x403ce0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x403ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x403ce4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x403ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x403ce8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x403ce8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x403cec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x403cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x403cf0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x403cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
    // 0x403cf4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x403cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x403cf8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x403cf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x403cfc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x403cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
    // 0x403d00: 0xe7b4007c  swc1        $f20, 0x7C($sp)
    ctx->pc = 0x403d00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x403d04: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x403d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403d08: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x403D08u;
    SET_GPR_U32(ctx, 31, 0x403D10u);
    ctx->pc = 0x403D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403D08u;
    // 0x403d0c: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x403D08u, 0x403D10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403D10u;
label_403d10:
    // 0x403d10: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x403d10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403d14: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x403d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x403d18: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x403d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x403d1c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403d20: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x403d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x403d24: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x403D24u;
    SET_GPR_U32(ctx, 31, 0x403D2Cu);
    ctx->pc = 0x403D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403D24u;
    // 0x403d28: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x403D24u, 0x403D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403D2Cu;
label_403d2c:
    // 0x403d2c: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x403d2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x403d30: 0x3c07bea7  lui         $a3, 0xBEA7
    ctx->pc = 0x403d30u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48807 << 16));
    // 0x403d34: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x403d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x403d38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x403d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x403d3c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403d40: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x403d40u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x403d44: 0x3c013e05  lui         $at, 0x3E05
    ctx->pc = 0x403d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15877 << 16));
    // 0x403d48: 0x34211eb8  ori         $at, $at, 0x1EB8
    ctx->pc = 0x403d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7864);
    // 0x403d4c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x403d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x403d50: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403d50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403d54: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x403d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x403d58: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x403d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403d5c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x403d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x403d60: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x403d60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x403d64: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x403d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x403d68: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x403d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x403d6c: 0x34e780ff  ori         $a3, $a3, 0x80FF
    ctx->pc = 0x403d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)33023);
    // 0x403d70: 0xc0f16c0  jal         func_3C5B00
    ctx->pc = 0x403D70u;
    SET_GPR_U32(ctx, 31, 0x403D78u);
    ctx->pc = 0x403D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403D70u;
    // 0x403d74: 0x24080085  addiu       $t0, $zero, 0x85 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5B00u, 0x403D70u, 0x403D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403D78u;
label_403d78:
    // 0x403d78: 0x3c0283ba  lui         $v0, 0x83BA
    ctx->pc = 0x403d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33722 << 16));
    // 0x403d7c: 0x3442ff06  ori         $v0, $v0, 0xFF06
    ctx->pc = 0x403d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65286);
    // 0x403d80: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x403D80u;
    {
        const bool branch_taken_0x403d80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403D80u;
        // 0x403d84: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403d80) {
            ctx->pc = 0x403DA8u;
            goto label_403da8;
        }
    }
    ctx->pc = 0x403D88u;
    // 0x403d88: 0x3c06a578  lui         $a2, 0xA578
    ctx->pc = 0x403d88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42360 << 16));
    // 0x403d8c: 0x3c013d75  lui         $at, 0x3D75
    ctx->pc = 0x403d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15733 << 16));
    // 0x403d90: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x403d90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x403d94: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403d94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403d98: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x403d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x403d9c: 0x34c66490  ori         $a2, $a2, 0x6490
    ctx->pc = 0x403d9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)25744);
    // 0x403da0: 0xc0f1658  jal         func_3C5960
    ctx->pc = 0x403DA0u;
    SET_GPR_U32(ctx, 31, 0x403DA8u);
    ctx->pc = 0x403DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403DA0u;
    // 0x403da4: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x403DA0u, 0x403DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403DA8u;
label_403da8:
    // 0x403da8: 0x3c028136  lui         $v0, 0x8136
    ctx->pc = 0x403da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33078 << 16));
    // 0x403dac: 0x3442b788  ori         $v0, $v0, 0xB788
    ctx->pc = 0x403dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46984);
    // 0x403db0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x403DB0u;
    {
        const bool branch_taken_0x403db0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x403DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403DB0u;
        // 0x403db4: 0x3c027c64  lui         $v0, 0x7C64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31844 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403db0) {
            ctx->pc = 0x403DC4u;
            goto label_403dc4;
        }
    }
    ctx->pc = 0x403DB8u;
    // 0x403db8: 0x3442e428  ori         $v0, $v0, 0xE428
    ctx->pc = 0x403db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)58408);
    // 0x403dbc: 0x16220013  bne         $s1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x403DBCu;
    {
        const bool branch_taken_0x403dbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403DBCu;
        // 0x403dc0: 0x3c026eff  lui         $v0, 0x6EFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28415 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403dbc) {
            ctx->pc = 0x403E0Cu;
            goto label_403e0c;
        }
    }
    ctx->pc = 0x403DC4u;
label_403dc4:
    // 0x403dc4: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x403dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x403dc8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x403dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x403dcc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403dd0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x403dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x403dd4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x403DD4u;
    SET_GPR_U32(ctx, 31, 0x403DDCu);
    ctx->pc = 0x403DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403DD4u;
    // 0x403dd8: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x403DD4u, 0x403DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403DDCu;
label_403ddc:
    // 0x403ddc: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x403ddcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x403de0: 0x3c069090  lui         $a2, 0x9090
    ctx->pc = 0x403de0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37008 << 16));
    // 0x403de4: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x403de4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x403de8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x403de8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x403dec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403df0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x403df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403df4: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x403df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x403df8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x403df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403dfc: 0x34c690ff  ori         $a2, $a2, 0x90FF
    ctx->pc = 0x403dfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37119);
    // 0x403e00: 0xc0f1658  jal         func_3C5960
    ctx->pc = 0x403E00u;
    SET_GPR_U32(ctx, 31, 0x403E08u);
    ctx->pc = 0x403E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403E00u;
    // 0x403e04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x403E00u, 0x403E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403E08u;
label_403e08:
    // 0x403e08: 0x3c026eff  lui         $v0, 0x6EFF
    ctx->pc = 0x403e08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28415 << 16));
label_403e0c:
    // 0x403e0c: 0x3442eee0  ori         $v0, $v0, 0xEEE0
    ctx->pc = 0x403e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61152);
    // 0x403e10: 0x1622004f  bne         $s1, $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x403E10u;
    {
        const bool branch_taken_0x403e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403E10u;
        // 0x403e14: 0x3c020191  lui         $v0, 0x191 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)401 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403e10) {
            ctx->pc = 0x403F50u;
            goto label_403f50;
        }
    }
    ctx->pc = 0x403E18u;
    // 0x403e18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x403e1c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x403e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403e20: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x403e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x403e24: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x403E24u;
    SET_GPR_U32(ctx, 31, 0x403E2Cu);
    ctx->pc = 0x403E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403E24u;
    // 0x403e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403E24u, 0x403E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403E2Cu;
label_403e2c:
    // 0x403e2c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x403e2cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403e30: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x403e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x403e34: 0x18400041  blez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x403E34u;
    {
        const bool branch_taken_0x403e34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x403E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403E34u;
        // 0x403e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403e34) {
            ctx->pc = 0x403F3Cu;
            goto label_403f3c;
        }
    }
    ctx->pc = 0x403E3Cu;
    // 0x403e3c: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x403e3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x403e40: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x403e40u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x403e44: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x403e44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x403e48: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x403e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403e4c: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x403e4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x403e50: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x403e50u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x403e54: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x403e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x403e58: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x403e58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x403e5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x403e5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x403e60: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x403e60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x403e64: 0x0  nop
    ctx->pc = 0x403e64u;
    // NOP
label_403e68:
    // 0x403e68: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403e68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403e6c: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x403e6cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x403e70: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403E70u;
    SET_GPR_U32(ctx, 31, 0x403E78u);
    ctx->pc = 0x403E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403E70u;
    // 0x403e74: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403E70u, 0x403E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403E78u;
label_403e78:
    // 0x403e78: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x403e78u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x403e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403e80: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403e80u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403e84: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403E84u;
    SET_GPR_U32(ctx, 31, 0x403E8Cu);
    ctx->pc = 0x403E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403E84u;
    // 0x403e88: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403E84u, 0x403E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403E8Cu;
label_403e8c:
    // 0x403e8c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403e8cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403e90: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x403e90u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x403e94: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x403e94u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x403e98: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403E98u;
    SET_GPR_U32(ctx, 31, 0x403EA0u);
    ctx->pc = 0x403E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403E98u;
    // 0x403e9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403E98u, 0x403EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403EA0u;
label_403ea0:
    // 0x403ea0: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x403ea0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x403ea4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x403ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ea8: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x403ea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x403eac: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x403eacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x403eb0: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x403eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x403eb4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x403eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403eb8: 0xe678000c  swc1        $f24, 0xC($s3)
    ctx->pc = 0x403eb8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x403ebc: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x403ebcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403ec0: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x403EC0u;
    SET_GPR_U32(ctx, 31, 0x403EC8u);
    ctx->pc = 0x403EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403EC0u;
    // 0x403ec4: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x403EC0u, 0x403EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403EC8u;
label_403ec8:
    // 0x403ec8: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x403ec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x403ecc: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x403eccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x403ed0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x403ed0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x403ed4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403ed4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403ed8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403edc: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403EDCu;
    SET_GPR_U32(ctx, 31, 0x403EE4u);
    ctx->pc = 0x403EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403EDCu;
    // 0x403ee0: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403EDCu, 0x403EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403EE4u;
label_403ee4:
    // 0x403ee4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x403ee4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x403ee8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x403ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x403eec: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x403EECu;
    SET_GPR_U32(ctx, 31, 0x403EF4u);
    ctx->pc = 0x403EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403EECu;
    // 0x403ef0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x403EECu, 0x403EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403EF4u;
label_403ef4:
    // 0x403ef4: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x403ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x403ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403efc: 0x3c013ccc  lui         $at, 0x3CCC
    ctx->pc = 0x403efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15564 << 16));
    // 0x403f00: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x403f00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x403f04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403f04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403f08: 0x3c013d38  lui         $at, 0x3D38
    ctx->pc = 0x403f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15672 << 16));
    // 0x403f0c: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x403f0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x403f10: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x403f10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x403f14: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403F14u;
    SET_GPR_U32(ctx, 31, 0x403F1Cu);
    ctx->pc = 0x403F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403F14u;
    // 0x403f18: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403F14u, 0x403F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403F1Cu;
label_403f1c:
    // 0x403f1c: 0x3c066f4d  lui         $a2, 0x6F4D
    ctx->pc = 0x403f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28493 << 16));
    // 0x403f20: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x403f20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x403f24: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x403f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403f28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x403f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403f2c: 0xc0f1706  jal         func_3C5C18
    ctx->pc = 0x403F2Cu;
    SET_GPR_U32(ctx, 31, 0x403F34u);
    ctx->pc = 0x403F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403F2Cu;
    // 0x403f30: 0x34c642ff  ori         $a2, $a2, 0x42FF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)17151);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5C18u, 0x403F2Cu, 0x403F34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403F34u;
label_403f34:
    // 0x403f34: 0x1640ffcc  bnez        $s2, . + 4 + (-0x34 << 2)
    ctx->pc = 0x403F34u;
    {
        const bool branch_taken_0x403f34 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x403F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F34u;
        // 0x403f38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f34) {
            ctx->pc = 0x403E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403e68;
        }
    }
    ctx->pc = 0x403F3Cu;
label_403f3c:
    // 0x403f3c: 0x1bc00004  blez        $fp, . + 4 + (0x4 << 2)
    ctx->pc = 0x403F3Cu;
    {
        const bool branch_taken_0x403f3c = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x403F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F3Cu;
        // 0x403f40: 0x3c020191  lui         $v0, 0x191 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)401 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f3c) {
            ctx->pc = 0x403F50u;
            goto label_403f50;
        }
    }
    ctx->pc = 0x403F44u;
    // 0x403f44: 0xc0e95f6  jal         func_3A57D8
    ctx->pc = 0x403F44u;
    SET_GPR_U32(ctx, 31, 0x403F4Cu);
    ctx->pc = 0x403F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403F44u;
    // 0x403f48: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A57D8u, 0x403F44u, 0x403F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403F4Cu;
label_403f4c:
    // 0x403f4c: 0x3c020191  lui         $v0, 0x191
    ctx->pc = 0x403f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)401 << 16));
label_403f50:
    // 0x403f50: 0x3442ccb4  ori         $v0, $v0, 0xCCB4
    ctx->pc = 0x403f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52404);
    // 0x403f54: 0x1622000a  bne         $s1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x403F54u;
    {
        const bool branch_taken_0x403f54 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F54u;
        // 0x403f58: 0x3c0226b7  lui         $v0, 0x26B7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9911 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f54) {
            ctx->pc = 0x403F80u;
            goto label_403f80;
        }
    }
    ctx->pc = 0x403F5Cu;
    // 0x403f5c: 0x8ec600c8  lw          $a2, 0xC8($s6)
    ctx->pc = 0x403f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x403f60: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x403f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403f64: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x403f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x403f68: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x403f68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x403f6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x403f6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x403f70: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x403f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x403f74: 0xc0f1658  jal         func_3C5960
    ctx->pc = 0x403F74u;
    SET_GPR_U32(ctx, 31, 0x403F7Cu);
    ctx->pc = 0x403F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403F74u;
    // 0x403f78: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x403F74u, 0x403F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403F7Cu;
label_403f7c:
    // 0x403f7c: 0x3c0226b7  lui         $v0, 0x26B7
    ctx->pc = 0x403f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)9911 << 16));
label_403f80:
    // 0x403f80: 0x3442048b  ori         $v0, $v0, 0x48B
    ctx->pc = 0x403f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1163);
    // 0x403f84: 0x16220049  bne         $s1, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x403F84u;
    {
        const bool branch_taken_0x403f84 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x403F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x403F84u;
        // 0x403f88: 0x3c022722  lui         $v0, 0x2722 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10018 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x403f84) {
            ctx->pc = 0x4040ACu;
            goto label_4040ac;
        }
    }
    ctx->pc = 0x403F8Cu;
    // 0x403f8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x403f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x403f90: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x403f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x403f94: 0x2450b8b8  addiu       $s0, $v0, -0x4748
    ctx->pc = 0x403f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949048));
    // 0x403f98: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x403F98u;
    SET_GPR_U32(ctx, 31, 0x403FA0u);
    ctx->pc = 0x403F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403F98u;
    // 0x403f9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x403F98u, 0x403FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403FA0u;
label_403fa0:
    // 0x403fa0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x403fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
    // 0x403fa4: 0x58400041  blezl       $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x403FA4u;
    {
        const bool branch_taken_0x403fa4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x403fa4) {
            ctx->pc = 0x403FA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x403FA4u;
            // 0x403fa8: 0x3c022722  lui         $v0, 0x2722 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10018 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4040ACu;
            goto label_4040ac;
        }
    }
    ctx->pc = 0x403FACu;
    // 0x403fac: 0x3c01bd23  lui         $at, 0xBD23
    ctx->pc = 0x403facu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48419 << 16));
    // 0x403fb0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x403fb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x403fb4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x403fb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x403fb8: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x403fb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x403fbc: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x403fbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x403fc0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x403fc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x403fc4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x403fc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x403fc8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x403fc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403fcc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x403fccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x403fd0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x403fd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x403fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_403fd8:
    // 0x403fd8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403fd8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403fdc: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x403fdcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x403fe0: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403FE0u;
    SET_GPR_U32(ctx, 31, 0x403FE8u);
    ctx->pc = 0x403FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403FE0u;
    // 0x403fe4: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403FE0u, 0x403FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403FE8u;
label_403fe8:
    // 0x403fe8: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x403fe8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x403fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x403fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x403ff0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403ff0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x403ff4: 0xc0cd518  jal         func_335460
    ctx->pc = 0x403FF4u;
    SET_GPR_U32(ctx, 31, 0x403FFCu);
    ctx->pc = 0x403FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x403FF4u;
    // 0x403ff8: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x403FF4u, 0x403FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x403FFCu;
label_403ffc:
    // 0x403ffc: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x403ffcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x404000: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x404000u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x404004: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x404004u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x404008: 0xc0cd518  jal         func_335460
    ctx->pc = 0x404008u;
    SET_GPR_U32(ctx, 31, 0x404010u);
    ctx->pc = 0x40400Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404008u;
    // 0x40400c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x404008u, 0x404010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404010u;
label_404010:
    // 0x404010: 0xe7b50070  swc1        $f21, 0x70($sp)
    ctx->pc = 0x404010u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x404014: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x404014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404018: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x404018u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x40401c: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x40401cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x404020: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x404020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x404024: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x404024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404028: 0xe678000c  swc1        $f24, 0xC($s3)
    ctx->pc = 0x404028u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x40402c: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x40402cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x404030: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x404030u;
    SET_GPR_U32(ctx, 31, 0x404038u);
    ctx->pc = 0x404034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404030u;
    // 0x404034: 0x7fa20060  sq          $v0, 0x60($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x404030u, 0x404038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404038u;
label_404038:
    // 0x404038: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x404038u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x40403c: 0x4600c346  mov.s       $f13, $f24
    ctx->pc = 0x40403cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    // 0x404040: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x404040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x404044: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x404044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x404048: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40404c: 0xc0cd518  jal         func_335460
    ctx->pc = 0x40404Cu;
    SET_GPR_U32(ctx, 31, 0x404054u);
    ctx->pc = 0x404050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40404Cu;
    // 0x404050: 0x7fa20050  sq          $v0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x40404Cu, 0x404054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404054u;
label_404054:
    // 0x404054: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x404054u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x404058: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x404058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x40405c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x40405Cu;
    SET_GPR_U32(ctx, 31, 0x404064u);
    ctx->pc = 0x404060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40405Cu;
    // 0x404060: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x40405Cu, 0x404064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404064u;
label_404064:
    // 0x404064: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x404064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x404068: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x404068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40406c: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x40406cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x404070: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x404070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x404074: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x404074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x404078: 0x3c013d8f  lui         $at, 0x3D8F
    ctx->pc = 0x404078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15759 << 16));
    // 0x40407c: 0x34215c29  ori         $at, $at, 0x5C29
    ctx->pc = 0x40407cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23593);
    // 0x404080: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x404080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x404084: 0xc0cd518  jal         func_335460
    ctx->pc = 0x404084u;
    SET_GPR_U32(ctx, 31, 0x40408Cu);
    ctx->pc = 0x404088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404084u;
    // 0x404088: 0x7fa20070  sq          $v0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x404084u, 0x40408Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40408Cu;
label_40408c:
    // 0x40408c: 0x8ec600c8  lw          $a2, 0xC8($s6)
    ctx->pc = 0x40408cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 200)));
    // 0x404090: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x404090u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x404094: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x404094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404098: 0xc0f1706  jal         func_3C5C18
    ctx->pc = 0x404098u;
    SET_GPR_U32(ctx, 31, 0x4040A0u);
    ctx->pc = 0x40409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404098u;
    // 0x40409c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5C18u, 0x404098u, 0x4040A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4040A0u;
label_4040a0:
    // 0x4040a0: 0x1640ffcd  bnez        $s2, . + 4 + (-0x33 << 2)
    ctx->pc = 0x4040A0u;
    {
        const bool branch_taken_0x4040a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4040A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4040A0u;
        // 0x4040a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4040a0) {
            ctx->pc = 0x403FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_403fd8;
        }
    }
    ctx->pc = 0x4040A8u;
    // 0x4040a8: 0x3c022722  lui         $v0, 0x2722
    ctx->pc = 0x4040a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10018 << 16));
label_4040ac:
    // 0x4040ac: 0x34423587  ori         $v0, $v0, 0x3587
    ctx->pc = 0x4040acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13703);
    // 0x4040b0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4040B0u;
    {
        const bool branch_taken_0x4040b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x4040B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4040B0u;
        // 0x4040b4: 0x3c023b78  lui         $v0, 0x3B78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15224 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4040b0) {
            ctx->pc = 0x4040C4u;
            goto label_4040c4;
        }
    }
    ctx->pc = 0x4040B8u;
    // 0x4040b8: 0x3442dcbf  ori         $v0, $v0, 0xDCBF
    ctx->pc = 0x4040b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)56511);
    // 0x4040bc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4040BCu;
    {
        const bool branch_taken_0x4040bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x4040C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4040BCu;
        // 0x4040c0: 0x3c027ed9  lui         $v0, 0x7ED9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32473 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4040bc) {
            ctx->pc = 0x404128u;
            goto label_404128;
        }
    }
    ctx->pc = 0x4040C4u;
label_4040c4:
    // 0x4040c4: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x4040c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x4040c8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4040c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x4040cc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4040ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4040d0: 0x3c05ffe8  lui         $a1, 0xFFE8
    ctx->pc = 0x4040d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65512 << 16));
    // 0x4040d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4040d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4040d8: 0xc0f15f6  jal         func_3C57D8
    ctx->pc = 0x4040D8u;
    SET_GPR_U32(ctx, 31, 0x4040E0u);
    ctx->pc = 0x4040DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4040D8u;
    // 0x4040dc: 0x34a5e894  ori         $a1, $a1, 0xE894 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)59540);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x4040D8u, 0x4040E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4040E0u;
label_4040e0:
    // 0x4040e0: 0x3c013e19  lui         $at, 0x3E19
    ctx->pc = 0x4040e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15897 << 16));
    // 0x4040e4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x4040e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x4040e8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x4040e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x4040ec: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x4040ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x4040f0: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x4040F0u;
    SET_GPR_U32(ctx, 31, 0x4040F8u);
    ctx->pc = 0x4040F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4040F0u;
    // 0x4040f4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x4040F0u, 0x4040F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4040F8u;
label_4040f8:
    // 0x4040f8: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x4040f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4040fc: 0x3c069090  lui         $a2, 0x9090
    ctx->pc = 0x4040fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)37008 << 16));
    // 0x404100: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x404100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x404104: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x404104u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x404108: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x404108u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x40410c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x40410cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404110: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x404110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x404114: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404118: 0x34c690ff  ori         $a2, $a2, 0x90FF
    ctx->pc = 0x404118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)37119);
    // 0x40411c: 0xc0f1658  jal         func_3C5960
    ctx->pc = 0x40411Cu;
    SET_GPR_U32(ctx, 31, 0x404124u);
    ctx->pc = 0x404120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40411Cu;
    // 0x404120: 0x24070055  addiu       $a3, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C5960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C5960u, 0x40411Cu, 0x404124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x404124u;
label_404124:
    // 0x404124: 0x3c027ed9  lui         $v0, 0x7ED9
    ctx->pc = 0x404124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32473 << 16));
label_404128:
    // 0x404128: 0x344233d9  ori         $v0, $v0, 0x33D9
    ctx->pc = 0x404128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13273);
    // 0x40412c: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40412Cu;
    {
        const bool branch_taken_0x40412c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x404130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40412Cu;
        // 0x404130: 0x7bb00140  lq          $s0, 0x140($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40412c) {
            ctx->pc = 0x404150u;
            goto label_404150;
        }
    }
    ctx->pc = 0x404134u;
    // 0x404134: 0x3c058b7d  lui         $a1, 0x8B7D
    ctx->pc = 0x404134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)35709 << 16));
    // 0x404138: 0x3c014070  lui         $at, 0x4070
    ctx->pc = 0x404138u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16496 << 16));
    // 0x40413c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x40413cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x404140: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x404140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x404144: 0xc0f15f6  jal         func_3C57D8
    ctx->pc = 0x404144u;
    SET_GPR_U32(ctx, 31, 0x40414Cu);
    ctx->pc = 0x404148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x404144u;
    // 0x404148: 0x34a56994  ori         $a1, $a1, 0x6994 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)27028);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C57D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C57D8u, 0x404144u, 0x40414Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40414Cu;
label_40414c:
    // 0x40414c: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x40414cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_404150:
    // 0x404150: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x404150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x404154: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x404154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x404158: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x404158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x40415c: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x40415cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x404160: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x404160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x404164: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x404164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x404168: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x404168u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x40416c: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x40416cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x404170: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x404170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x404174: 0xc7bd0198  lwc1        $f29, 0x198($sp)
    ctx->pc = 0x404174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x404178: 0xc7bc0190  lwc1        $f28, 0x190($sp)
    ctx->pc = 0x404178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x40417c: 0xc7bb0188  lwc1        $f27, 0x188($sp)
    ctx->pc = 0x40417cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x404180: 0xc7ba0180  lwc1        $f26, 0x180($sp)
    ctx->pc = 0x404180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x404184: 0xc7b90178  lwc1        $f25, 0x178($sp)
    ctx->pc = 0x404184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x404188: 0xc7b80170  lwc1        $f24, 0x170($sp)
    ctx->pc = 0x404188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x40418c: 0xc7b70168  lwc1        $f23, 0x168($sp)
    ctx->pc = 0x40418cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x404190: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x404190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x404194: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x404194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x404198: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x404198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x40419c: 0x3e00008  jr          $ra
    ctx->pc = 0x40419Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4041A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40419Cu;
        // 0x4041a0: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40419Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4041A4u;
    // 0x4041a4: 0x0  nop
    ctx->pc = 0x4041a4u;
    // NOP
    ctx->pc = 0x4041a8u;
}
