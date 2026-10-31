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

// Function: sub_0017A8D8
// Address: 0x17a8d8 - 0x17ab78
void sub_0017A8D8_0x17a8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A8D8_0x17a8d8");
#endif

    switch (ctx->pc) {
        case 0x17a8d8u: goto label_17a8d8;
        case 0x17a8dcu: goto label_17a8dc;
        case 0x17a8e0u: goto label_17a8e0;
        case 0x17a8e4u: goto label_17a8e4;
        case 0x17a8e8u: goto label_17a8e8;
        case 0x17a8ecu: goto label_17a8ec;
        case 0x17a8f0u: goto label_17a8f0;
        case 0x17a8f4u: goto label_17a8f4;
        case 0x17a8f8u: goto label_17a8f8;
        case 0x17a8fcu: goto label_17a8fc;
        case 0x17a900u: goto label_17a900;
        case 0x17a904u: goto label_17a904;
        case 0x17a908u: goto label_17a908;
        case 0x17a90cu: goto label_17a90c;
        case 0x17a910u: goto label_17a910;
        case 0x17a914u: goto label_17a914;
        case 0x17a918u: goto label_17a918;
        case 0x17a91cu: goto label_17a91c;
        case 0x17a920u: goto label_17a920;
        case 0x17a924u: goto label_17a924;
        case 0x17a928u: goto label_17a928;
        case 0x17a92cu: goto label_17a92c;
        case 0x17a930u: goto label_17a930;
        case 0x17a934u: goto label_17a934;
        case 0x17a938u: goto label_17a938;
        case 0x17a93cu: goto label_17a93c;
        case 0x17a940u: goto label_17a940;
        case 0x17a944u: goto label_17a944;
        case 0x17a948u: goto label_17a948;
        case 0x17a94cu: goto label_17a94c;
        case 0x17a950u: goto label_17a950;
        case 0x17a954u: goto label_17a954;
        case 0x17a958u: goto label_17a958;
        case 0x17a95cu: goto label_17a95c;
        case 0x17a960u: goto label_17a960;
        case 0x17a964u: goto label_17a964;
        case 0x17a968u: goto label_17a968;
        case 0x17a96cu: goto label_17a96c;
        case 0x17a970u: goto label_17a970;
        case 0x17a974u: goto label_17a974;
        case 0x17a978u: goto label_17a978;
        case 0x17a97cu: goto label_17a97c;
        case 0x17a980u: goto label_17a980;
        case 0x17a984u: goto label_17a984;
        case 0x17a988u: goto label_17a988;
        case 0x17a98cu: goto label_17a98c;
        case 0x17a990u: goto label_17a990;
        case 0x17a994u: goto label_17a994;
        case 0x17a998u: goto label_17a998;
        case 0x17a99cu: goto label_17a99c;
        case 0x17a9a0u: goto label_17a9a0;
        case 0x17a9a4u: goto label_17a9a4;
        case 0x17a9a8u: goto label_17a9a8;
        case 0x17a9acu: goto label_17a9ac;
        case 0x17a9b0u: goto label_17a9b0;
        case 0x17a9b4u: goto label_17a9b4;
        case 0x17a9b8u: goto label_17a9b8;
        case 0x17a9bcu: goto label_17a9bc;
        case 0x17a9c0u: goto label_17a9c0;
        case 0x17a9c4u: goto label_17a9c4;
        case 0x17a9c8u: goto label_17a9c8;
        case 0x17a9ccu: goto label_17a9cc;
        case 0x17a9d0u: goto label_17a9d0;
        case 0x17a9d4u: goto label_17a9d4;
        case 0x17a9d8u: goto label_17a9d8;
        case 0x17a9dcu: goto label_17a9dc;
        case 0x17a9e0u: goto label_17a9e0;
        case 0x17a9e4u: goto label_17a9e4;
        case 0x17a9e8u: goto label_17a9e8;
        case 0x17a9ecu: goto label_17a9ec;
        case 0x17a9f0u: goto label_17a9f0;
        case 0x17a9f4u: goto label_17a9f4;
        case 0x17a9f8u: goto label_17a9f8;
        case 0x17a9fcu: goto label_17a9fc;
        case 0x17aa00u: goto label_17aa00;
        case 0x17aa04u: goto label_17aa04;
        case 0x17aa08u: goto label_17aa08;
        case 0x17aa0cu: goto label_17aa0c;
        case 0x17aa10u: goto label_17aa10;
        case 0x17aa14u: goto label_17aa14;
        case 0x17aa18u: goto label_17aa18;
        case 0x17aa1cu: goto label_17aa1c;
        case 0x17aa20u: goto label_17aa20;
        case 0x17aa24u: goto label_17aa24;
        case 0x17aa28u: goto label_17aa28;
        case 0x17aa2cu: goto label_17aa2c;
        case 0x17aa30u: goto label_17aa30;
        case 0x17aa34u: goto label_17aa34;
        case 0x17aa38u: goto label_17aa38;
        case 0x17aa3cu: goto label_17aa3c;
        case 0x17aa40u: goto label_17aa40;
        case 0x17aa44u: goto label_17aa44;
        case 0x17aa48u: goto label_17aa48;
        case 0x17aa4cu: goto label_17aa4c;
        case 0x17aa50u: goto label_17aa50;
        case 0x17aa54u: goto label_17aa54;
        case 0x17aa58u: goto label_17aa58;
        case 0x17aa5cu: goto label_17aa5c;
        case 0x17aa60u: goto label_17aa60;
        case 0x17aa64u: goto label_17aa64;
        case 0x17aa68u: goto label_17aa68;
        case 0x17aa6cu: goto label_17aa6c;
        case 0x17aa70u: goto label_17aa70;
        case 0x17aa74u: goto label_17aa74;
        case 0x17aa78u: goto label_17aa78;
        case 0x17aa7cu: goto label_17aa7c;
        case 0x17aa80u: goto label_17aa80;
        case 0x17aa84u: goto label_17aa84;
        case 0x17aa88u: goto label_17aa88;
        case 0x17aa8cu: goto label_17aa8c;
        case 0x17aa90u: goto label_17aa90;
        case 0x17aa94u: goto label_17aa94;
        case 0x17aa98u: goto label_17aa98;
        case 0x17aa9cu: goto label_17aa9c;
        case 0x17aaa0u: goto label_17aaa0;
        case 0x17aaa4u: goto label_17aaa4;
        case 0x17aaa8u: goto label_17aaa8;
        case 0x17aaacu: goto label_17aaac;
        case 0x17aab0u: goto label_17aab0;
        case 0x17aab4u: goto label_17aab4;
        case 0x17aab8u: goto label_17aab8;
        case 0x17aabcu: goto label_17aabc;
        case 0x17aac0u: goto label_17aac0;
        case 0x17aac4u: goto label_17aac4;
        case 0x17aac8u: goto label_17aac8;
        case 0x17aaccu: goto label_17aacc;
        case 0x17aad0u: goto label_17aad0;
        case 0x17aad4u: goto label_17aad4;
        case 0x17aad8u: goto label_17aad8;
        case 0x17aadcu: goto label_17aadc;
        case 0x17aae0u: goto label_17aae0;
        case 0x17aae4u: goto label_17aae4;
        case 0x17aae8u: goto label_17aae8;
        case 0x17aaecu: goto label_17aaec;
        case 0x17aaf0u: goto label_17aaf0;
        case 0x17aaf4u: goto label_17aaf4;
        case 0x17aaf8u: goto label_17aaf8;
        case 0x17aafcu: goto label_17aafc;
        case 0x17ab00u: goto label_17ab00;
        case 0x17ab04u: goto label_17ab04;
        case 0x17ab08u: goto label_17ab08;
        case 0x17ab0cu: goto label_17ab0c;
        case 0x17ab10u: goto label_17ab10;
        case 0x17ab14u: goto label_17ab14;
        case 0x17ab18u: goto label_17ab18;
        case 0x17ab1cu: goto label_17ab1c;
        case 0x17ab20u: goto label_17ab20;
        case 0x17ab24u: goto label_17ab24;
        case 0x17ab28u: goto label_17ab28;
        case 0x17ab2cu: goto label_17ab2c;
        case 0x17ab30u: goto label_17ab30;
        case 0x17ab34u: goto label_17ab34;
        case 0x17ab38u: goto label_17ab38;
        case 0x17ab3cu: goto label_17ab3c;
        case 0x17ab40u: goto label_17ab40;
        case 0x17ab44u: goto label_17ab44;
        case 0x17ab48u: goto label_17ab48;
        case 0x17ab4cu: goto label_17ab4c;
        case 0x17ab50u: goto label_17ab50;
        case 0x17ab54u: goto label_17ab54;
        case 0x17ab58u: goto label_17ab58;
        case 0x17ab5cu: goto label_17ab5c;
        case 0x17ab60u: goto label_17ab60;
        case 0x17ab64u: goto label_17ab64;
        case 0x17ab68u: goto label_17ab68;
        case 0x17ab6cu: goto label_17ab6c;
        case 0x17ab70u: goto label_17ab70;
        case 0x17ab74u: goto label_17ab74;
        default: break;
    }

    ctx->pc = 0x17a8d8u;

label_17a8d8:
    // 0x17a8d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x17a8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_17a8dc:
    // 0x17a8dc: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x17a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_17a8e0:
    // 0x17a8e0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x17a8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_17a8e4:
    // 0x17a8e4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17a8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a8e8:
    // 0x17a8e8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x17a8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_17a8ec:
    // 0x17a8ec: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x17a8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17a8f0:
    // 0x17a8f0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x17a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_17a8f4:
    // 0x17a8f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17a8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a8f8:
    // 0x17a8f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x17a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_17a8fc:
    // 0x17a8fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x17a8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a900:
    // 0x17a900: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x17a900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_17a904:
    // 0x17a904: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x17a904u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17a908:
    // 0x17a908: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x17a908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_17a90c:
    // 0x17a90c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17a910:
    // 0x17a910: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x17a910u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_17a914:
    // 0x17a914: 0x0  nop
    ctx->pc = 0x17a914u;
    // NOP
label_17a918:
    // 0x17a918: 0x52140031  beql        $s0, $s4, . + 4 + (0x31 << 2)
label_17a91c:
    if (ctx->pc == 0x17A91Cu) {
        ctx->pc = 0x17A91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A918u;
        // 0x17a91c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A920u;
        goto label_17a920;
    }
    ctx->pc = 0x17A918u;
    {
        const bool branch_taken_0x17a918 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        if (branch_taken_0x17a918) {
            ctx->pc = 0x17A91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A918u;
            // 0x17a91c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A9E0u;
            goto label_17a9e0;
        }
    }
    ctx->pc = 0x17A920u;
label_17a920:
    // 0x17a920: 0x1211002e  beq         $s0, $s1, . + 4 + (0x2E << 2)
label_17a924:
    if (ctx->pc == 0x17A924u) {
        ctx->pc = 0x17A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A920u;
        // 0x17a924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A928u;
        goto label_17a928;
    }
    ctx->pc = 0x17A920u;
    {
        const bool branch_taken_0x17a920 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x17A924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A920u;
        // 0x17a924: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a920) {
            ctx->pc = 0x17A9DCu;
            goto label_17a9dc;
        }
    }
    ctx->pc = 0x17A928u;
label_17a928:
    // 0x17a928: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17a92c:
    // 0x17a92c: 0x84640170  lh          $a0, 0x170($v1)
    ctx->pc = 0x17a92cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 368)));
label_17a930:
    // 0x17a930: 0x8c620174  lw          $v0, 0x174($v1)
    ctx->pc = 0x17a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 372)));
label_17a934:
    // 0x17a934: 0x40f809  jalr        $v0
label_17a938:
    if (ctx->pc == 0x17A938u) {
        ctx->pc = 0x17A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A934u;
        // 0x17a938: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A93Cu;
        goto label_17a93c;
    }
    ctx->pc = 0x17A934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A93Cu);
        ctx->pc = 0x17A938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A934u;
        // 0x17a938: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A934u, 0x17A93Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A93Cu;
label_17a93c:
    // 0x17a93c: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x17a93cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_17a940:
    // 0x17a940: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x17a940u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_17a944:
    // 0x17a944: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x17a944u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_17a948:
    // 0x17a948: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x17a948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_17a94c:
    // 0x17a94c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x17a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17a950:
    // 0x17a950: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x17a950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17a954:
    // 0x17a954: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17a954u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17a958:
    // 0x17a958: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x17a958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17a95c:
    // 0x17a95c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17a95cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17a960:
    // 0x17a960: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x17a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17a964:
    // 0x17a964: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x17a964u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_17a968:
    // 0x17a968: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17a968u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17a96c:
    // 0x17a96c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17a96cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17a970:
    // 0x17a970: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17a970u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17a974:
    // 0x17a974: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17a974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17a978:
    // 0x17a978: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17a978u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17a97c:
    // 0x17a97c: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x17a97cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_17a980:
    // 0x17a980: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17a980u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a984:
    // 0x17a984: 0x0  nop
    ctx->pc = 0x17a984u;
    // NOP
label_17a988:
    // 0x17a988: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17a988u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_17a98c:
    // 0x17a98c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x17a98cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a990:
    // 0x17a990: 0x0  nop
    ctx->pc = 0x17a990u;
    // NOP
label_17a994:
    // 0x17a994: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_17a998:
    if (ctx->pc == 0x17A998u) {
        ctx->pc = 0x17A998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A994u;
        // 0x17a998: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A99Cu;
        goto label_17a99c;
    }
    ctx->pc = 0x17A994u;
    {
        const bool branch_taken_0x17a994 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17a994) {
            ctx->pc = 0x17A998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A994u;
            // 0x17a998: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A9E0u;
            goto label_17a9e0;
        }
    }
    ctx->pc = 0x17A99Cu;
label_17a99c:
    // 0x17a99c: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x17a99cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
label_17a9a0:
    // 0x17a9a0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17a9a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17a9a4:
    // 0x17a9a4: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17a9a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17a9a8:
    // 0x17a9a8: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x17a9a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17a9ac:
    // 0x17a9ac: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x17a9acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17a9b0:
    // 0x17a9b0: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x17a9b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_17a9b4:
    // 0x17a9b4: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x17a9b4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
label_17a9b8:
    // 0x17a9b8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x17a9b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17a9bc:
    // 0x17a9bc: 0x0  nop
    ctx->pc = 0x17a9bcu;
    // NOP
label_17a9c0:
    // 0x17a9c0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x17a9c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_17a9c4:
    // 0x17a9c4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x17a9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17a9c8:
    // 0x17a9c8: 0x0  nop
    ctx->pc = 0x17a9c8u;
    // NOP
label_17a9cc:
    // 0x17a9cc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_17a9d0:
    if (ctx->pc == 0x17A9D0u) {
        ctx->pc = 0x17A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9CCu;
        // 0x17a9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9D4u;
        goto label_17a9d4;
    }
    ctx->pc = 0x17A9CCu;
    {
        const bool branch_taken_0x17a9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9CCu;
        // 0x17a9d0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9cc) {
            ctx->pc = 0x17A9E0u;
            goto label_17a9e0;
        }
    }
    ctx->pc = 0x17A9D4u;
label_17a9d4:
    // 0x17a9d4: 0x1000005d  b           . + 4 + (0x5D << 2)
label_17a9d8:
    if (ctx->pc == 0x17A9D8u) {
        ctx->pc = 0x17A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D4u;
        // 0x17a9d8: 0xa240006f  sb          $zero, 0x6F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 111), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9DCu;
        goto label_17a9dc;
    }
    ctx->pc = 0x17A9D4u;
    {
        const bool branch_taken_0x17a9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9D4u;
        // 0x17a9d8: 0xa240006f  sb          $zero, 0x6F($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 111), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9d4) {
            ctx->pc = 0x17AB4Cu;
            goto label_17ab4c;
        }
    }
    ctx->pc = 0x17A9DCu;
label_17a9dc:
    // 0x17a9dc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x17a9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_17a9e0:
    // 0x17a9e0: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x17a9e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_17a9e4:
    // 0x17a9e4: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_17a9e8:
    if (ctx->pc == 0x17A9E8u) {
        ctx->pc = 0x17A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9E4u;
        // 0x17a9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A9ECu;
        goto label_17a9ec;
    }
    ctx->pc = 0x17A9E4u;
    {
        const bool branch_taken_0x17a9e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A9E4u;
        // 0x17a9e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a9e4) {
            ctx->pc = 0x17A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a918;
        }
    }
    ctx->pc = 0x17A9ECu;
label_17a9ec:
    // 0x17a9ec: 0x26540030  addiu       $s4, $s2, 0x30
    ctx->pc = 0x17a9ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_17a9f0:
    // 0x17a9f0: 0xa242006f  sb          $v0, 0x6F($s2)
    ctx->pc = 0x17a9f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 111), (uint8_t)GPR_U32(ctx, 2));
label_17a9f4:
    // 0x17a9f4: 0x26510050  addiu       $s1, $s2, 0x50
    ctx->pc = 0x17a9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_17a9f8:
    // 0x17a9f8: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x17a9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
label_17a9fc:
    // 0x17a9fc: 0x26550010  addiu       $s5, $s2, 0x10
    ctx->pc = 0x17a9fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_17aa00:
    // 0x17aa00: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x17aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_17aa04:
    // 0x17aa04: 0x26560020  addiu       $s6, $s2, 0x20
    ctx->pc = 0x17aa04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_17aa08:
    // 0x17aa08: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x17aa08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_17aa0c:
    // 0x17aa0c: 0x84640218  lh          $a0, 0x218($v1)
    ctx->pc = 0x17aa0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 536)));
label_17aa10:
    // 0x17aa10: 0x8c62021c  lw          $v0, 0x21C($v1)
    ctx->pc = 0x17aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 540)));
label_17aa14:
    // 0x17aa14: 0x40f809  jalr        $v0
label_17aa18:
    if (ctx->pc == 0x17AA18u) {
        ctx->pc = 0x17AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA14u;
        // 0x17aa18: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA1Cu;
        goto label_17aa1c;
    }
    ctx->pc = 0x17AA14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17AA1Cu);
        ctx->pc = 0x17AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA14u;
        // 0x17aa18: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA14u, 0x17AA1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17AA1Cu;
label_17aa1c:
    // 0x17aa1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x17aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17aa20:
    // 0x17aa20: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17aa20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17aa24:
    // 0x17aa24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_17aa28:
    // 0x17aa28: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17aa28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17aa2c:
    // 0x17aa2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17aa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17aa30:
    // 0x17aa30: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x17aa30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17aa34:
    // 0x17aa34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x17aa34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17aa38:
    // 0x17aa38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17aa38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17aa3c:
    // 0x17aa3c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x17aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17aa40:
    // 0x17aa40: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x17aa40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17aa44:
    // 0x17aa44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x17aa44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17aa48:
    // 0x17aa48: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x17aa48u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17aa4c:
    // 0x17aa4c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x17aa4cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_17aa50:
    // 0x17aa50: 0xc05e9fc  jal         func_17A7F0
label_17aa54:
    if (ctx->pc == 0x17AA54u) {
        ctx->pc = 0x17AA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA50u;
        // 0x17aa54: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA58u;
        goto label_17aa58;
    }
    ctx->pc = 0x17AA50u;
    SET_GPR_U32(ctx, 31, 0x17AA58u);
    ctx->pc = 0x17AA54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA50u;
    // 0x17aa54: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7F0u, 0x17AA50u, 0x17AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA58u;
label_17aa58:
    // 0x17aa58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x17aa58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_17aa5c:
    // 0x17aa5c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17aa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17aa60:
    // 0x17aa60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17aa60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17aa64:
    // 0x17aa64: 0xc05e9fc  jal         func_17A7F0
label_17aa68:
    if (ctx->pc == 0x17AA68u) {
        ctx->pc = 0x17AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA64u;
        // 0x17aa68: 0x26470060  addiu       $a3, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA6Cu;
        goto label_17aa6c;
    }
    ctx->pc = 0x17AA64u;
    SET_GPR_U32(ctx, 31, 0x17AA6Cu);
    ctx->pc = 0x17AA68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA64u;
    // 0x17aa68: 0x26470060  addiu       $a3, $s2, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7F0u, 0x17AA64u, 0x17AA6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA6Cu;
label_17aa6c:
    // 0x17aa6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x17aa6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17aa70:
    // 0x17aa70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17aa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17aa74:
    // 0x17aa74: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17aa74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17aa78:
    // 0x17aa78: 0xc05e9fc  jal         func_17A7F0
label_17aa7c:
    if (ctx->pc == 0x17AA7Cu) {
        ctx->pc = 0x17AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA78u;
        // 0x17aa7c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA80u;
        goto label_17aa80;
    }
    ctx->pc = 0x17AA78u;
    SET_GPR_U32(ctx, 31, 0x17AA80u);
    ctx->pc = 0x17AA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA78u;
    // 0x17aa7c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A7F0u, 0x17AA78u, 0x17AA80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA80u;
label_17aa80:
    // 0x17aa80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17aa80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17aa84:
    // 0x17aa84: 0xc05ea2a  jal         func_17A8A8
label_17aa88:
    if (ctx->pc == 0x17AA88u) {
        ctx->pc = 0x17AA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA84u;
        // 0x17aa88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA8Cu;
        goto label_17aa8c;
    }
    ctx->pc = 0x17AA84u;
    SET_GPR_U32(ctx, 31, 0x17AA8Cu);
    ctx->pc = 0x17AA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AA84u;
    // 0x17aa88: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8A8u, 0x17AA84u, 0x17AA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA8Cu;
label_17aa8c:
    // 0x17aa8c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17aa8cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17aa90:
    // 0x17aa90: 0x0  nop
    ctx->pc = 0x17aa90u;
    // NOP
label_17aa94:
    // 0x17aa94: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_17aa98:
    if (ctx->pc == 0x17AA98u) {
        ctx->pc = 0x17AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA94u;
        // 0x17aa98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AA9Cu;
        goto label_17aa9c;
    }
    ctx->pc = 0x17AA94u;
    {
        const bool branch_taken_0x17aa94 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17AA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AA94u;
        // 0x17aa98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aa94) {
            ctx->pc = 0x17AAC8u;
            goto label_17aac8;
        }
    }
    ctx->pc = 0x17AA9Cu;
label_17aa9c:
    // 0x17aa9c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17aa9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17aaa0:
    // 0x17aaa0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17aaa0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17aaa4:
    // 0x17aaa4: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x17aaa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_17aaa8:
    // 0x17aaa8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x17aaa8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_17aaac:
    // 0x17aaac: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17aaacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17aab0:
    // 0x17aab0: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17aab0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17aab4:
    // 0x17aab4: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17aab4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17aab8:
    // 0x17aab8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17aab8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_17aabc:
    // 0x17aabc: 0x7e420000  sq          $v0, 0x0($s2)
    ctx->pc = 0x17aabcu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), GPR_VEC(ctx, 2));
label_17aac0:
    // 0x17aac0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17aac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_17aac4:
    // 0x17aac4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17aac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17aac8:
    // 0x17aac8: 0xc05ea2a  jal         func_17A8A8
label_17aacc:
    if (ctx->pc == 0x17AACCu) {
        ctx->pc = 0x17AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAC8u;
        // 0x17aacc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAD0u;
        goto label_17aad0;
    }
    ctx->pc = 0x17AAC8u;
    SET_GPR_U32(ctx, 31, 0x17AAD0u);
    ctx->pc = 0x17AACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AAC8u;
    // 0x17aacc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8A8u, 0x17AAC8u, 0x17AAD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AAD0u;
label_17aad0:
    // 0x17aad0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17aad0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17aad4:
    // 0x17aad4: 0x0  nop
    ctx->pc = 0x17aad4u;
    // NOP
label_17aad8:
    // 0x17aad8: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_17aadc:
    if (ctx->pc == 0x17AADCu) {
        ctx->pc = 0x17AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAD8u;
        // 0x17aadc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AAE0u;
        goto label_17aae0;
    }
    ctx->pc = 0x17AAD8u;
    {
        const bool branch_taken_0x17aad8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17AADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AAD8u;
        // 0x17aadc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aad8) {
            ctx->pc = 0x17AB0Cu;
            goto label_17ab0c;
        }
    }
    ctx->pc = 0x17AAE0u;
label_17aae0:
    // 0x17aae0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17aae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17aae4:
    // 0x17aae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17aae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17aae8:
    // 0x17aae8: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x17aae8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
label_17aaec:
    // 0x17aaec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x17aaecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_17aaf0:
    // 0x17aaf0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17aaf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17aaf4:
    // 0x17aaf4: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x17aaf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_17aaf8:
    // 0x17aaf8: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17aaf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17aafc:
    // 0x17aafc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17aafcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_17ab00:
    // 0x17ab00: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x17ab00u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
label_17ab04:
    // 0x17ab04: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_17ab08:
    // 0x17ab08: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x17ab08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_17ab0c:
    // 0x17ab0c: 0xc05ea2a  jal         func_17A8A8
label_17ab10:
    if (ctx->pc == 0x17AB10u) {
        ctx->pc = 0x17AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB0Cu;
        // 0x17ab10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB14u;
        goto label_17ab14;
    }
    ctx->pc = 0x17AB0Cu;
    SET_GPR_U32(ctx, 31, 0x17AB14u);
    ctx->pc = 0x17AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17AB0Cu;
    // 0x17ab10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17A8A8u, 0x17AB0Cu, 0x17AB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AB14u;
label_17ab14:
    // 0x17ab14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x17ab14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17ab18:
    // 0x17ab18: 0x0  nop
    ctx->pc = 0x17ab18u;
    // NOP
label_17ab1c:
    // 0x17ab1c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_17ab20:
    if (ctx->pc == 0x17AB20u) {
        ctx->pc = 0x17AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB1Cu;
        // 0x17ab20: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB24u;
        goto label_17ab24;
    }
    ctx->pc = 0x17AB1Cu;
    {
        const bool branch_taken_0x17ab1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB1Cu;
        // 0x17ab20: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab1c) {
            ctx->pc = 0x17AB50u;
            goto label_17ab50;
        }
    }
    ctx->pc = 0x17AB24u;
label_17ab24:
    // 0x17ab24: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x17ab24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_17ab28:
    // 0x17ab28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17ab28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17ab2c:
    // 0x17ab2c: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x17ab2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
label_17ab30:
    // 0x17ab30: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x17ab30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_17ab34:
    // 0x17ab34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17ab34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_17ab38:
    // 0x17ab38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17ab38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_17ab3c:
    // 0x17ab3c: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x17ab3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_17ab40:
    // 0x17ab40: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17ab40u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_17ab44:
    // 0x17ab44: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x17ab44u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
label_17ab48:
    // 0x17ab48: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x17ab48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_17ab4c:
    // 0x17ab4c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x17ab4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17ab50:
    // 0x17ab50: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x17ab50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17ab54:
    // 0x17ab54: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x17ab54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17ab58:
    // 0x17ab58: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x17ab58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17ab5c:
    // 0x17ab5c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x17ab5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17ab60:
    // 0x17ab60: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x17ab60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17ab64:
    // 0x17ab64: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x17ab64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17ab68:
    // 0x17ab68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17ab68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17ab6c:
    // 0x17ab6c: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x17ab6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17ab70:
    // 0x17ab70: 0x3e00008  jr          $ra
label_17ab74:
    if (ctx->pc == 0x17AB74u) {
        ctx->pc = 0x17AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB70u;
        // 0x17ab74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17AB78u;
        goto label_fallthrough_0x17ab70;
    }
    ctx->pc = 0x17AB70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AB70u;
        // 0x17ab74: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AB70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17ab70:
    ctx->pc = 0x17AB78u;
}
