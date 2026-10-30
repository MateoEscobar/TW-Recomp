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

// Function: sub_003DE8F8
// Address: 0x3de8f8 - 0x3dea50
void sub_003DE8F8_0x3de8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DE8F8_0x3de8f8");
#endif

    switch (ctx->pc) {
        case 0x3de8f8u: goto label_3de8f8;
        case 0x3de8fcu: goto label_3de8fc;
        case 0x3de900u: goto label_3de900;
        case 0x3de904u: goto label_3de904;
        case 0x3de908u: goto label_3de908;
        case 0x3de90cu: goto label_3de90c;
        case 0x3de910u: goto label_3de910;
        case 0x3de914u: goto label_3de914;
        case 0x3de918u: goto label_3de918;
        case 0x3de91cu: goto label_3de91c;
        case 0x3de920u: goto label_3de920;
        case 0x3de924u: goto label_3de924;
        case 0x3de928u: goto label_3de928;
        case 0x3de92cu: goto label_3de92c;
        case 0x3de930u: goto label_3de930;
        case 0x3de934u: goto label_3de934;
        case 0x3de938u: goto label_3de938;
        case 0x3de93cu: goto label_3de93c;
        case 0x3de940u: goto label_3de940;
        case 0x3de944u: goto label_3de944;
        case 0x3de948u: goto label_3de948;
        case 0x3de94cu: goto label_3de94c;
        case 0x3de950u: goto label_3de950;
        case 0x3de954u: goto label_3de954;
        case 0x3de958u: goto label_3de958;
        case 0x3de95cu: goto label_3de95c;
        case 0x3de960u: goto label_3de960;
        case 0x3de964u: goto label_3de964;
        case 0x3de968u: goto label_3de968;
        case 0x3de96cu: goto label_3de96c;
        case 0x3de970u: goto label_3de970;
        case 0x3de974u: goto label_3de974;
        case 0x3de978u: goto label_3de978;
        case 0x3de97cu: goto label_3de97c;
        case 0x3de980u: goto label_3de980;
        case 0x3de984u: goto label_3de984;
        case 0x3de988u: goto label_3de988;
        case 0x3de98cu: goto label_3de98c;
        case 0x3de990u: goto label_3de990;
        case 0x3de994u: goto label_3de994;
        case 0x3de998u: goto label_3de998;
        case 0x3de99cu: goto label_3de99c;
        case 0x3de9a0u: goto label_3de9a0;
        case 0x3de9a4u: goto label_3de9a4;
        case 0x3de9a8u: goto label_3de9a8;
        case 0x3de9acu: goto label_3de9ac;
        case 0x3de9b0u: goto label_3de9b0;
        case 0x3de9b4u: goto label_3de9b4;
        case 0x3de9b8u: goto label_3de9b8;
        case 0x3de9bcu: goto label_3de9bc;
        case 0x3de9c0u: goto label_3de9c0;
        case 0x3de9c4u: goto label_3de9c4;
        case 0x3de9c8u: goto label_3de9c8;
        case 0x3de9ccu: goto label_3de9cc;
        case 0x3de9d0u: goto label_3de9d0;
        case 0x3de9d4u: goto label_3de9d4;
        case 0x3de9d8u: goto label_3de9d8;
        case 0x3de9dcu: goto label_3de9dc;
        case 0x3de9e0u: goto label_3de9e0;
        case 0x3de9e4u: goto label_3de9e4;
        case 0x3de9e8u: goto label_3de9e8;
        case 0x3de9ecu: goto label_3de9ec;
        case 0x3de9f0u: goto label_3de9f0;
        case 0x3de9f4u: goto label_3de9f4;
        case 0x3de9f8u: goto label_3de9f8;
        case 0x3de9fcu: goto label_3de9fc;
        case 0x3dea00u: goto label_3dea00;
        case 0x3dea04u: goto label_3dea04;
        case 0x3dea08u: goto label_3dea08;
        case 0x3dea0cu: goto label_3dea0c;
        case 0x3dea10u: goto label_3dea10;
        case 0x3dea14u: goto label_3dea14;
        case 0x3dea18u: goto label_3dea18;
        case 0x3dea1cu: goto label_3dea1c;
        case 0x3dea20u: goto label_3dea20;
        case 0x3dea24u: goto label_3dea24;
        case 0x3dea28u: goto label_3dea28;
        case 0x3dea2cu: goto label_3dea2c;
        case 0x3dea30u: goto label_3dea30;
        case 0x3dea34u: goto label_3dea34;
        case 0x3dea38u: goto label_3dea38;
        case 0x3dea3cu: goto label_3dea3c;
        case 0x3dea40u: goto label_3dea40;
        case 0x3dea44u: goto label_3dea44;
        case 0x3dea48u: goto label_3dea48;
        case 0x3dea4cu: goto label_3dea4c;
        default: break;
    }

    ctx->pc = 0x3de8f8u;

label_3de8f8:
    // 0x3de8f8: 0x27bdfb20  addiu       $sp, $sp, -0x4E0
    ctx->pc = 0x3de8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966048));
label_3de8fc:
    // 0x3de8fc: 0x7fb004c0  sq          $s0, 0x4C0($sp)
    ctx->pc = 0x3de8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 16));
label_3de900:
    // 0x3de900: 0x7fb104b0  sq          $s1, 0x4B0($sp)
    ctx->pc = 0x3de900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 17));
label_3de904:
    // 0x3de904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3de904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3de908:
    // 0x3de908: 0x7fb204a0  sq          $s2, 0x4A0($sp)
    ctx->pc = 0x3de908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 18));
label_3de90c:
    // 0x3de90c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3de90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3de910:
    // 0x3de910: 0x7fb30490  sq          $s3, 0x490($sp)
    ctx->pc = 0x3de910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 19));
label_3de914:
    // 0x3de914: 0x7fb40480  sq          $s4, 0x480($sp)
    ctx->pc = 0x3de914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 20));
label_3de918:
    // 0x3de918: 0x7fb50470  sq          $s5, 0x470($sp)
    ctx->pc = 0x3de918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 21));
label_3de91c:
    // 0x3de91c: 0x7fb60460  sq          $s6, 0x460($sp)
    ctx->pc = 0x3de91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1120), GPR_VEC(ctx, 22));
label_3de920:
    // 0x3de920: 0xffbf0450  sd          $ra, 0x450($sp)
    ctx->pc = 0x3de920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1104), GPR_U64(ctx, 31));
label_3de924:
    // 0x3de924: 0xe7b404d0  swc1        $f20, 0x4D0($sp)
    ctx->pc = 0x3de924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1232), bits); }
label_3de928:
    // 0x3de928: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x3de928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_3de92c:
    // 0x3de92c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3de92cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3de930:
    // 0x3de930: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3de930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3de934:
    // 0x3de934: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3de934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3de938:
    // 0x3de938: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3de938u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3de93c:
    // 0x3de93c: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3de93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3de940:
    // 0x3de940: 0x40f809  jalr        $v0
label_3de944:
    if (ctx->pc == 0x3DE944u) {
        ctx->pc = 0x3DE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE940u;
        // 0x3de944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE948u;
        goto label_3de948;
    }
    ctx->pc = 0x3DE940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DE948u);
        ctx->pc = 0x3DE944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE940u;
        // 0x3de944: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DE940u, 0x3DE948u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DE948u;
label_3de948:
    // 0x3de948: 0x24030804  addiu       $v1, $zero, 0x804
    ctx->pc = 0x3de948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2052));
label_3de94c:
    // 0x3de94c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3de94cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de950:
    // 0x3de950: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x3de950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_3de954:
    // 0x3de954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3de954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3de958:
    // 0x3de958: 0xc0e858c  jal         func_3A1630
label_3de95c:
    if (ctx->pc == 0x3DE95Cu) {
        ctx->pc = 0x3DE95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE958u;
        // 0x3de95c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE960u;
        goto label_3de960;
    }
    ctx->pc = 0x3DE958u;
    SET_GPR_U32(ctx, 31, 0x3DE960u);
    ctx->pc = 0x3DE95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE958u;
    // 0x3de95c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DE958u, 0x3DE960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE960u;
label_3de960:
    // 0x3de960: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3de960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3de964:
    // 0x3de964: 0xc0ea12a  jal         func_3A84A8
label_3de968:
    if (ctx->pc == 0x3DE968u) {
        ctx->pc = 0x3DE968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE964u;
        // 0x3de968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE96Cu;
        goto label_3de96c;
    }
    ctx->pc = 0x3DE964u;
    SET_GPR_U32(ctx, 31, 0x3DE96Cu);
    ctx->pc = 0x3DE968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE964u;
    // 0x3de968: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DE964u, 0x3DE96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE96Cu;
label_3de96c:
    // 0x3de96c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3de96cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3de970:
    // 0x3de970: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x3de970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3de974:
    // 0x3de974: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x3de974u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
label_3de978:
    // 0x3de978: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x3de978u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3de97c:
    // 0x3de97c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x3de97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_3de980:
    // 0x3de980: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3de980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3de984:
    // 0x3de984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3de984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3de988:
    // 0x3de988: 0x8e070054  lw          $a3, 0x54($s0)
    ctx->pc = 0x3de988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3de98c:
    // 0x3de98c: 0x3c040007  lui         $a0, 0x7
    ctx->pc = 0x3de98cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7 << 16));
label_3de990:
    // 0x3de990: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3de990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3de994:
    // 0x3de994: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x3de994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3de998:
    // 0x3de998: 0xc0e93a2  jal         func_3A4E88
label_3de99c:
    if (ctx->pc == 0x3DE99Cu) {
        ctx->pc = 0x3DE99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE998u;
        // 0x3de99c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE9A0u;
        goto label_3de9a0;
    }
    ctx->pc = 0x3DE998u;
    SET_GPR_U32(ctx, 31, 0x3DE9A0u);
    ctx->pc = 0x3DE99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE998u;
    // 0x3de99c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4E88u, 0x3DE998u, 0x3DE9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9A0u;
label_3de9a0:
    // 0x3de9a0: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3de9a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3de9a4:
    // 0x3de9a4: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x3de9a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3de9a8:
    // 0x3de9a8: 0x27b30430  addiu       $s3, $sp, 0x430
    ctx->pc = 0x3de9a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 1072));
label_3de9ac:
    // 0x3de9ac: 0x27b40440  addiu       $s4, $sp, 0x440
    ctx->pc = 0x3de9acu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3de9b0:
    // 0x3de9b0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3de9b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3de9b4:
    // 0x3de9b4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3de9b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3de9b8:
    // 0x3de9b8: 0xe7b40430  swc1        $f20, 0x430($sp)
    ctx->pc = 0x3de9b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3de9bc:
    // 0x3de9bc: 0x261052b0  addiu       $s0, $s0, 0x52B0
    ctx->pc = 0x3de9bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21168));
label_3de9c0:
    // 0x3de9c0: 0xafb50440  sw          $s5, 0x440($sp)
    ctx->pc = 0x3de9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 21));
label_3de9c4:
    // 0x3de9c4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3de9c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de9c8:
    // 0x3de9c8: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x3de9c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_3de9cc:
    // 0x3de9cc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3de9ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3de9d0:
    // 0x3de9d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3de9d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de9d4:
    // 0x3de9d4: 0xc0e9fa6  jal         func_3A7E98
label_3de9d8:
    if (ctx->pc == 0x3DE9D8u) {
        ctx->pc = 0x3DE9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9D4u;
        // 0x3de9d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE9DCu;
        goto label_3de9dc;
    }
    ctx->pc = 0x3DE9D4u;
    SET_GPR_U32(ctx, 31, 0x3DE9DCu);
    ctx->pc = 0x3DE9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9D4u;
    // 0x3de9d8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DE9D4u, 0x3DE9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9DCu;
label_3de9dc:
    // 0x3de9dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3de9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3de9e0:
    // 0x3de9e0: 0xc0f15bc  jal         func_3C56F0
label_3de9e4:
    if (ctx->pc == 0x3DE9E4u) {
        ctx->pc = 0x3DE9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DE9E0u;
        // 0x3de9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DE9E8u;
        goto label_3de9e8;
    }
    ctx->pc = 0x3DE9E0u;
    SET_GPR_U32(ctx, 31, 0x3DE9E8u);
    ctx->pc = 0x3DE9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DE9E0u;
    // 0x3de9e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DE9E0u, 0x3DE9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DE9E8u;
label_3de9e8:
    // 0x3de9e8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x3de9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_3de9ec:
    // 0x3de9ec: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3de9ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3de9f0:
    // 0x3de9f0: 0xe7b40430  swc1        $f20, 0x430($sp)
    ctx->pc = 0x3de9f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1072), bits); }
label_3de9f4:
    // 0x3de9f4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3de9f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3de9f8:
    // 0x3de9f8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x3de9f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3de9fc:
    // 0x3de9fc: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x3de9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_3dea00:
    // 0x3dea00: 0xafb50440  sw          $s5, 0x440($sp)
    ctx->pc = 0x3dea00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1088), GPR_U32(ctx, 21));
label_3dea04:
    // 0x3dea04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3dea04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3dea08:
    // 0x3dea08: 0xc0e9fa6  jal         func_3A7E98
label_3dea0c:
    if (ctx->pc == 0x3DEA0Cu) {
        ctx->pc = 0x3DEA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA08u;
        // 0x3dea0c: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEA10u;
        goto label_3dea10;
    }
    ctx->pc = 0x3DEA08u;
    SET_GPR_U32(ctx, 31, 0x3DEA10u);
    ctx->pc = 0x3DEA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA08u;
    // 0x3dea0c: 0x7fa20420  sq          $v0, 0x420($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 1056), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3DEA08u, 0x3DEA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA10u;
label_3dea10:
    // 0x3dea10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3dea10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3dea14:
    // 0x3dea14: 0xc0f15bc  jal         func_3C56F0
label_3dea18:
    if (ctx->pc == 0x3DEA18u) {
        ctx->pc = 0x3DEA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA14u;
        // 0x3dea18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEA1Cu;
        goto label_3dea1c;
    }
    ctx->pc = 0x3DEA14u;
    SET_GPR_U32(ctx, 31, 0x3DEA1Cu);
    ctx->pc = 0x3DEA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DEA14u;
    // 0x3dea18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3DEA14u, 0x3DEA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DEA1Cu;
label_3dea1c:
    // 0x3dea1c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x3dea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_3dea20:
    // 0x3dea20: 0x7bb004c0  lq          $s0, 0x4C0($sp)
    ctx->pc = 0x3dea20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_3dea24:
    // 0x3dea24: 0x7bb104b0  lq          $s1, 0x4B0($sp)
    ctx->pc = 0x3dea24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_3dea28:
    // 0x3dea28: 0x7bb204a0  lq          $s2, 0x4A0($sp)
    ctx->pc = 0x3dea28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_3dea2c:
    // 0x3dea2c: 0x7bb30490  lq          $s3, 0x490($sp)
    ctx->pc = 0x3dea2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3dea30:
    // 0x3dea30: 0x7bb40480  lq          $s4, 0x480($sp)
    ctx->pc = 0x3dea30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3dea34:
    // 0x3dea34: 0x7bb50470  lq          $s5, 0x470($sp)
    ctx->pc = 0x3dea34u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3dea38:
    // 0x3dea38: 0x7bb60460  lq          $s6, 0x460($sp)
    ctx->pc = 0x3dea38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1120)));
label_3dea3c:
    // 0x3dea3c: 0xdfbf0450  ld          $ra, 0x450($sp)
    ctx->pc = 0x3dea3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1104)));
label_3dea40:
    // 0x3dea40: 0xc7b404d0  lwc1        $f20, 0x4D0($sp)
    ctx->pc = 0x3dea40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dea44:
    // 0x3dea44: 0x3e00008  jr          $ra
label_3dea48:
    if (ctx->pc == 0x3DEA48u) {
        ctx->pc = 0x3DEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA44u;
        // 0x3dea48: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DEA4Cu;
        goto label_3dea4c;
    }
    ctx->pc = 0x3DEA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DEA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DEA44u;
        // 0x3dea48: 0x27bd04e0  addiu       $sp, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DEA44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DEA4Cu;
label_3dea4c:
    // 0x3dea4c: 0x0  nop
    ctx->pc = 0x3dea4cu;
    // NOP
    ctx->pc = 0x3dea50u;
}
