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

// Function: sub_003108A8
// Address: 0x3108a8 - 0x310a60
void sub_003108A8_0x3108a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003108A8_0x3108a8");
#endif

    switch (ctx->pc) {
        case 0x3108a8u: goto label_3108a8;
        case 0x3108acu: goto label_3108ac;
        case 0x3108b0u: goto label_3108b0;
        case 0x3108b4u: goto label_3108b4;
        case 0x3108b8u: goto label_3108b8;
        case 0x3108bcu: goto label_3108bc;
        case 0x3108c0u: goto label_3108c0;
        case 0x3108c4u: goto label_3108c4;
        case 0x3108c8u: goto label_3108c8;
        case 0x3108ccu: goto label_3108cc;
        case 0x3108d0u: goto label_3108d0;
        case 0x3108d4u: goto label_3108d4;
        case 0x3108d8u: goto label_3108d8;
        case 0x3108dcu: goto label_3108dc;
        case 0x3108e0u: goto label_3108e0;
        case 0x3108e4u: goto label_3108e4;
        case 0x3108e8u: goto label_3108e8;
        case 0x3108ecu: goto label_3108ec;
        case 0x3108f0u: goto label_3108f0;
        case 0x3108f4u: goto label_3108f4;
        case 0x3108f8u: goto label_3108f8;
        case 0x3108fcu: goto label_3108fc;
        case 0x310900u: goto label_310900;
        case 0x310904u: goto label_310904;
        case 0x310908u: goto label_310908;
        case 0x31090cu: goto label_31090c;
        case 0x310910u: goto label_310910;
        case 0x310914u: goto label_310914;
        case 0x310918u: goto label_310918;
        case 0x31091cu: goto label_31091c;
        case 0x310920u: goto label_310920;
        case 0x310924u: goto label_310924;
        case 0x310928u: goto label_310928;
        case 0x31092cu: goto label_31092c;
        case 0x310930u: goto label_310930;
        case 0x310934u: goto label_310934;
        case 0x310938u: goto label_310938;
        case 0x31093cu: goto label_31093c;
        case 0x310940u: goto label_310940;
        case 0x310944u: goto label_310944;
        case 0x310948u: goto label_310948;
        case 0x31094cu: goto label_31094c;
        case 0x310950u: goto label_310950;
        case 0x310954u: goto label_310954;
        case 0x310958u: goto label_310958;
        case 0x31095cu: goto label_31095c;
        case 0x310960u: goto label_310960;
        case 0x310964u: goto label_310964;
        case 0x310968u: goto label_310968;
        case 0x31096cu: goto label_31096c;
        case 0x310970u: goto label_310970;
        case 0x310974u: goto label_310974;
        case 0x310978u: goto label_310978;
        case 0x31097cu: goto label_31097c;
        case 0x310980u: goto label_310980;
        case 0x310984u: goto label_310984;
        case 0x310988u: goto label_310988;
        case 0x31098cu: goto label_31098c;
        case 0x310990u: goto label_310990;
        case 0x310994u: goto label_310994;
        case 0x310998u: goto label_310998;
        case 0x31099cu: goto label_31099c;
        case 0x3109a0u: goto label_3109a0;
        case 0x3109a4u: goto label_3109a4;
        case 0x3109a8u: goto label_3109a8;
        case 0x3109acu: goto label_3109ac;
        case 0x3109b0u: goto label_3109b0;
        case 0x3109b4u: goto label_3109b4;
        case 0x3109b8u: goto label_3109b8;
        case 0x3109bcu: goto label_3109bc;
        case 0x3109c0u: goto label_3109c0;
        case 0x3109c4u: goto label_3109c4;
        case 0x3109c8u: goto label_3109c8;
        case 0x3109ccu: goto label_3109cc;
        case 0x3109d0u: goto label_3109d0;
        case 0x3109d4u: goto label_3109d4;
        case 0x3109d8u: goto label_3109d8;
        case 0x3109dcu: goto label_3109dc;
        case 0x3109e0u: goto label_3109e0;
        case 0x3109e4u: goto label_3109e4;
        case 0x3109e8u: goto label_3109e8;
        case 0x3109ecu: goto label_3109ec;
        case 0x3109f0u: goto label_3109f0;
        case 0x3109f4u: goto label_3109f4;
        case 0x3109f8u: goto label_3109f8;
        case 0x3109fcu: goto label_3109fc;
        case 0x310a00u: goto label_310a00;
        case 0x310a04u: goto label_310a04;
        case 0x310a08u: goto label_310a08;
        case 0x310a0cu: goto label_310a0c;
        case 0x310a10u: goto label_310a10;
        case 0x310a14u: goto label_310a14;
        case 0x310a18u: goto label_310a18;
        case 0x310a1cu: goto label_310a1c;
        case 0x310a20u: goto label_310a20;
        case 0x310a24u: goto label_310a24;
        case 0x310a28u: goto label_310a28;
        case 0x310a2cu: goto label_310a2c;
        case 0x310a30u: goto label_310a30;
        case 0x310a34u: goto label_310a34;
        case 0x310a38u: goto label_310a38;
        case 0x310a3cu: goto label_310a3c;
        case 0x310a40u: goto label_310a40;
        case 0x310a44u: goto label_310a44;
        case 0x310a48u: goto label_310a48;
        case 0x310a4cu: goto label_310a4c;
        case 0x310a50u: goto label_310a50;
        case 0x310a54u: goto label_310a54;
        case 0x310a58u: goto label_310a58;
        case 0x310a5cu: goto label_310a5c;
        default: break;
    }

    ctx->pc = 0x3108a8u;

label_3108a8:
    // 0x3108a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x3108a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_3108ac:
    // 0x3108ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3108acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3108b0:
    // 0x3108b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3108b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3108b4:
    // 0x3108b4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3108b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3108b8:
    // 0x3108b8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3108b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3108bc:
    // 0x3108bc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3108bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3108c0:
    // 0x3108c0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3108c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3108c4:
    // 0x3108c4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3108c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3108c8:
    // 0x3108c8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x3108c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_3108cc:
    // 0x3108cc: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x3108ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_3108d0:
    // 0x3108d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3108d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3108d4:
    // 0x3108d4: 0xc0e409a  jal         func_390268
label_3108d8:
    if (ctx->pc == 0x3108D8u) {
        ctx->pc = 0x3108D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108D4u;
        // 0x3108d8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3108DCu;
        goto label_3108dc;
    }
    ctx->pc = 0x3108D4u;
    SET_GPR_U32(ctx, 31, 0x3108DCu);
    ctx->pc = 0x3108D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108D4u;
    // 0x3108d8: 0x26a40020  addiu       $a0, $s5, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x3108D4u, 0x3108DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3108DCu;
label_3108dc:
    // 0x3108dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3108dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3108e0:
    // 0x3108e0: 0x12400053  beqz        $s2, . + 4 + (0x53 << 2)
label_3108e4:
    if (ctx->pc == 0x3108E4u) {
        ctx->pc = 0x3108E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108E0u;
        // 0x3108e4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3108E8u;
        goto label_3108e8;
    }
    ctx->pc = 0x3108E0u;
    {
        const bool branch_taken_0x3108e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108E0u;
        // 0x3108e4: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108e0) {
            ctx->pc = 0x310A30u;
            goto label_310a30;
        }
    }
    ctx->pc = 0x3108E8u;
label_3108e8:
    // 0x3108e8: 0x86500092  lh          $s0, 0x92($s2)
    ctx->pc = 0x3108e8u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 146)));
label_3108ec:
    // 0x3108ec: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x3108ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
label_3108f0:
    // 0x3108f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3108f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3108f4:
    // 0x3108f4: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x3108f4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_3108f8:
    // 0x3108f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3108f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3108fc:
    // 0x3108fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3108fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_310900:
    // 0x310900: 0xc088edc  jal         func_223B70
label_310904:
    if (ctx->pc == 0x310904u) {
        ctx->pc = 0x310904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310900u;
        // 0x310904: 0x241700dd  addiu       $s7, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310908u;
        goto label_310908;
    }
    ctx->pc = 0x310900u;
    SET_GPR_U32(ctx, 31, 0x310908u);
    ctx->pc = 0x310904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310900u;
    // 0x310904: 0x241700dd  addiu       $s7, $zero, 0xDD (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223B70u, 0x310900u, 0x310908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310908u;
label_310908:
    // 0x310908: 0x24160035  addiu       $s6, $zero, 0x35
    ctx->pc = 0x310908u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_31090c:
    // 0x31090c: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x31090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_310910:
    // 0x310910: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x310910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_310914:
    // 0x310914: 0x24540048  addiu       $s4, $v0, 0x48
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_310918:
    // 0x310918: 0xc13b748  jal         func_4EDD20
label_31091c:
    if (ctx->pc == 0x31091Cu) {
        ctx->pc = 0x31091Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310918u;
        // 0x31091c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310920u;
        goto label_310920;
    }
    ctx->pc = 0x310918u;
    SET_GPR_U32(ctx, 31, 0x310920u);
    ctx->pc = 0x31091Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310918u;
    // 0x31091c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4EDD20u, 0x310918u, 0x310920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310920u;
label_310920:
    // 0x310920: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x310920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_310924:
    // 0x310924: 0x0  nop
    ctx->pc = 0x310924u;
    // NOP
label_310928:
    // 0x310928: 0xc137826  jal         func_4DE098
label_31092c:
    if (ctx->pc == 0x31092Cu) {
        ctx->pc = 0x31092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310928u;
        // 0x31092c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310930u;
        goto label_310930;
    }
    ctx->pc = 0x310928u;
    SET_GPR_U32(ctx, 31, 0x310930u);
    ctx->pc = 0x31092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310928u;
    // 0x31092c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE098u, 0x310928u, 0x310930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310930u;
label_310930:
    // 0x310930: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x310930u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_310934:
    // 0x310934: 0xc0e409a  jal         func_390268
label_310938:
    if (ctx->pc == 0x310938u) {
        ctx->pc = 0x310938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310934u;
        // 0x310938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31093Cu;
        goto label_31093c;
    }
    ctx->pc = 0x310934u;
    SET_GPR_U32(ctx, 31, 0x31093Cu);
    ctx->pc = 0x310938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310934u;
    // 0x310938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x310934u, 0x31093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31093Cu;
label_31093c:
    // 0x31093c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31093cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310940:
    // 0x310940: 0x52200038  beql        $s1, $zero, . + 4 + (0x38 << 2)
label_310944:
    if (ctx->pc == 0x310944u) {
        ctx->pc = 0x310944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310940u;
        // 0x310944: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310948u;
        goto label_310948;
    }
    ctx->pc = 0x310940u;
    {
        const bool branch_taken_0x310940 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x310940) {
            ctx->pc = 0x310944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310940u;
            // 0x310944: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A24u;
            goto label_310a24;
        }
    }
    ctx->pc = 0x310948u;
label_310948:
    // 0x310948: 0x52320036  beql        $s1, $s2, . + 4 + (0x36 << 2)
label_31094c:
    if (ctx->pc == 0x31094Cu) {
        ctx->pc = 0x31094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310948u;
        // 0x31094c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310950u;
        goto label_310950;
    }
    ctx->pc = 0x310948u;
    {
        const bool branch_taken_0x310948 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        if (branch_taken_0x310948) {
            ctx->pc = 0x31094Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310948u;
            // 0x31094c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A24u;
            goto label_310a24;
        }
    }
    ctx->pc = 0x310950u;
label_310950:
    // 0x310950: 0xc08a096  jal         func_228258
label_310954:
    if (ctx->pc == 0x310954u) {
        ctx->pc = 0x310954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310950u;
        // 0x310954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310958u;
        goto label_310958;
    }
    ctx->pc = 0x310950u;
    SET_GPR_U32(ctx, 31, 0x310958u);
    ctx->pc = 0x310954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310950u;
    // 0x310954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x310950u, 0x310958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310958u;
label_310958:
    // 0x310958: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31095c:
    // 0x31095c: 0x50430031  beql        $v0, $v1, . + 4 + (0x31 << 2)
label_310960:
    if (ctx->pc == 0x310960u) {
        ctx->pc = 0x310960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31095Cu;
        // 0x310960: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310964u;
        goto label_310964;
    }
    ctx->pc = 0x31095Cu;
    {
        const bool branch_taken_0x31095c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x31095c) {
            ctx->pc = 0x310960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31095Cu;
            // 0x310960: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A24u;
            goto label_310a24;
        }
    }
    ctx->pc = 0x310964u;
label_310964:
    // 0x310964: 0x822201b0  lb          $v0, 0x1B0($s1)
    ctx->pc = 0x310964u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 432)));
label_310968:
    // 0x310968: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x310968u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_31096c:
    // 0x31096c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x31096cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_310970:
    // 0x310970: 0x5043002c  beql        $v0, $v1, . + 4 + (0x2C << 2)
label_310974:
    if (ctx->pc == 0x310974u) {
        ctx->pc = 0x310974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310970u;
        // 0x310974: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310978u;
        goto label_310978;
    }
    ctx->pc = 0x310970u;
    {
        const bool branch_taken_0x310970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x310970) {
            ctx->pc = 0x310974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310970u;
            // 0x310974: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A24u;
            goto label_310a24;
        }
    }
    ctx->pc = 0x310978u;
label_310978:
    // 0x310978: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x310978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_31097c:
    // 0x31097c: 0x50570029  beql        $v0, $s7, . + 4 + (0x29 << 2)
label_310980:
    if (ctx->pc == 0x310980u) {
        ctx->pc = 0x310980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31097Cu;
        // 0x310980: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310984u;
        goto label_310984;
    }
    ctx->pc = 0x31097Cu;
    {
        const bool branch_taken_0x31097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x31097c) {
            ctx->pc = 0x310980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31097Cu;
            // 0x310980: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A24u;
            goto label_310a24;
        }
    }
    ctx->pc = 0x310984u;
label_310984:
    // 0x310984: 0xc087502  jal         func_21D408
label_310988:
    if (ctx->pc == 0x310988u) {
        ctx->pc = 0x310988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310984u;
        // 0x310988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31098Cu;
        goto label_31098c;
    }
    ctx->pc = 0x310984u;
    SET_GPR_U32(ctx, 31, 0x31098Cu);
    ctx->pc = 0x310988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310984u;
    // 0x310988: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x310984u, 0x31098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31098Cu;
label_31098c:
    // 0x31098c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31098cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_310990:
    // 0x310990: 0xc0a43f4  jal         func_290FD0
label_310994:
    if (ctx->pc == 0x310994u) {
        ctx->pc = 0x310994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310990u;
        // 0x310994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310998u;
        goto label_310998;
    }
    ctx->pc = 0x310990u;
    SET_GPR_U32(ctx, 31, 0x310998u);
    ctx->pc = 0x310994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310990u;
    // 0x310994: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290FD0u, 0x310990u, 0x310998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310998u;
label_310998:
    // 0x310998: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
label_31099c:
    if (ctx->pc == 0x31099Cu) {
        ctx->pc = 0x31099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310998u;
        // 0x31099c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109A0u;
        goto label_3109a0;
    }
    ctx->pc = 0x310998u;
    {
        const bool branch_taken_0x310998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x310998) {
            ctx->pc = 0x31099Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310998u;
            // 0x31099c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x310A24u;
            goto label_310a24;
        }
    }
    ctx->pc = 0x3109A0u;
label_3109a0:
    // 0x3109a0: 0xc087502  jal         func_21D408
label_3109a4:
    if (ctx->pc == 0x3109A4u) {
        ctx->pc = 0x3109A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109A0u;
        // 0x3109a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109A8u;
        goto label_3109a8;
    }
    ctx->pc = 0x3109A0u;
    SET_GPR_U32(ctx, 31, 0x3109A8u);
    ctx->pc = 0x3109A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109A0u;
    // 0x3109a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x3109A0u, 0x3109A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109A8u;
label_3109a8:
    // 0x3109a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3109a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3109ac:
    // 0x3109ac: 0xc0a36c8  jal         func_28DB20
label_3109b0:
    if (ctx->pc == 0x3109B0u) {
        ctx->pc = 0x3109B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109ACu;
        // 0x3109b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109B4u;
        goto label_3109b4;
    }
    ctx->pc = 0x3109ACu;
    SET_GPR_U32(ctx, 31, 0x3109B4u);
    ctx->pc = 0x3109B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109ACu;
    // 0x3109b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x3109ACu, 0x3109B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109B4u;
label_3109b4:
    // 0x3109b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3109b8:
    if (ctx->pc == 0x3109B8u) {
        ctx->pc = 0x3109B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109B4u;
        // 0x3109b8: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109BCu;
        goto label_3109bc;
    }
    ctx->pc = 0x3109B4u;
    {
        const bool branch_taken_0x3109b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109B4u;
        // 0x3109b8: 0x8202002c  lb          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109b4) {
            ctx->pc = 0x3109CCu;
            goto label_3109cc;
        }
    }
    ctx->pc = 0x3109BCu;
label_3109bc:
    // 0x3109bc: 0x0  nop
    ctx->pc = 0x3109bcu;
    // NOP
label_3109c0:
    // 0x3109c0: 0xc0a35f6  jal         func_28D7D8
label_3109c4:
    if (ctx->pc == 0x3109C4u) {
        ctx->pc = 0x3109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109C0u;
        // 0x3109c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109C8u;
        goto label_3109c8;
    }
    ctx->pc = 0x3109C0u;
    SET_GPR_U32(ctx, 31, 0x3109C8u);
    ctx->pc = 0x3109C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109C0u;
    // 0x3109c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x3109C0u, 0x3109C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3109C8u;
label_3109c8:
    // 0x3109c8: 0x8202002c  lb          $v0, 0x2C($s0)
    ctx->pc = 0x3109c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
label_3109cc:
    // 0x3109cc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3109d0:
    if (ctx->pc == 0x3109D0u) {
        ctx->pc = 0x3109D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109CCu;
        // 0x3109d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109D4u;
        goto label_3109d4;
    }
    ctx->pc = 0x3109CCu;
    {
        const bool branch_taken_0x3109cc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3109D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109CCu;
        // 0x3109d0: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109cc) {
            ctx->pc = 0x3109E0u;
            goto label_3109e0;
        }
    }
    ctx->pc = 0x3109D4u;
label_3109d4:
    // 0x3109d4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3109d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3109d8:
    // 0x3109d8: 0x10000002  b           . + 4 + (0x2 << 2)
label_3109dc:
    if (ctx->pc == 0x3109DCu) {
        ctx->pc = 0x3109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109D8u;
        // 0x3109dc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109E0u;
        goto label_3109e0;
    }
    ctx->pc = 0x3109D8u;
    {
        const bool branch_taken_0x3109d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109D8u;
        // 0x3109dc: 0x8c450040  lw          $a1, 0x40($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109d8) {
            ctx->pc = 0x3109E4u;
            goto label_3109e4;
        }
    }
    ctx->pc = 0x3109E0u;
label_3109e0:
    // 0x3109e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3109e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3109e4:
    // 0x3109e4: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x3109e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_3109e8:
    // 0x3109e8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x3109e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_3109ec:
    // 0x3109ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3109ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_3109f0:
    // 0x3109f0: 0x40f809  jalr        $v0
label_3109f4:
    if (ctx->pc == 0x3109F4u) {
        ctx->pc = 0x3109F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109F0u;
        // 0x3109f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3109F8u;
        goto label_3109f8;
    }
    ctx->pc = 0x3109F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3109F8u);
        ctx->pc = 0x3109F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109F0u;
        // 0x3109f4: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3109F0u, 0x3109F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3109F8u;
label_3109f8:
    // 0x3109f8: 0x1456fff1  bne         $v0, $s6, . + 4 + (-0xF << 2)
label_3109fc:
    if (ctx->pc == 0x3109FCu) {
        ctx->pc = 0x310A00u;
        goto label_310a00;
    }
    ctx->pc = 0x3109F8u;
    {
        const bool branch_taken_0x3109f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x3109f8) {
            ctx->pc = 0x3109C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3109c0;
        }
    }
    ctx->pc = 0x310A00u;
label_310a00:
    // 0x310a00: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x310a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_310a04:
    // 0x310a04: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x310a04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_310a08:
    // 0x310a08: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x310a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_310a0c:
    // 0x310a0c: 0x40f809  jalr        $v0
label_310a10:
    if (ctx->pc == 0x310A10u) {
        ctx->pc = 0x310A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A0Cu;
        // 0x310a10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310A14u;
        goto label_310a14;
    }
    ctx->pc = 0x310A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x310A14u);
        ctx->pc = 0x310A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A0Cu;
        // 0x310a10: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310A0Cu, 0x310A14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x310A14u;
label_310a14:
    // 0x310a14: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x310a14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_310a18:
    // 0x310a18: 0xc0adf60  jal         func_2B7D80
label_310a1c:
    if (ctx->pc == 0x310A1Cu) {
        ctx->pc = 0x310A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A18u;
        // 0x310a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310A20u;
        goto label_310a20;
    }
    ctx->pc = 0x310A18u;
    SET_GPR_U32(ctx, 31, 0x310A20u);
    ctx->pc = 0x310A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A18u;
    // 0x310a1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7D80u, 0x310A18u, 0x310A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310A20u;
label_310a20:
    // 0x310a20: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x310a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_310a24:
    // 0x310a24: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x310a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_310a28:
    // 0x310a28: 0x1440ffbf  bnez        $v0, . + 4 + (-0x41 << 2)
label_310a2c:
    if (ctx->pc == 0x310A2Cu) {
        ctx->pc = 0x310A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A28u;
        // 0x310a2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310A30u;
        goto label_310a30;
    }
    ctx->pc = 0x310A28u;
    {
        const bool branch_taken_0x310a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A28u;
        // 0x310a2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a28) {
            ctx->pc = 0x310928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310928;
        }
    }
    ctx->pc = 0x310A30u;
label_310a30:
    // 0x310a30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x310a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_310a34:
    // 0x310a34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x310a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_310a38:
    // 0x310a38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x310a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_310a3c:
    // 0x310a3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x310a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_310a40:
    // 0x310a40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x310a40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_310a44:
    // 0x310a44: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x310a44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_310a48:
    // 0x310a48: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x310a48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_310a4c:
    // 0x310a4c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x310a4cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_310a50:
    // 0x310a50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x310a50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_310a54:
    // 0x310a54: 0x3e00008  jr          $ra
label_310a58:
    if (ctx->pc == 0x310A58u) {
        ctx->pc = 0x310A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A54u;
        // 0x310a58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x310A5Cu;
        goto label_310a5c;
    }
    ctx->pc = 0x310A54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A54u;
        // 0x310a58: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310A54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310A5Cu;
label_310a5c:
    // 0x310a5c: 0x0  nop
    ctx->pc = 0x310a5cu;
    // NOP
    ctx->pc = 0x310a60u;
}
