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

// Function: sub_0040CA18
// Address: 0x40ca18 - 0x40cc40
void sub_0040CA18_0x40ca18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040CA18_0x40ca18");
#endif

    switch (ctx->pc) {
        case 0x40ca18u: goto label_40ca18;
        case 0x40ca1cu: goto label_40ca1c;
        case 0x40ca20u: goto label_40ca20;
        case 0x40ca24u: goto label_40ca24;
        case 0x40ca28u: goto label_40ca28;
        case 0x40ca2cu: goto label_40ca2c;
        case 0x40ca30u: goto label_40ca30;
        case 0x40ca34u: goto label_40ca34;
        case 0x40ca38u: goto label_40ca38;
        case 0x40ca3cu: goto label_40ca3c;
        case 0x40ca40u: goto label_40ca40;
        case 0x40ca44u: goto label_40ca44;
        case 0x40ca48u: goto label_40ca48;
        case 0x40ca4cu: goto label_40ca4c;
        case 0x40ca50u: goto label_40ca50;
        case 0x40ca54u: goto label_40ca54;
        case 0x40ca58u: goto label_40ca58;
        case 0x40ca5cu: goto label_40ca5c;
        case 0x40ca60u: goto label_40ca60;
        case 0x40ca64u: goto label_40ca64;
        case 0x40ca68u: goto label_40ca68;
        case 0x40ca6cu: goto label_40ca6c;
        case 0x40ca70u: goto label_40ca70;
        case 0x40ca74u: goto label_40ca74;
        case 0x40ca78u: goto label_40ca78;
        case 0x40ca7cu: goto label_40ca7c;
        case 0x40ca80u: goto label_40ca80;
        case 0x40ca84u: goto label_40ca84;
        case 0x40ca88u: goto label_40ca88;
        case 0x40ca8cu: goto label_40ca8c;
        case 0x40ca90u: goto label_40ca90;
        case 0x40ca94u: goto label_40ca94;
        case 0x40ca98u: goto label_40ca98;
        case 0x40ca9cu: goto label_40ca9c;
        case 0x40caa0u: goto label_40caa0;
        case 0x40caa4u: goto label_40caa4;
        case 0x40caa8u: goto label_40caa8;
        case 0x40caacu: goto label_40caac;
        case 0x40cab0u: goto label_40cab0;
        case 0x40cab4u: goto label_40cab4;
        case 0x40cab8u: goto label_40cab8;
        case 0x40cabcu: goto label_40cabc;
        case 0x40cac0u: goto label_40cac0;
        case 0x40cac4u: goto label_40cac4;
        case 0x40cac8u: goto label_40cac8;
        case 0x40caccu: goto label_40cacc;
        case 0x40cad0u: goto label_40cad0;
        case 0x40cad4u: goto label_40cad4;
        case 0x40cad8u: goto label_40cad8;
        case 0x40cadcu: goto label_40cadc;
        case 0x40cae0u: goto label_40cae0;
        case 0x40cae4u: goto label_40cae4;
        case 0x40cae8u: goto label_40cae8;
        case 0x40caecu: goto label_40caec;
        case 0x40caf0u: goto label_40caf0;
        case 0x40caf4u: goto label_40caf4;
        case 0x40caf8u: goto label_40caf8;
        case 0x40cafcu: goto label_40cafc;
        case 0x40cb00u: goto label_40cb00;
        case 0x40cb04u: goto label_40cb04;
        case 0x40cb08u: goto label_40cb08;
        case 0x40cb0cu: goto label_40cb0c;
        case 0x40cb10u: goto label_40cb10;
        case 0x40cb14u: goto label_40cb14;
        case 0x40cb18u: goto label_40cb18;
        case 0x40cb1cu: goto label_40cb1c;
        case 0x40cb20u: goto label_40cb20;
        case 0x40cb24u: goto label_40cb24;
        case 0x40cb28u: goto label_40cb28;
        case 0x40cb2cu: goto label_40cb2c;
        case 0x40cb30u: goto label_40cb30;
        case 0x40cb34u: goto label_40cb34;
        case 0x40cb38u: goto label_40cb38;
        case 0x40cb3cu: goto label_40cb3c;
        case 0x40cb40u: goto label_40cb40;
        case 0x40cb44u: goto label_40cb44;
        case 0x40cb48u: goto label_40cb48;
        case 0x40cb4cu: goto label_40cb4c;
        case 0x40cb50u: goto label_40cb50;
        case 0x40cb54u: goto label_40cb54;
        case 0x40cb58u: goto label_40cb58;
        case 0x40cb5cu: goto label_40cb5c;
        case 0x40cb60u: goto label_40cb60;
        case 0x40cb64u: goto label_40cb64;
        case 0x40cb68u: goto label_40cb68;
        case 0x40cb6cu: goto label_40cb6c;
        case 0x40cb70u: goto label_40cb70;
        case 0x40cb74u: goto label_40cb74;
        case 0x40cb78u: goto label_40cb78;
        case 0x40cb7cu: goto label_40cb7c;
        case 0x40cb80u: goto label_40cb80;
        case 0x40cb84u: goto label_40cb84;
        case 0x40cb88u: goto label_40cb88;
        case 0x40cb8cu: goto label_40cb8c;
        case 0x40cb90u: goto label_40cb90;
        case 0x40cb94u: goto label_40cb94;
        case 0x40cb98u: goto label_40cb98;
        case 0x40cb9cu: goto label_40cb9c;
        case 0x40cba0u: goto label_40cba0;
        case 0x40cba4u: goto label_40cba4;
        case 0x40cba8u: goto label_40cba8;
        case 0x40cbacu: goto label_40cbac;
        case 0x40cbb0u: goto label_40cbb0;
        case 0x40cbb4u: goto label_40cbb4;
        case 0x40cbb8u: goto label_40cbb8;
        case 0x40cbbcu: goto label_40cbbc;
        case 0x40cbc0u: goto label_40cbc0;
        case 0x40cbc4u: goto label_40cbc4;
        case 0x40cbc8u: goto label_40cbc8;
        case 0x40cbccu: goto label_40cbcc;
        case 0x40cbd0u: goto label_40cbd0;
        case 0x40cbd4u: goto label_40cbd4;
        case 0x40cbd8u: goto label_40cbd8;
        case 0x40cbdcu: goto label_40cbdc;
        case 0x40cbe0u: goto label_40cbe0;
        case 0x40cbe4u: goto label_40cbe4;
        case 0x40cbe8u: goto label_40cbe8;
        case 0x40cbecu: goto label_40cbec;
        case 0x40cbf0u: goto label_40cbf0;
        case 0x40cbf4u: goto label_40cbf4;
        case 0x40cbf8u: goto label_40cbf8;
        case 0x40cbfcu: goto label_40cbfc;
        case 0x40cc00u: goto label_40cc00;
        case 0x40cc04u: goto label_40cc04;
        case 0x40cc08u: goto label_40cc08;
        case 0x40cc0cu: goto label_40cc0c;
        case 0x40cc10u: goto label_40cc10;
        case 0x40cc14u: goto label_40cc14;
        case 0x40cc18u: goto label_40cc18;
        case 0x40cc1cu: goto label_40cc1c;
        case 0x40cc20u: goto label_40cc20;
        case 0x40cc24u: goto label_40cc24;
        case 0x40cc28u: goto label_40cc28;
        case 0x40cc2cu: goto label_40cc2c;
        case 0x40cc30u: goto label_40cc30;
        case 0x40cc34u: goto label_40cc34;
        case 0x40cc38u: goto label_40cc38;
        case 0x40cc3cu: goto label_40cc3c;
        default: break;
    }

    ctx->pc = 0x40ca18u;

label_40ca18:
    // 0x40ca18: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x40ca18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_40ca1c:
    // 0x40ca1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40ca1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_40ca20:
    // 0x40ca20: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x40ca20u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
label_40ca24:
    // 0x40ca24: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40ca24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_40ca28:
    // 0x40ca28: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x40ca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_40ca2c:
    // 0x40ca2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x40ca2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40ca30:
    // 0x40ca30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x40ca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_40ca34:
    // 0x40ca34: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40ca34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_40ca38:
    // 0x40ca38: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x40ca38u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_40ca3c:
    // 0x40ca3c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40ca3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ca40:
    // 0x40ca40: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x40ca40u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_40ca44:
    // 0x40ca44: 0x46006dc6  mov.s       $f23, $f13
    ctx->pc = 0x40ca44u;
    ctx->f[23] = FPU_MOV_S(ctx->f[13]);
label_40ca48:
    // 0x40ca48: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x40ca48u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_40ca4c:
    // 0x40ca4c: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x40ca4cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
label_40ca50:
    // 0x40ca50: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x40ca50u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_40ca54:
    // 0x40ca54: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x40ca54u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
label_40ca58:
    // 0x40ca58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40ca58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40ca5c:
    // 0x40ca5c: 0x8e6347c4  lw          $v1, 0x47C4($s3)
    ctx->pc = 0x40ca5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_40ca60:
    // 0x40ca60: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x40ca60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_40ca64:
    // 0x40ca64: 0x14400040  bnez        $v0, . + 4 + (0x40 << 2)
label_40ca68:
    if (ctx->pc == 0x40CA68u) {
        ctx->pc = 0x40CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA64u;
        // 0x40ca68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CA6Cu;
        goto label_40ca6c;
    }
    ctx->pc = 0x40CA64u;
    {
        const bool branch_taken_0x40ca64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40CA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA64u;
        // 0x40ca68: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ca64) {
            ctx->pc = 0x40CB68u;
            goto label_40cb68;
        }
    }
    ctx->pc = 0x40CA6Cu;
label_40ca6c:
    // 0x40ca6c: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x40ca6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_40ca70:
    // 0x40ca70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x40ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_40ca74:
    // 0x40ca74: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x40ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40ca78:
    // 0x40ca78: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x40ca78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_40ca7c:
    // 0x40ca7c: 0xc05eb2a  jal         func_17ACA8
label_40ca80:
    if (ctx->pc == 0x40CA80u) {
        ctx->pc = 0x40CA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA7Cu;
        // 0x40ca80: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CA84u;
        goto label_40ca84;
    }
    ctx->pc = 0x40CA7Cu;
    SET_GPR_U32(ctx, 31, 0x40CA84u);
    ctx->pc = 0x40CA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CA7Cu;
    // 0x40ca80: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x40CA7Cu, 0x40CA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CA84u;
label_40ca84:
    // 0x40ca84: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x40ca84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40ca88:
    // 0x40ca88: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x40ca88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40ca8c:
    // 0x40ca8c: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x40ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_40ca90:
    // 0x40ca90: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x40ca90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_40ca94:
    // 0x40ca94: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x40ca94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_40ca98:
    // 0x40ca98: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40ca98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40ca9c:
    // 0x40ca9c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x40ca9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40caa0:
    // 0x40caa0: 0x3c080059  lui         $t0, 0x59
    ctx->pc = 0x40caa0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)89 << 16));
label_40caa4:
    // 0x40caa4: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x40caa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40caa8:
    // 0x40caa8: 0x24a58700  addiu       $a1, $a1, -0x7900
    ctx->pc = 0x40caa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936320));
label_40caac:
    // 0x40caac: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x40caacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40cab0:
    // 0x40cab0: 0x25088710  addiu       $t0, $t0, -0x78F0
    ctx->pc = 0x40cab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294936336));
label_40cab4:
    // 0x40cab4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x40cab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40cab8:
    // 0x40cab8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x40cab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_40cabc:
    // 0x40cabc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40cabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40cac0:
    // 0x40cac0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40cac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40cac4:
    // 0x40cac4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x40cac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40cac8:
    // 0x40cac8: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x40cac8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_40cacc:
    // 0x40cacc: 0x24090064  addiu       $t1, $zero, 0x64
    ctx->pc = 0x40caccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_40cad0:
    // 0x40cad0: 0x8e7347c4  lw          $s3, 0x47C4($s3)
    ctx->pc = 0x40cad0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_40cad4:
    // 0x40cad4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x40cad4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cad8:
    // 0x40cad8: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x40cad8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_40cadc:
    // 0x40cadc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x40cadcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40cae0:
    // 0x40cae0: 0xe6260008  swc1        $f6, 0x8($s1)
    ctx->pc = 0x40cae0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_40cae4:
    // 0x40cae4: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x40cae4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
label_40cae8:
    // 0x40cae8: 0xe6240010  swc1        $f4, 0x10($s1)
    ctx->pc = 0x40cae8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_40caec:
    // 0x40caec: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x40caecu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_40caf0:
    // 0x40caf0: 0xe6220018  swc1        $f2, 0x18($s1)
    ctx->pc = 0x40caf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_40caf4:
    // 0x40caf4: 0xe627001c  swc1        $f7, 0x1C($s1)
    ctx->pc = 0x40caf4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
label_40caf8:
    // 0x40caf8: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x40caf8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_40cafc:
    // 0x40cafc: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x40cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_40cb00:
    // 0x40cb00: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x40cb00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_40cb04:
    // 0x40cb04: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x40cb04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_40cb08:
    // 0x40cb08: 0x40f809  jalr        $v0
label_40cb0c:
    if (ctx->pc == 0x40CB0Cu) {
        ctx->pc = 0x40CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB08u;
        // 0x40cb0c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CB10u;
        goto label_40cb10;
    }
    ctx->pc = 0x40CB08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40CB10u);
        ctx->pc = 0x40CB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB08u;
        // 0x40cb0c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CB08u, 0x40CB10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40CB10u;
label_40cb10:
    // 0x40cb10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40cb10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40cb14:
    // 0x40cb14: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_40cb18:
    if (ctx->pc == 0x40CB18u) {
        ctx->pc = 0x40CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB14u;
        // 0x40cb18: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CB1Cu;
        goto label_40cb1c;
    }
    ctx->pc = 0x40CB14u;
    {
        const bool branch_taken_0x40cb14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB14u;
        // 0x40cb18: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb14) {
            ctx->pc = 0x40CB60u;
            goto label_40cb60;
        }
    }
    ctx->pc = 0x40CB1Cu;
label_40cb1c:
    // 0x40cb1c: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40cb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40cb20:
    // 0x40cb20: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x40cb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
label_40cb24:
    // 0x40cb24: 0x24a58740  addiu       $a1, $a1, -0x78C0
    ctx->pc = 0x40cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936384));
label_40cb28:
    // 0x40cb28: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x40cb28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_40cb2c:
    // 0x40cb2c: 0x24c68750  addiu       $a2, $a2, -0x78B0
    ctx->pc = 0x40cb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936400));
label_40cb30:
    // 0x40cb30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x40cb30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_40cb34:
    // 0x40cb34: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40cb34u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40cb38:
    // 0x40cb38: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x40cb38u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
label_40cb3c:
    // 0x40cb3c: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x40cb3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_40cb40:
    // 0x40cb40: 0x4600b3c6  mov.s       $f15, $f22
    ctx->pc = 0x40cb40u;
    ctx->f[15] = FPU_MOV_S(ctx->f[22]);
label_40cb44:
    // 0x40cb44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x40cb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_40cb48:
    // 0x40cb48: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x40cb48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40cb4c:
    // 0x40cb4c: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x40cb4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_40cb50:
    // 0x40cb50: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x40cb50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40cb54:
    // 0x40cb54: 0xc06448c  jal         func_191230
label_40cb58:
    if (ctx->pc == 0x40CB58u) {
        ctx->pc = 0x40CB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB54u;
        // 0x40cb58: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CB5Cu;
        goto label_40cb5c;
    }
    ctx->pc = 0x40CB54u;
    SET_GPR_U32(ctx, 31, 0x40CB5Cu);
    ctx->pc = 0x40CB58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CB54u;
    // 0x40cb58: 0x240b0010  addiu       $t3, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191230u, 0x40CB54u, 0x40CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CB5Cu;
label_40cb5c:
    // 0x40cb5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x40cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40cb60:
    // 0x40cb60: 0x1000002c  b           . + 4 + (0x2C << 2)
label_40cb64:
    if (ctx->pc == 0x40CB64u) {
        ctx->pc = 0x40CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB60u;
        // 0x40cb64: 0xae64005c  sw          $a0, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CB68u;
        goto label_40cb68;
    }
    ctx->pc = 0x40CB60u;
    {
        const bool branch_taken_0x40cb60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CB60u;
        // 0x40cb64: 0xae64005c  sw          $a0, 0x5C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40cb60) {
            ctx->pc = 0x40CC14u;
            goto label_40cc14;
        }
    }
    ctx->pc = 0x40CB68u;
label_40cb68:
    // 0x40cb68: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x40cb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_40cb6c:
    // 0x40cb6c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x40cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40cb70:
    // 0x40cb70: 0xc6460008  lwc1        $f6, 0x8($s2)
    ctx->pc = 0x40cb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_40cb74:
    // 0x40cb74: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40cb74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40cb78:
    // 0x40cb78: 0xc607000c  lwc1        $f7, 0xC($s0)
    ctx->pc = 0x40cb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_40cb7c:
    // 0x40cb7c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x40cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40cb80:
    // 0x40cb80: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x40cb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40cb84:
    // 0x40cb84: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x40cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_40cb88:
    // 0x40cb88: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x40cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_40cb8c:
    // 0x40cb8c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x40cb8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_40cb90:
    // 0x40cb90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x40cb90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40cb94:
    // 0x40cb94: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x40cb94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_40cb98:
    // 0x40cb98: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x40cb98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_40cb9c:
    // 0x40cb9c: 0xe4460008  swc1        $f6, 0x8($v0)
    ctx->pc = 0x40cb9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_40cba0:
    // 0x40cba0: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x40cba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_40cba4:
    // 0x40cba4: 0xe4420010  swc1        $f2, 0x10($v0)
    ctx->pc = 0x40cba4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_40cba8:
    // 0x40cba8: 0xe4430014  swc1        $f3, 0x14($v0)
    ctx->pc = 0x40cba8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_40cbac:
    // 0x40cbac: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x40cbacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_40cbb0:
    // 0x40cbb0: 0xe447001c  swc1        $f7, 0x1C($v0)
    ctx->pc = 0x40cbb0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_40cbb4:
    // 0x40cbb4: 0xc064568  jal         func_1915A0
label_40cbb8:
    if (ctx->pc == 0x40CBB8u) {
        ctx->pc = 0x40CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBB4u;
        // 0x40cbb8: 0x8c64005c  lw          $a0, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CBBCu;
        goto label_40cbbc;
    }
    ctx->pc = 0x40CBB4u;
    SET_GPR_U32(ctx, 31, 0x40CBBCu);
    ctx->pc = 0x40CBB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CBB4u;
    // 0x40cbb8: 0x8c64005c  lw          $a0, 0x5C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1915A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1915A0u, 0x40CBB4u, 0x40CBBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CBBCu;
label_40cbbc:
    // 0x40cbbc: 0x8e6547c4  lw          $a1, 0x47C4($s3)
    ctx->pc = 0x40cbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_40cbc0:
    // 0x40cbc0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x40cbc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_40cbc4:
    // 0x40cbc4: 0x8ca2005c  lw          $v0, 0x5C($a1)
    ctx->pc = 0x40cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_40cbc8:
    // 0x40cbc8: 0xe4550068  swc1        $f21, 0x68($v0)
    ctx->pc = 0x40cbc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
label_40cbcc:
    // 0x40cbcc: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x40cbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_40cbd0:
    // 0x40cbd0: 0xe476006c  swc1        $f22, 0x6C($v1)
    ctx->pc = 0x40cbd0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 108), bits); }
label_40cbd4:
    // 0x40cbd4: 0xc0645ca  jal         func_191728
label_40cbd8:
    if (ctx->pc == 0x40CBD8u) {
        ctx->pc = 0x40CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBD4u;
        // 0x40cbd8: 0x8ca4005c  lw          $a0, 0x5C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CBDCu;
        goto label_40cbdc;
    }
    ctx->pc = 0x40CBD4u;
    SET_GPR_U32(ctx, 31, 0x40CBDCu);
    ctx->pc = 0x40CBD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CBD4u;
    // 0x40cbd8: 0x8ca4005c  lw          $a0, 0x5C($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191728u, 0x40CBD4u, 0x40CBDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CBDCu;
label_40cbdc:
    // 0x40cbdc: 0x8e6247c4  lw          $v0, 0x47C4($s3)
    ctx->pc = 0x40cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_40cbe0:
    // 0x40cbe0: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x40cbe0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
label_40cbe4:
    // 0x40cbe4: 0xc0645d4  jal         func_191750
label_40cbe8:
    if (ctx->pc == 0x40CBE8u) {
        ctx->pc = 0x40CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBE4u;
        // 0x40cbe8: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CBECu;
        goto label_40cbec;
    }
    ctx->pc = 0x40CBE4u;
    SET_GPR_U32(ctx, 31, 0x40CBECu);
    ctx->pc = 0x40CBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CBE4u;
    // 0x40cbe8: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191750u, 0x40CBE4u, 0x40CBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CBECu;
label_40cbec:
    // 0x40cbec: 0xc62e0008  lwc1        $f14, 0x8($s1)
    ctx->pc = 0x40cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_40cbf0:
    // 0x40cbf0: 0x27a40034  addiu       $a0, $sp, 0x34
    ctx->pc = 0x40cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_40cbf4:
    // 0x40cbf4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x40cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_40cbf8:
    // 0x40cbf8: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x40cbf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_40cbfc:
    // 0x40cbfc: 0xc05eb2a  jal         func_17ACA8
label_40cc00:
    if (ctx->pc == 0x40CC00u) {
        ctx->pc = 0x40CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CBFCu;
        // 0x40cc00: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CC04u;
        goto label_40cc04;
    }
    ctx->pc = 0x40CBFCu;
    SET_GPR_U32(ctx, 31, 0x40CC04u);
    ctx->pc = 0x40CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CBFCu;
    // 0x40cc00: 0xc62d0004  lwc1        $f13, 0x4($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17ACA8u, 0x40CBFCu, 0x40CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CC04u;
label_40cc04:
    // 0x40cc04: 0x8e6347c4  lw          $v1, 0x47C4($s3)
    ctx->pc = 0x40cc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18372)));
label_40cc08:
    // 0x40cc08: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x40cc08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_40cc0c:
    // 0x40cc0c: 0xc0645de  jal         func_191778
label_40cc10:
    if (ctx->pc == 0x40CC10u) {
        ctx->pc = 0x40CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC0Cu;
        // 0x40cc10: 0x8c64005c  lw          $a0, 0x5C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CC14u;
        goto label_40cc14;
    }
    ctx->pc = 0x40CC0Cu;
    SET_GPR_U32(ctx, 31, 0x40CC14u);
    ctx->pc = 0x40CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40CC0Cu;
    // 0x40cc10: 0x8c64005c  lw          $a0, 0x5C($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191778u, 0x40CC0Cu, 0x40CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40CC14u;
label_40cc14:
    // 0x40cc14: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x40cc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40cc18:
    // 0x40cc18: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x40cc18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40cc1c:
    // 0x40cc1c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x40cc1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40cc20:
    // 0x40cc20: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x40cc20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40cc24:
    // 0x40cc24: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40cc24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40cc28:
    // 0x40cc28: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x40cc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_40cc2c:
    // 0x40cc2c: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x40cc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_40cc30:
    // 0x40cc30: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x40cc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_40cc34:
    // 0x40cc34: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x40cc34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_40cc38:
    // 0x40cc38: 0x3e00008  jr          $ra
label_40cc3c:
    if (ctx->pc == 0x40CC3Cu) {
        ctx->pc = 0x40CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC38u;
        // 0x40cc3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CC40u;
        goto label_fallthrough_0x40cc38;
    }
    ctx->pc = 0x40CC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CC38u;
        // 0x40cc3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40cc38:
    ctx->pc = 0x40CC40u;
}
