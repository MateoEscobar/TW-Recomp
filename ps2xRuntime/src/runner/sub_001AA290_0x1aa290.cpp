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

// Function: sub_001AA290
// Address: 0x1aa290 - 0x1aa5c0
void sub_001AA290_0x1aa290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA290_0x1aa290");
#endif

    switch (ctx->pc) {
        case 0x1aa37cu: goto label_1aa37c;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa420u: goto label_1aa420;
        case 0x1aa428u: goto label_1aa428;
        case 0x1aa4a4u: goto label_1aa4a4;
        case 0x1aa4acu: goto label_1aa4ac;
        case 0x1aa528u: goto label_1aa528;
        case 0x1aa530u: goto label_1aa530;
        case 0x1aa578u: goto label_1aa578;
        case 0x1aa588u: goto label_1aa588;
        default: break;
    }

    ctx->pc = 0x1aa290u;

    // 0x1aa290: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1aa290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x1aa294: 0x3c013ebd  lui         $at, 0x3EBD
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16061 << 16));
    // 0x1aa298: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x1aa298u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x1aa29c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aa29cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aa2a0: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1aa2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x1aa2a4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1aa2a8: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1aa2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x1aa2ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1aa2acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2b0: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1aa2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x1aa2b4: 0x26420a80  addiu       $v0, $s2, 0xA80
    ctx->pc = 0x1aa2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2688));
    // 0x1aa2b8: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1aa2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x1aa2bc: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x1aa2bcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x1aa2c0: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1aa2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x1aa2c4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x1aa2c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1aa2c8: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1aa2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x1aa2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2d0: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x1aa2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x1aa2d4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x1aa2d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2d8: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x1aa2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x1aa2dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa2dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa2e0: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1aa2e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x1aa2e4: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1aa2e4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2e8: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x1aa2e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x1aa2ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa2ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa2f0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1aa2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1aa2f4: 0x3c140054  lui         $s4, 0x54
    ctx->pc = 0x1aa2f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)84 << 16));
    // 0x1aa2f8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa2f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa2fc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa2fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa300: 0x3c170060  lui         $s7, 0x60
    ctx->pc = 0x1aa300u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)96 << 16));
    // 0x1aa304: 0x3c01becc  lui         $at, 0xBECC
    ctx->pc = 0x1aa304u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48844 << 16));
    // 0x1aa308: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aa308u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aa30c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aa30cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa310: 0xe6410a80  swc1        $f1, 0xA80($s2)
    ctx->pc = 0x1aa310u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2688), bits); }
    // 0x1aa314: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1aa314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1aa318: 0xe442000c  swc1        $f2, 0xC($v0)
    ctx->pc = 0x1aa318u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x1aa31c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1aa31cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1aa320: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1aa320u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1aa324: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x1aa324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
    // 0x1aa328: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1aa328u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1aa32c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aa32cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aa330: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x1aa330u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x1aa334: 0x3c01be9e  lui         $at, 0xBE9E
    ctx->pc = 0x1aa334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48798 << 16));
    // 0x1aa338: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x1aa338u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x1aa33c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aa33cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aa340: 0x8e2607e0  lw          $a2, 0x7E0($s1)
    ctx->pc = 0x1aa340u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6007E0u));
    // 0x1aa344: 0x8c6707f0  lw          $a3, 0x7F0($v1)
    ctx->pc = 0x1aa344u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6007F0u));
    // 0x1aa348: 0x3c014258  lui         $at, 0x4258
    ctx->pc = 0x1aa348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16984 << 16));
    // 0x1aa34c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa34cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa350: 0x3c014266  lui         $at, 0x4266
    ctx->pc = 0x1aa350u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16998 << 16));
    // 0x1aa354: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aa354u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aa358: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa35c: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1aa35cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1aa360: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1aa360u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1aa364: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1aa364u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1aa368: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1aa368u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1aa36c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1aa36cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1aa370: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1aa370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1aa374: 0xc069760  jal         func_1A5D80
    ctx->pc = 0x1AA374u;
    SET_GPR_U32(ctx, 31, 0x1AA37Cu);
    ctx->pc = 0x1AA378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA374u;
    // 0x1aa378: 0xe7a20004  swc1        $f2, 0x4($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D80u, 0x1AA374u, 0x1AA37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA37Cu;
label_1aa37c:
    // 0x1aa37c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1aa37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1aa380: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1aa380u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1aa384: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1aa384u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1aa388: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1aa388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa38c: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x1aa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1aa390: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1aa390u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa394: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1aa394u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa398: 0x26460010  addiu       $a2, $s2, 0x10
    ctx->pc = 0x1aa398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_1aa39c:
    // 0x1aa39c: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1aa39cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa3a0: 0x7a040010  lq          $a0, 0x10($s0)
    ctx->pc = 0x1aa3a0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1aa3a4: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1aa3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x1aa3a8: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x1aa3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
    // 0x1aa3ac: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x1aa3acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1aa3b0: 0x1602fffa  bne         $s0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA3B0u;
    {
        const bool branch_taken_0x1aa3b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3B0u;
        // 0x1aa3b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa3b0) {
            ctx->pc = 0x1AA39Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa39c;
        }
    }
    ctx->pc = 0x1AA3B8u;
    // 0x1aa3b8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aa3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa3bc: 0x268398c8  addiu       $v1, $s4, -0x6738
    ctx->pc = 0x1aa3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940872));
    // 0x1aa3c0: 0x7a090000  lq          $t1, 0x0($s0)
    ctx->pc = 0x1aa3c0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa3c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3c8: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x1aa3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x1aa3cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa3d0: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x1aa3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
    // 0x1aa3d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa3d8: 0x3c014270  lui         $at, 0x4270
    ctx->pc = 0x1aa3d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17008 << 16));
    // 0x1aa3dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa3dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa3e0: 0x26500230  addiu       $s0, $s2, 0x230
    ctx->pc = 0x1aa3e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
    // 0x1aa3e4: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1aa3e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1aa3e8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa3e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa3ec: 0x26560340  addiu       $s6, $s2, 0x340
    ctx->pc = 0x1aa3ecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 832));
    // 0x1aa3f0: 0x8e420220  lw          $v0, 0x220($s2)
    ctx->pc = 0x1aa3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 544)));
    // 0x1aa3f4: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1aa3f4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1aa3f8: 0x8ce607e0  lw          $a2, 0x7E0($a3)
    ctx->pc = 0x1aa3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2016)));
    // 0x1aa3fc: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x1aa3fcu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x1aa400: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1aa400u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1aa404: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1aa404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1aa408: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1aa408u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1aa40c: 0x8ea707f0  lw          $a3, 0x7F0($s5)
    ctx->pc = 0x1aa40cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2032)));
    // 0x1aa410: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x1aa410u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x1aa414: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1aa414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1aa418: 0xc069760  jal         func_1A5D80
    ctx->pc = 0x1AA418u;
    SET_GPR_U32(ctx, 31, 0x1AA420u);
    ctx->pc = 0x1AA41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA418u;
    // 0x1aa41c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D80u, 0x1AA418u, 0x1AA420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA420u;
label_1aa420:
    // 0x1aa420: 0x26460120  addiu       $a2, $s2, 0x120
    ctx->pc = 0x1aa420u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 288));
    // 0x1aa424: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aa424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa428:
    // 0x1aa428: 0x78490000  lq          $t1, 0x0($v0)
    ctx->pc = 0x1aa428u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa42c: 0x784a0010  lq          $t2, 0x10($v0)
    ctx->pc = 0x1aa42cu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aa430: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x1aa430u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x1aa434: 0x7cca0010  sq          $t2, 0x10($a2)
    ctx->pc = 0x1aa434u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 10));
    // 0x1aa438: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1aa438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa43c: 0x1453fffa  bne         $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA43Cu;
    {
        const bool branch_taken_0x1aa43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA43Cu;
        // 0x1aa440: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa43c) {
            ctx->pc = 0x1AA428u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa428;
        }
    }
    ctx->pc = 0x1AA444u;
    // 0x1aa444: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aa444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa448: 0x268398c8  addiu       $v1, $s4, -0x6738
    ctx->pc = 0x1aa448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940872));
    // 0x1aa44c: 0x7a670000  lq          $a3, 0x0($s3)
    ctx->pc = 0x1aa44cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1aa450: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa454: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1aa454u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x1aa458: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa45c: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1aa45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1aa460: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa460u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa464: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa464u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa468: 0x3c014288  lui         $at, 0x4288
    ctx->pc = 0x1aa468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17032 << 16));
    // 0x1aa46c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa46cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa470: 0xae420220  sw          $v0, 0x220($s2)
    ctx->pc = 0x1aa470u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 544), GPR_U32(ctx, 2));
    // 0x1aa474: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1aa474u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1aa478: 0x8e420330  lw          $v0, 0x330($s2)
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 816)));
    // 0x1aa47c: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x1aa47cu;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x1aa480: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1aa480u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1aa484: 0x8ee607e8  lw          $a2, 0x7E8($s7)
    ctx->pc = 0x1aa484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2024)));
    // 0x1aa488: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1aa488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1aa48c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1aa48cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1aa490: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x1aa490u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x1aa494: 0x8ea707f0  lw          $a3, 0x7F0($s5)
    ctx->pc = 0x1aa494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2032)));
    // 0x1aa498: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1aa498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1aa49c: 0xc069760  jal         func_1A5D80
    ctx->pc = 0x1AA49Cu;
    SET_GPR_U32(ctx, 31, 0x1AA4A4u);
    ctx->pc = 0x1AA4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA49Cu;
    // 0x1aa4a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D80u, 0x1AA49Cu, 0x1AA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA4A4u;
label_1aa4a4:
    // 0x1aa4a4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aa4a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4a8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1aa4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa4ac:
    // 0x1aa4ac: 0x784b0000  lq          $t3, 0x0($v0)
    ctx->pc = 0x1aa4acu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa4b0: 0x78430010  lq          $v1, 0x10($v0)
    ctx->pc = 0x1aa4b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1aa4b4: 0x7ccb0000  sq          $t3, 0x0($a2)
    ctx->pc = 0x1aa4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 11));
    // 0x1aa4b8: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x1aa4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x1aa4bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1aa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1aa4c0: 0x1453fffa  bne         $v0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA4C0u;
    {
        const bool branch_taken_0x1aa4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AA4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4C0u;
        // 0x1aa4c4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4c0) {
            ctx->pc = 0x1AA4ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa4ac;
        }
    }
    ctx->pc = 0x1AA4C8u;
    // 0x1aa4c8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa4cc: 0x268398c8  addiu       $v1, $s4, -0x6738
    ctx->pc = 0x1aa4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940872));
    // 0x1aa4d0: 0x7a670000  lq          $a3, 0x0($s3)
    ctx->pc = 0x1aa4d0u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1aa4d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa4d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4d8: 0x7cc70000  sq          $a3, 0x0($a2)
    ctx->pc = 0x1aa4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 7));
    // 0x1aa4dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1aa4dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa4e0: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x1aa4e4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa4e8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1aa4e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa4ec: 0x3c014288  lui         $at, 0x4288
    ctx->pc = 0x1aa4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17032 << 16));
    // 0x1aa4f0: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1aa4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1aa4f4: 0xae420330  sw          $v0, 0x330($s2)
    ctx->pc = 0x1aa4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 816), GPR_U32(ctx, 2));
    // 0x1aa4f8: 0x460ca302  mul.s       $f12, $f20, $f12
    ctx->pc = 0x1aa4f8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    // 0x1aa4fc: 0x8e420440  lw          $v0, 0x440($s2)
    ctx->pc = 0x1aa4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1088)));
    // 0x1aa500: 0x460da342  mul.s       $f13, $f20, $f13
    ctx->pc = 0x1aa500u;
    ctx->f[13] = FPU_MUL_S(ctx->f[20], ctx->f[13]);
    // 0x1aa504: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1aa504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1aa508: 0x8ee607e8  lw          $a2, 0x7E8($s7)
    ctx->pc = 0x1aa508u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 2024)));
    // 0x1aa50c: 0x8ea707f0  lw          $a3, 0x7F0($s5)
    ctx->pc = 0x1aa50cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 2032)));
    // 0x1aa510: 0x46007406  mov.s       $f16, $f14
    ctx->pc = 0x1aa510u;
    ctx->f[16] = FPU_MOV_S(ctx->f[14]);
    // 0x1aa514: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1aa514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1aa518: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1aa518u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1aa51c: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1aa51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
    // 0x1aa520: 0xc069760  jal         func_1A5D80
    ctx->pc = 0x1AA520u;
    SET_GPR_U32(ctx, 31, 0x1AA528u);
    ctx->pc = 0x1AA524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA520u;
    // 0x1aa524: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5D80u, 0x1AA520u, 0x1AA528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA528u;
label_1aa528:
    // 0x1aa528: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x1aa528u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa52c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa530:
    // 0x1aa530: 0x788b0000  lq          $t3, 0x0($a0)
    ctx->pc = 0x1aa530u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa534: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x1aa534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1aa538: 0x7c6b0000  sq          $t3, 0x0($v1)
    ctx->pc = 0x1aa538u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 11));
    // 0x1aa53c: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x1aa53cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x1aa540: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x1aa540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1aa544: 0x1493fffa  bne         $a0, $s3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1AA544u;
    {
        const bool branch_taken_0x1aa544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        ctx->pc = 0x1AA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA544u;
        // 0x1aa548: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa544) {
            ctx->pc = 0x1AA530u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa530;
        }
    }
    ctx->pc = 0x1AA54Cu;
    // 0x1aa54c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1aa54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa550: 0x268598c8  addiu       $a1, $s4, -0x6738
    ctx->pc = 0x1aa550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940872));
    // 0x1aa554: 0x78870000  lq          $a3, 0x0($a0)
    ctx->pc = 0x1aa554u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1aa558: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x1aa558u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x1aa55c: 0xae420440  sw          $v0, 0x440($s2)
    ctx->pc = 0x1aa55cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1088), GPR_U32(ctx, 2));
    // 0x1aa560: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa564: 0xae400a9c  sw          $zero, 0xA9C($s2)
    ctx->pc = 0x1aa564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2716), GPR_U32(ctx, 0));
    // 0x1aa568: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa56c: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x1aa56cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
    // 0x1aa570: 0xc06a9b0  jal         func_1AA6C0
    ctx->pc = 0x1AA570u;
    SET_GPR_U32(ctx, 31, 0x1AA578u);
    ctx->pc = 0x1AA574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA570u;
    // 0x1aa574: 0xae430a98  sw          $v1, 0xA98($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 2712), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA6C0u, 0x1AA570u, 0x1AA578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA578u;
label_1aa578:
    // 0x1aa578: 0xae5e0a90  sw          $fp, 0xA90($s2)
    ctx->pc = 0x1aa578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2704), GPR_U32(ctx, 30));
    // 0x1aa57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1aa57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa580: 0xc06a99e  jal         func_1AA678
    ctx->pc = 0x1AA580u;
    SET_GPR_U32(ctx, 31, 0x1AA588u);
    ctx->pc = 0x1AA584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA580u;
    // 0x1aa584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA678u, 0x1AA580u, 0x1AA588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA588u;
label_1aa588:
    // 0x1aa588: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1aa588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1aa58c: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1aa58cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1aa590: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1aa590u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1aa594: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1aa594u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x1aa598: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1aa598u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1aa59c: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1aa59cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1aa5a0: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1aa5a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1aa5a4: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1aa5a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1aa5a8: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1aa5a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1aa5ac: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1aa5acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1aa5b0: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1aa5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1aa5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA5B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA5B4u;
        // 0x1aa5b8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA5B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA5BCu;
    // 0x1aa5bc: 0x0  nop
    ctx->pc = 0x1aa5bcu;
    // NOP
    ctx->pc = 0x1aa5c0u;
}
