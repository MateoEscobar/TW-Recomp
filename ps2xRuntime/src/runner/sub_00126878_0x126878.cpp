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

// Function: sub_00126878
// Address: 0x126878 - 0x126a30
void sub_00126878_0x126878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126878_0x126878");
#endif

    switch (ctx->pc) {
        case 0x126878u: goto label_126878;
        case 0x12687cu: goto label_12687c;
        case 0x126880u: goto label_126880;
        case 0x126884u: goto label_126884;
        case 0x126888u: goto label_126888;
        case 0x12688cu: goto label_12688c;
        case 0x126890u: goto label_126890;
        case 0x126894u: goto label_126894;
        case 0x126898u: goto label_126898;
        case 0x12689cu: goto label_12689c;
        case 0x1268a0u: goto label_1268a0;
        case 0x1268a4u: goto label_1268a4;
        case 0x1268a8u: goto label_1268a8;
        case 0x1268acu: goto label_1268ac;
        case 0x1268b0u: goto label_1268b0;
        case 0x1268b4u: goto label_1268b4;
        case 0x1268b8u: goto label_1268b8;
        case 0x1268bcu: goto label_1268bc;
        case 0x1268c0u: goto label_1268c0;
        case 0x1268c4u: goto label_1268c4;
        case 0x1268c8u: goto label_1268c8;
        case 0x1268ccu: goto label_1268cc;
        case 0x1268d0u: goto label_1268d0;
        case 0x1268d4u: goto label_1268d4;
        case 0x1268d8u: goto label_1268d8;
        case 0x1268dcu: goto label_1268dc;
        case 0x1268e0u: goto label_1268e0;
        case 0x1268e4u: goto label_1268e4;
        case 0x1268e8u: goto label_1268e8;
        case 0x1268ecu: goto label_1268ec;
        case 0x1268f0u: goto label_1268f0;
        case 0x1268f4u: goto label_1268f4;
        case 0x1268f8u: goto label_1268f8;
        case 0x1268fcu: goto label_1268fc;
        case 0x126900u: goto label_126900;
        case 0x126904u: goto label_126904;
        case 0x126908u: goto label_126908;
        case 0x12690cu: goto label_12690c;
        case 0x126910u: goto label_126910;
        case 0x126914u: goto label_126914;
        case 0x126918u: goto label_126918;
        case 0x12691cu: goto label_12691c;
        case 0x126920u: goto label_126920;
        case 0x126924u: goto label_126924;
        case 0x126928u: goto label_126928;
        case 0x12692cu: goto label_12692c;
        case 0x126930u: goto label_126930;
        case 0x126934u: goto label_126934;
        case 0x126938u: goto label_126938;
        case 0x12693cu: goto label_12693c;
        case 0x126940u: goto label_126940;
        case 0x126944u: goto label_126944;
        case 0x126948u: goto label_126948;
        case 0x12694cu: goto label_12694c;
        case 0x126950u: goto label_126950;
        case 0x126954u: goto label_126954;
        case 0x126958u: goto label_126958;
        case 0x12695cu: goto label_12695c;
        case 0x126960u: goto label_126960;
        case 0x126964u: goto label_126964;
        case 0x126968u: goto label_126968;
        case 0x12696cu: goto label_12696c;
        case 0x126970u: goto label_126970;
        case 0x126974u: goto label_126974;
        case 0x126978u: goto label_126978;
        case 0x12697cu: goto label_12697c;
        case 0x126980u: goto label_126980;
        case 0x126984u: goto label_126984;
        case 0x126988u: goto label_126988;
        case 0x12698cu: goto label_12698c;
        case 0x126990u: goto label_126990;
        case 0x126994u: goto label_126994;
        case 0x126998u: goto label_126998;
        case 0x12699cu: goto label_12699c;
        case 0x1269a0u: goto label_1269a0;
        case 0x1269a4u: goto label_1269a4;
        case 0x1269a8u: goto label_1269a8;
        case 0x1269acu: goto label_1269ac;
        case 0x1269b0u: goto label_1269b0;
        case 0x1269b4u: goto label_1269b4;
        case 0x1269b8u: goto label_1269b8;
        case 0x1269bcu: goto label_1269bc;
        case 0x1269c0u: goto label_1269c0;
        case 0x1269c4u: goto label_1269c4;
        case 0x1269c8u: goto label_1269c8;
        case 0x1269ccu: goto label_1269cc;
        case 0x1269d0u: goto label_1269d0;
        case 0x1269d4u: goto label_1269d4;
        case 0x1269d8u: goto label_1269d8;
        case 0x1269dcu: goto label_1269dc;
        case 0x1269e0u: goto label_1269e0;
        case 0x1269e4u: goto label_1269e4;
        case 0x1269e8u: goto label_1269e8;
        case 0x1269ecu: goto label_1269ec;
        case 0x1269f0u: goto label_1269f0;
        case 0x1269f4u: goto label_1269f4;
        case 0x1269f8u: goto label_1269f8;
        case 0x1269fcu: goto label_1269fc;
        case 0x126a00u: goto label_126a00;
        case 0x126a04u: goto label_126a04;
        case 0x126a08u: goto label_126a08;
        case 0x126a0cu: goto label_126a0c;
        case 0x126a10u: goto label_126a10;
        case 0x126a14u: goto label_126a14;
        case 0x126a18u: goto label_126a18;
        case 0x126a1cu: goto label_126a1c;
        case 0x126a20u: goto label_126a20;
        case 0x126a24u: goto label_126a24;
        case 0x126a28u: goto label_126a28;
        case 0x126a2cu: goto label_126a2c;
        default: break;
    }

    ctx->pc = 0x126878u;

label_126878:
    // 0x126878: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x126878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_12687c:
    // 0x12687c: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x12687cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
label_126880:
    // 0x126880: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x126880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_126884:
    // 0x126884: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x126884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_126888:
    // 0x126888: 0x8c46489c  lw          $a2, 0x489C($v0)
    ctx->pc = 0x126888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
label_12688c:
    // 0x12688c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12688cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_126890:
    // 0x126890: 0xc4608aa8  lwc1        $f0, -0x7558($v1)
    ctx->pc = 0x126890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_126894:
    // 0x126894: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x126894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_126898:
    // 0x126898: 0x24c40228  addiu       $a0, $a2, 0x228
    ctx->pc = 0x126898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 552));
label_12689c:
    // 0x12689c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12689cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1268a0:
    // 0x1268a0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1268a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_1268a4:
    // 0x1268a4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1268a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1268a8:
    // 0x1268a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1268a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1268ac:
    // 0x1268ac: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1268acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1268b0:
    // 0x1268b0: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x1268b0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_1268b4:
    // 0x1268b4: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1268b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1268b8:
    // 0x1268b8: 0xc0e409a  jal         func_390268
label_1268bc:
    if (ctx->pc == 0x1268BCu) {
        ctx->pc = 0x1268BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268B8u;
        // 0x1268bc: 0xe62003f0  swc1        $f0, 0x3F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1008), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268C0u;
        goto label_1268c0;
    }
    ctx->pc = 0x1268B8u;
    SET_GPR_U32(ctx, 31, 0x1268C0u);
    ctx->pc = 0x1268BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268B8u;
    // 0x1268bc: 0xe62003f0  swc1        $f0, 0x3F0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1008), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x1268B8u, 0x1268C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268C0u;
label_1268c0:
    // 0x1268c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1268c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1268c4:
    // 0x1268c4: 0x52000050  beql        $s0, $zero, . + 4 + (0x50 << 2)
label_1268c8:
    if (ctx->pc == 0x1268C8u) {
        ctx->pc = 0x1268C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268C4u;
        // 0x1268c8: 0xa2200465  sb          $zero, 0x465($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1125), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268CCu;
        goto label_1268cc;
    }
    ctx->pc = 0x1268C4u;
    {
        const bool branch_taken_0x1268c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1268c4) {
            ctx->pc = 0x1268C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1268C4u;
            // 0x1268c8: 0xa2200465  sb          $zero, 0x465($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 1125), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126A08u;
            goto label_126a08;
        }
    }
    ctx->pc = 0x1268CCu;
label_1268cc:
    // 0x1268cc: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_1268d0:
    if (ctx->pc == 0x1268D0u) {
        ctx->pc = 0x1268D4u;
        goto label_1268d4;
    }
    ctx->pc = 0x1268CCu;
    {
        const bool branch_taken_0x1268cc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1268cc) {
            ctx->pc = 0x1268DCu;
            goto label_1268dc;
        }
    }
    ctx->pc = 0x1268D4u;
label_1268d4:
    // 0x1268d4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1268d8:
    if (ctx->pc == 0x1268D8u) {
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D4u;
        // 0x1268d8: 0xa2200465  sb          $zero, 0x465($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1125), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268DCu;
        goto label_1268dc;
    }
    ctx->pc = 0x1268D4u;
    {
        const bool branch_taken_0x1268d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1268D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268D4u;
        // 0x1268d8: 0xa2200465  sb          $zero, 0x465($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1125), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1268d4) {
            ctx->pc = 0x126A08u;
            goto label_126a08;
        }
    }
    ctx->pc = 0x1268DCu;
label_1268dc:
    // 0x1268dc: 0xc048892  jal         func_122248
label_1268e0:
    if (ctx->pc == 0x1268E0u) {
        ctx->pc = 0x1268E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268DCu;
        // 0x1268e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268E4u;
        goto label_1268e4;
    }
    ctx->pc = 0x1268DCu;
    SET_GPR_U32(ctx, 31, 0x1268E4u);
    ctx->pc = 0x1268E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268DCu;
    // 0x1268e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x1268DCu, 0x1268E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1268E4u;
label_1268e4:
    // 0x1268e4: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_1268e8:
    if (ctx->pc == 0x1268E8u) {
        ctx->pc = 0x1268E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268E4u;
        // 0x1268e8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268ECu;
        goto label_1268ec;
    }
    ctx->pc = 0x1268E4u;
    {
        const bool branch_taken_0x1268e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1268e4) {
            ctx->pc = 0x1268E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1268E4u;
            // 0x1268e8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126924u;
            goto label_126924;
        }
    }
    ctx->pc = 0x1268ECu;
label_1268ec:
    // 0x1268ec: 0x92220465  lbu         $v0, 0x465($s1)
    ctx->pc = 0x1268ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1125)));
label_1268f0:
    // 0x1268f0: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_1268f4:
    if (ctx->pc == 0x1268F4u) {
        ctx->pc = 0x1268F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268F0u;
        // 0x1268f4: 0xc63403d8  lwc1        $f20, 0x3D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1268F8u;
        goto label_1268f8;
    }
    ctx->pc = 0x1268F0u;
    {
        const bool branch_taken_0x1268f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1268f0) {
            ctx->pc = 0x1268F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1268F0u;
            // 0x1268f4: 0xc63403d8  lwc1        $f20, 0x3D8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12695Cu;
            goto label_12695c;
        }
    }
    ctx->pc = 0x1268F8u;
label_1268f8:
    // 0x1268f8: 0xc048892  jal         func_122248
label_1268fc:
    if (ctx->pc == 0x1268FCu) {
        ctx->pc = 0x1268FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1268F8u;
        // 0x1268fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126900u;
        goto label_126900;
    }
    ctx->pc = 0x1268F8u;
    SET_GPR_U32(ctx, 31, 0x126900u);
    ctx->pc = 0x1268FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1268F8u;
    // 0x1268fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122248u, 0x1268F8u, 0x126900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126900u;
label_126900:
    // 0x126900: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_126904:
    if (ctx->pc == 0x126904u) {
        ctx->pc = 0x126904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126900u;
        // 0x126904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126908u;
        goto label_126908;
    }
    ctx->pc = 0x126900u;
    {
        const bool branch_taken_0x126900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126900u;
        // 0x126904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126900) {
            ctx->pc = 0x126A08u;
            goto label_126a08;
        }
    }
    ctx->pc = 0x126908u;
label_126908:
    // 0x126908: 0xc04890e  jal         func_122438
label_12690c:
    if (ctx->pc == 0x12690Cu) {
        ctx->pc = 0x12690Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126908u;
        // 0x12690c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126910u;
        goto label_126910;
    }
    ctx->pc = 0x126908u;
    SET_GPR_U32(ctx, 31, 0x126910u);
    ctx->pc = 0x12690Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126908u;
    // 0x12690c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122438u, 0x126908u, 0x126910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x126910u;
label_126910:
    // 0x126910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_126914:
    // 0x126914: 0xc0488ac  jal         func_1222B0
label_126918:
    if (ctx->pc == 0x126918u) {
        ctx->pc = 0x126918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126914u;
        // 0x126918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12691Cu;
        goto label_12691c;
    }
    ctx->pc = 0x126914u;
    SET_GPR_U32(ctx, 31, 0x12691Cu);
    ctx->pc = 0x126918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126914u;
    // 0x126918: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1222B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1222B0u, 0x126914u, 0x12691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12691Cu;
label_12691c:
    // 0x12691c: 0x1000000f  b           . + 4 + (0xF << 2)
label_126920:
    if (ctx->pc == 0x126920u) {
        ctx->pc = 0x126920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12691Cu;
        // 0x126920: 0xc63403d8  lwc1        $f20, 0x3D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126924u;
        goto label_126924;
    }
    ctx->pc = 0x12691Cu;
    {
        const bool branch_taken_0x12691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x126920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12691Cu;
        // 0x126920: 0xc63403d8  lwc1        $f20, 0x3D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12691c) {
            ctx->pc = 0x12695Cu;
            goto label_12695c;
        }
    }
    ctx->pc = 0x126924u;
label_126924:
    // 0x126924: 0x8e300320  lw          $s0, 0x320($s1)
    ctx->pc = 0x126924u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 800)));
label_126928:
    // 0x126928: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x126928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_12692c:
    // 0x12692c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x12692cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_126930:
    // 0x126930: 0x40f809  jalr        $v0
label_126934:
    if (ctx->pc == 0x126934u) {
        ctx->pc = 0x126934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126930u;
        // 0x126934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126938u;
        goto label_126938;
    }
    ctx->pc = 0x126930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x126938u);
        ctx->pc = 0x126934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126930u;
        // 0x126934: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126930u, 0x126938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x126938u;
label_126938:
    // 0x126938: 0x56020008  bnel        $s0, $v0, . + 4 + (0x8 << 2)
label_12693c:
    if (ctx->pc == 0x12693Cu) {
        ctx->pc = 0x12693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126938u;
        // 0x12693c: 0xc63403d8  lwc1        $f20, 0x3D8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x126940u;
        goto label_126940;
    }
    ctx->pc = 0x126938u;
    {
        const bool branch_taken_0x126938 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x126938) {
            ctx->pc = 0x12693Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126938u;
            // 0x12693c: 0xc63403d8  lwc1        $f20, 0x3D8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12695Cu;
            goto label_12695c;
        }
    }
    ctx->pc = 0x126940u;
label_126940:
    // 0x126940: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x126940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_126944:
    // 0x126944: 0x8c44bd30  lw          $a0, -0x42D0($v0)
    ctx->pc = 0x126944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_126948:
    // 0x126948: 0xae240320  sw          $a0, 0x320($s1)
    ctx->pc = 0x126948u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 800), GPR_U32(ctx, 4));
label_12694c:
    // 0x12694c: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x12694cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_126950:
    // 0x126950: 0x50830001  beql        $a0, $v1, . + 4 + (0x1 << 2)
label_126954:
    if (ctx->pc == 0x126954u) {
        ctx->pc = 0x126954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126950u;
        // 0x126954: 0xae2003fc  sw          $zero, 0x3FC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126958u;
        goto label_126958;
    }
    ctx->pc = 0x126950u;
    {
        const bool branch_taken_0x126950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x126950) {
            ctx->pc = 0x126954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x126950u;
            // 0x126954: 0xae2003fc  sw          $zero, 0x3FC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1020), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x126958u;
            goto label_126958;
        }
    }
    ctx->pc = 0x126958u;
label_126958:
    // 0x126958: 0xc63403d8  lwc1        $f20, 0x3D8($s1)
    ctx->pc = 0x126958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12695c:
    // 0x12695c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12695cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_126960:
    // 0x126960: 0x0  nop
    ctx->pc = 0x126960u;
    // NOP
label_126964:
    // 0x126964: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x126964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_126968:
    // 0x126968: 0x0  nop
    ctx->pc = 0x126968u;
    // NOP
label_12696c:
    // 0x12696c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_126970:
    if (ctx->pc == 0x126970u) {
        ctx->pc = 0x126970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12696Cu;
        // 0x126970: 0xa2200465  sb          $zero, 0x465($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1125), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126974u;
        goto label_126974;
    }
    ctx->pc = 0x12696Cu;
    {
        const bool branch_taken_0x12696c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x126970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12696Cu;
        // 0x126970: 0xa2200465  sb          $zero, 0x465($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1125), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12696c) {
            ctx->pc = 0x1269A0u;
            goto label_1269a0;
        }
    }
    ctx->pc = 0x126974u;
label_126974:
    // 0x126974: 0xe6340394  swc1        $f20, 0x394($s1)
    ctx->pc = 0x126974u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 916), bits); }
label_126978:
    // 0x126978: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x126978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_12697c:
    // 0x12697c: 0x844401f0  lh          $a0, 0x1F0($v0)
    ctx->pc = 0x12697cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 496)));
label_126980:
    // 0x126980: 0x8c4301f4  lw          $v1, 0x1F4($v0)
    ctx->pc = 0x126980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 500)));
label_126984:
    // 0x126984: 0x60f809  jalr        $v1
label_126988:
    if (ctx->pc == 0x126988u) {
        ctx->pc = 0x126988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126984u;
        // 0x126988: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12698Cu;
        goto label_12698c;
    }
    ctx->pc = 0x126984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x12698Cu);
        ctx->pc = 0x126988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126984u;
        // 0x126988: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126984u, 0x12698Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12698Cu;
label_12698c:
    // 0x12698c: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x12698cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_126990:
    // 0x126990: 0xc6618aa8  lwc1        $f1, -0x7558($s3)
    ctx->pc = 0x126990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_126994:
    // 0x126994: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x126994u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_126998:
    // 0x126998: 0xe620039c  swc1        $f0, 0x39C($s1)
    ctx->pc = 0x126998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 924), bits); }
label_12699c:
    // 0x12699c: 0xe62103d8  swc1        $f1, 0x3D8($s1)
    ctx->pc = 0x12699cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 984), bits); }
label_1269a0:
    // 0x1269a0: 0xc6618aa8  lwc1        $f1, -0x7558($s3)
    ctx->pc = 0x1269a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294937256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1269a4:
    // 0x1269a4: 0xc62003d0  lwc1        $f0, 0x3D0($s1)
    ctx->pc = 0x1269a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1269a8:
    // 0x1269a8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1269a8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1269ac:
    // 0x1269ac: 0x0  nop
    ctx->pc = 0x1269acu;
    // NOP
label_1269b0:
    // 0x1269b0: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
label_1269b4:
    if (ctx->pc == 0x1269B4u) {
        ctx->pc = 0x1269B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269B0u;
        // 0x1269b4: 0xc62003c8  lwc1        $f0, 0x3C8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1269B8u;
        goto label_1269b8;
    }
    ctx->pc = 0x1269B0u;
    {
        const bool branch_taken_0x1269b0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1269b0) {
            ctx->pc = 0x1269B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1269B0u;
            // 0x1269b4: 0xc62003c8  lwc1        $f0, 0x3C8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1269C4u;
            goto label_1269c4;
        }
    }
    ctx->pc = 0x1269B8u;
label_1269b8:
    // 0x1269b8: 0xe62003b4  swc1        $f0, 0x3B4($s1)
    ctx->pc = 0x1269b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 948), bits); }
label_1269bc:
    // 0x1269bc: 0xe62103d0  swc1        $f1, 0x3D0($s1)
    ctx->pc = 0x1269bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 976), bits); }
label_1269c0:
    // 0x1269c0: 0xc62003c8  lwc1        $f0, 0x3C8($s1)
    ctx->pc = 0x1269c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1269c4:
    // 0x1269c4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x1269c4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1269c8:
    // 0x1269c8: 0x0  nop
    ctx->pc = 0x1269c8u;
    // NOP
label_1269cc:
    // 0x1269cc: 0x4501000f  bc1t        . + 4 + (0xF << 2)
label_1269d0:
    if (ctx->pc == 0x1269D0u) {
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1269D4u;
        goto label_1269d4;
    }
    ctx->pc = 0x1269CCu;
    {
        const bool branch_taken_0x1269cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1269D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269CCu;
        // 0x1269d0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1269cc) {
            ctx->pc = 0x126A0Cu;
            goto label_126a0c;
        }
    }
    ctx->pc = 0x1269D4u;
label_1269d4:
    // 0x1269d4: 0xc6200300  lwc1        $f0, 0x300($s1)
    ctx->pc = 0x1269d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1269d8:
    // 0x1269d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1269d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1269dc:
    // 0x1269dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1269dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1269e0:
    // 0x1269e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1269e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1269e4:
    // 0x1269e4: 0xc04967a  jal         func_1259E8
label_1269e8:
    if (ctx->pc == 0x1269E8u) {
        ctx->pc = 0x1269E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1269E4u;
        // 0x1269e8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1269ECu;
        goto label_1269ec;
    }
    ctx->pc = 0x1269E4u;
    SET_GPR_U32(ctx, 31, 0x1269ECu);
    ctx->pc = 0x1269E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1269E4u;
    // 0x1269e8: 0x460c0300  add.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1259E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1259E8u, 0x1269E4u, 0x1269ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1269ECu;
label_1269ec:
    // 0x1269ec: 0xc62103c8  lwc1        $f1, 0x3C8($s1)
    ctx->pc = 0x1269ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1269f0:
    // 0x1269f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1269f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1269f4:
    // 0x1269f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1269f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1269f8:
    // 0x1269f8: 0xe63503c8  swc1        $f21, 0x3C8($s1)
    ctx->pc = 0x1269f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 968), bits); }
label_1269fc:
    // 0x1269fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1269fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_126a00:
    // 0x126a00: 0xe621032c  swc1        $f1, 0x32C($s1)
    ctx->pc = 0x126a00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 812), bits); }
label_126a04:
    // 0x126a04: 0xe6200330  swc1        $f0, 0x330($s1)
    ctx->pc = 0x126a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 816), bits); }
label_126a08:
    // 0x126a08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x126a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_126a0c:
    // 0x126a0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x126a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_126a10:
    // 0x126a10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x126a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_126a14:
    // 0x126a14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x126a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_126a18:
    // 0x126a18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126a18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_126a1c:
    // 0x126a1c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x126a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_126a20:
    // 0x126a20: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x126a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_126a24:
    // 0x126a24: 0x3e00008  jr          $ra
label_126a28:
    if (ctx->pc == 0x126A28u) {
        ctx->pc = 0x126A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A24u;
        // 0x126a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x126A2Cu;
        goto label_126a2c;
    }
    ctx->pc = 0x126A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A24u;
        // 0x126a28: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A2Cu;
label_126a2c:
    // 0x126a2c: 0x0  nop
    ctx->pc = 0x126a2cu;
    // NOP
    ctx->pc = 0x126a30u;
}
