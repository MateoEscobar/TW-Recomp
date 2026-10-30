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

// Function: sub_00231CD0
// Address: 0x231cd0 - 0x2320a0
void sub_00231CD0_0x231cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231CD0_0x231cd0");
#endif

    switch (ctx->pc) {
        case 0x231d24u: goto label_231d24;
        case 0x231d50u: goto label_231d50;
        case 0x231d80u: goto label_231d80;
        case 0x231db4u: goto label_231db4;
        case 0x231dccu: goto label_231dcc;
        case 0x231de4u: goto label_231de4;
        case 0x231df0u: goto label_231df0;
        case 0x231e8cu: goto label_231e8c;
        case 0x231e98u: goto label_231e98;
        case 0x231f80u: goto label_231f80;
        case 0x231f98u: goto label_231f98;
        case 0x232068u: goto label_232068;
        default: break;
    }

    ctx->pc = 0x231cd0u;

    // 0x231cd0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x231cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x231cd4: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x231cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x231cd8: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x231cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x231cdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x231cdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ce0: 0xe7b80110  swc1        $f24, 0x110($sp)
    ctx->pc = 0x231ce0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x231ce4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x231ce4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231ce8: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x231ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x231cec: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x231cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x231cf0: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x231cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x231cf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x231cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x231cf8: 0xe7b70108  swc1        $f23, 0x108($sp)
    ctx->pc = 0x231cf8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x231cfc: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x231cfcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x231d00: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x231d00u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x231d04: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x231d04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x231d08: 0x92220333  lbu         $v0, 0x333($s1)
    ctx->pc = 0x231d08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 819)));
    // 0x231d0c: 0x144000d6  bnez        $v0, . + 4 + (0xD6 << 2)
    ctx->pc = 0x231D0Cu;
    {
        const bool branch_taken_0x231d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x231D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231D0Cu;
        // 0x231d10: 0x46006606  mov.s       $f24, $f12 (Delay Slot)
        ctx->f[24] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x231d0c) {
            ctx->pc = 0x232068u;
            goto label_232068;
        }
    }
    ctx->pc = 0x231D14u;
    // 0x231d14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x231d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x231d18: 0x2450b8a8  addiu       $s0, $v0, -0x4758
    ctx->pc = 0x231d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949032));
    // 0x231d1c: 0xc0cd538  jal         func_3354E0
    ctx->pc = 0x231D1Cu;
    SET_GPR_U32(ctx, 31, 0x231D24u);
    ctx->pc = 0x231D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D1Cu;
    // 0x231d20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3354E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3354E0u, 0x231D1Cu, 0x231D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D24u;
label_231d24:
    // 0x231d24: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x231d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x231d28: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231d28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231d2c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x231d2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x231d30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d34: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x231d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
    // 0x231d38: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231d38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231d3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231d3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231d40: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x231d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x231d44: 0x46020502  mul.s       $f20, $f0, $f2
    ctx->pc = 0x231d44u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x231d48: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x231D48u;
    SET_GPR_U32(ctx, 31, 0x231D50u);
    ctx->pc = 0x231D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D48u;
    // 0x231d4c: 0x4601a500  add.s       $f20, $f20, $f1 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x231D48u, 0x231D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D50u;
label_231d50:
    // 0x231d50: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x231d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x231d54: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x231D54u;
    {
        const bool branch_taken_0x231d54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231d54) {
            ctx->pc = 0x231D58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x231D54u;
            // 0x231d58: 0x4600a507  neg.s       $f20, $f20 (Delay Slot)
            ctx->f[20] = FPU_NEG_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x231D5Cu;
            goto label_231d5c;
        }
    }
    ctx->pc = 0x231D5Cu;
label_231d5c:
    // 0x231d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x231d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x231d60: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x231d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x231d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231d68: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x231d68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x231d6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x231d6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x231d70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x231d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x231d74: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x231d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x231d78: 0xc0cd508  jal         func_335420
    ctx->pc = 0x231D78u;
    SET_GPR_U32(ctx, 31, 0x231D80u);
    ctx->pc = 0x231D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231D78u;
    // 0x231d7c: 0x26300090  addiu       $s0, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335420u, 0x231D78u, 0x231D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231D80u;
label_231d80:
    // 0x231d80: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x231d80u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x231d84: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x231d84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x231d88: 0x3c013e49  lui         $at, 0x3E49
    ctx->pc = 0x231d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15945 << 16));
    // 0x231d8c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x231d8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x231d90: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231d90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231d94: 0x24524b00  addiu       $s2, $v0, 0x4B00
    ctx->pc = 0x231d94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x231d98: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x231d98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x231d9c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x231d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231da0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x231da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x231da4: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x231da4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x231da8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x231da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x231dac: 0xc0cd8ec  jal         func_3363B0
    ctx->pc = 0x231DACu;
    SET_GPR_U32(ctx, 31, 0x231DB4u);
    ctx->pc = 0x231DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DACu;
    // 0x231db0: 0x4617a582  mul.s       $f22, $f20, $f23 (Delay Slot)
    ctx->f[22] = FPU_MUL_S(ctx->f[20], ctx->f[23]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x231DACu, 0x231DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DB4u;
label_231db4:
    // 0x231db4: 0x86050002  lh          $a1, 0x2($s0)
    ctx->pc = 0x231db4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x231db8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x231db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x231dbc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x231dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x231dc0: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x231dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x231dc4: 0xc0cd8c2  jal         func_336308
    ctx->pc = 0x231DC4u;
    SET_GPR_U32(ctx, 31, 0x231DCCu);
    ctx->pc = 0x231DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DC4u;
    // 0x231dc8: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336308u, 0x231DC4u, 0x231DCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DCCu;
label_231dcc:
    // 0x231dcc: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x231dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x231dd0: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x231dd0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x231dd4: 0x24731740  addiu       $s3, $v1, 0x1740
    ctx->pc = 0x231dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5952));
    // 0x231dd8: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x231dd8u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511740u));
    // 0x231ddc: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x231DDCu;
    SET_GPR_U32(ctx, 31, 0x231DE4u);
    ctx->pc = 0x231DE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DDCu;
    // 0x231de0: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x231DDCu, 0x231DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DE4u;
label_231de4:
    // 0x231de4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231de4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231de8: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x231DE8u;
    SET_GPR_U32(ctx, 31, 0x231DF0u);
    ctx->pc = 0x231DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231DE8u;
    // 0x231dec: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x231DE8u, 0x231DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231DF0u;
label_231df0:
    // 0x231df0: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x231df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231df4: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x231df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x231df8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x231df8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231dfc: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x231dfcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x231e00: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x231e00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231e04: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x231e04u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231e08: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x231e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x231e0c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x231e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x231e10: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x231e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x231e14: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x231e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231e18: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x231e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231e1c: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x231e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231e20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x231e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x231e24: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x231e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x231e28: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x231e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x231e2c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x231e2cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231e30: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x231e30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231e34: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x231e34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231e38: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x231e38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x231e3c: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x231e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231e40: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x231e40u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231e44: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x231e44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x231e48: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x231e48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231e4c: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x231e4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231e50: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x231e50u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x231e54: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x231e54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231e58: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x231e58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x231e5c: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x231e5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x231e60: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x231e60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231e64: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x231e64u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231e68: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x231e68u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231e6c: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x231e6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231e70: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x231e70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231e74: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x231e74u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x231e78: 0x4617ad42  mul.s       $f21, $f21, $f23
    ctx->pc = 0x231e78u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[23]);
    // 0x231e7c: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x231e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x231e80: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x231e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x231e84: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x231E84u;
    SET_GPR_U32(ctx, 31, 0x231E8Cu);
    ctx->pc = 0x231E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E84u;
    // 0x231e88: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x231E84u, 0x231E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E8Cu;
label_231e8c:
    // 0x231e8c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x231e8cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x231e90: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x231E90u;
    SET_GPR_U32(ctx, 31, 0x231E98u);
    ctx->pc = 0x231E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231E90u;
    // 0x231e94: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x231E90u, 0x231E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231E98u;
label_231e98:
    // 0x231e98: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x231e98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x231e9c: 0x4408a000  mfc1        $t0, $f20
    ctx->pc = 0x231e9cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x231ea0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x231ea0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231ea4: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x231ea4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x231ea8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x231ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231eac: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x231eacu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231eb0: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x231eb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x231eb4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x231eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x231eb8: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x231eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x231ebc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x231ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x231ec0: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x231ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231ec4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x231ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x231ec8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x231ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x231ecc: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x231eccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x231ed0: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x231ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x231ed4: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x231ed4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231ed8: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x231ed8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231edc: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x231edcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x231ee0: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x231ee0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231ee4: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x231ee4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231ee8: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x231ee8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231eec: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x231eecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x231ef0: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x231ef0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231ef4: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x231ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231ef8: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x231ef8u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x231efc: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x231efcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231f00: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x231f00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x231f04: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x231f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x231f08: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x231f08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f0c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x231f0cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231f10: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x231f10u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231f14: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x231f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f18: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x231f18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f1c: 0x48232800  qmfc2.ni    $v1, $vf5
    ctx->pc = 0x231f1cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x231f20: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x231f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x231f24: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x231f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x231f28: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x231f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x231f2c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x231f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231f30: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x231f30u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x231f34: 0x4bc208ea  vmul.xyz    $vf3, $vf1, $vf2
    ctx->pc = 0x231f34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231f38: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x231f38u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231f3c: 0x4bc1112e  vopmsub.xyz $vf4, $vf2, $vf1
    ctx->pc = 0x231f3cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x231f40: 0x4b0318c1  vaddy.x     $vf3, $vf3, $vf3y
    ctx->pc = 0x231f40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231f44: 0x4bc1115b  vmulw.xyz   $vf5, $vf2, $vf1w
    ctx->pc = 0x231f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f48: 0x4a25033c  vmove.w     $vf5, $vf0
    ctx->pc = 0x231f48u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x231f4c: 0x4b0318c2  vaddz.x     $vf3, $vf3, $vf3z
    ctx->pc = 0x231f4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231f50: 0x4bc52128  vadd.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x231f50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x231f54: 0x4bc30898  vmulx.xyz   $vf2, $vf1, $vf3x
    ctx->pc = 0x231f54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x231f58: 0x4bc1215b  vmulw.xyz   $vf5, $vf4, $vf1w
    ctx->pc = 0x231f58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f5c: 0x4bc40afe  vopmula.xyz $ACC, $vf1, $vf4
    ctx->pc = 0x231f5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x231f60: 0x4bc120ee  vopmsub.xyz $vf3, $vf4, $vf1
    ctx->pc = 0x231f60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x231f64: 0x4bc22968  vadd.xyz    $vf5, $vf5, $vf2
    ctx->pc = 0x231f64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f68: 0x4bc32968  vadd.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x231f68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x231f6c: 0x48222800  qmfc2.ni    $v0, $vf5
    ctx->pc = 0x231f6cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x231f70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f74: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x231f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x231f78: 0xc087408  jal         func_21D020
    ctx->pc = 0x231F78u;
    SET_GPR_U32(ctx, 31, 0x231F80u);
    ctx->pc = 0x231F7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F78u;
    // 0x231f7c: 0x7fa20040  sq          $v0, 0x40($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x231F78u, 0x231F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F80u;
label_231f80:
    // 0x231f80: 0x3c013fd9  lui         $at, 0x3FD9
    ctx->pc = 0x231f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16345 << 16));
    // 0x231f84: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x231f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x231f88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x231f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x231f8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x231f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231f90: 0xc08a05a  jal         func_228168
    ctx->pc = 0x231F90u;
    SET_GPR_U32(ctx, 31, 0x231F98u);
    ctx->pc = 0x231F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x231F90u;
    // 0x231f94: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228168u, 0x231F90u, 0x231F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x231F98u;
label_231f98:
    // 0x231f98: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x231F98u;
    {
        const bool branch_taken_0x231f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x231F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x231F98u;
        // 0x231f9c: 0x86030002  lh          $v1, 0x2($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231f98) {
            ctx->pc = 0x231FB0u;
            goto label_231fb0;
        }
    }
    ctx->pc = 0x231FA0u;
    // 0x231fa0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x231fa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x231fa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231fa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231fa8: 0x0  nop
    ctx->pc = 0x231fa8u;
    // NOP
    // 0x231fac: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x231facu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_231fb0:
    // 0x231fb0: 0x26240284  addiu       $a0, $s1, 0x284
    ctx->pc = 0x231fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    // 0x231fb4: 0x7a670000  lq          $a3, 0x0($s3)
    ctx->pc = 0x231fb4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x231fb8: 0x4600c306  mov.s       $f12, $f24
    ctx->pc = 0x231fb8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[24]);
    // 0x231fbc: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x231fbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x231fc0: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x231fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x231fc4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x231fc4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x231fc8: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x231fc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231fcc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x231fccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x231fd0: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x231fd0u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x231fd4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x231fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x231fd8: 0x7fa70070  sq          $a3, 0x70($sp)
    ctx->pc = 0x231fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 7));
    // 0x231fdc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x231fdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231fe0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x231fe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x231fe4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x231fe4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231fe8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x231fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x231fec: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x231fecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x231ff0: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x231ff0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x231ff4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x231ff4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x231ff8: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x231ff8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x231ffc: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x231ffcu;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x232000: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x232000u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x232004: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x232004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x232008: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x232008u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23200c: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x23200cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x232010: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x232010u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x232014: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x232014u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x232018: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x232018u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x23201c: 0x7fa70080  sq          $a3, 0x80($sp)
    ctx->pc = 0x23201cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 7));
    // 0x232020: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x232020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x232024: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x232024u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x232028: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x232028u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x23202c: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x23202cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x232030: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x232030u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x232034: 0x48281000  qmfc2.ni    $t0, $vf2
    ctx->pc = 0x232034u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x232038: 0x7fa70050  sq          $a3, 0x50($sp)
    ctx->pc = 0x232038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 7));
    // 0x23203c: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x23203cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x232040: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x232040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x232044: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x232044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x232048: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x232048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x23204c: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x23204cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x232050: 0x7fa80040  sq          $t0, 0x40($sp)
    ctx->pc = 0x232050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 8));
    // 0x232054: 0x7fa30060  sq          $v1, 0x60($sp)
    ctx->pc = 0x232054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 3));
    // 0x232058: 0x7fa80080  sq          $t0, 0x80($sp)
    ctx->pc = 0x232058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 8));
    // 0x23205c: 0x7fa80070  sq          $t0, 0x70($sp)
    ctx->pc = 0x23205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    // 0x232060: 0xc0a67ca  jal         func_299F28
    ctx->pc = 0x232060u;
    SET_GPR_U32(ctx, 31, 0x232068u);
    ctx->pc = 0x232064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x232060u;
    // 0x232064: 0x7fa80050  sq          $t0, 0x50($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299F28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299F28u, 0x232060u, 0x232068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x232068u;
label_232068:
    // 0x232068: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x232068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x23206c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x23206cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x232070: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x232070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x232074: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x232074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x232078: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x232078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x23207c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x23207cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x232080: 0xc7b80110  lwc1        $f24, 0x110($sp)
    ctx->pc = 0x232080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x232084: 0xc7b70108  lwc1        $f23, 0x108($sp)
    ctx->pc = 0x232084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x232088: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x232088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x23208c: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x23208cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x232090: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x232090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x232094: 0x3e00008  jr          $ra
    ctx->pc = 0x232094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x232094u;
        // 0x232098: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x232094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23209Cu;
    // 0x23209c: 0x0  nop
    ctx->pc = 0x23209cu;
    // NOP
    ctx->pc = 0x2320a0u;
}
