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

// Function: sub_00142DB8
// Address: 0x142db8 - 0x142f98
void sub_00142DB8_0x142db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142DB8_0x142db8");
#endif

    switch (ctx->pc) {
        case 0x142ec4u: goto label_142ec4;
        case 0x142edcu: goto label_142edc;
        case 0x142ef4u: goto label_142ef4;
        case 0x142f10u: goto label_142f10;
        case 0x142f28u: goto label_142f28;
        case 0x142f44u: goto label_142f44;
        case 0x142f5cu: goto label_142f5c;
        default: break;
    }

    ctx->pc = 0x142db8u;

    // 0x142db8: 0x460c6042  mul.s       $f1, $f12, $f12
    ctx->pc = 0x142db8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x142dbc: 0x3c01bfc0  lui         $at, 0xBFC0
    ctx->pc = 0x142dbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49088 << 16));
    // 0x142dc0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x142dc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x142dc4: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x142dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x142dc8: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x142dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x142dcc: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x142dccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x142dd0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x142dd4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x142dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x142dd8: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x142dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x142ddc: 0x460c0802  mul.s       $f0, $f1, $f12
    ctx->pc = 0x142ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x142de0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x142de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x142de4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x142de4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x142de8: 0x46010a00  add.s       $f8, $f1, $f1
    ctx->pc = 0x142de8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x142dec: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x142decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x142df0: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x142df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x142df4: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x142df4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x142df8: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x142df8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x142dfc: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x142dfcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x142e00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x142e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x142e04: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x142e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x142e08: 0x46050142  mul.s       $f5, $f0, $f5
    ctx->pc = 0x142e08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x142e0c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x142e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x142e10: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x142e10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x142e14: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x142e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x142e18: 0x46066302  mul.s       $f12, $f12, $f6
    ctx->pc = 0x142e18u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x142e1c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x142e1cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x142e20: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x142e20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
    // 0x142e24: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x142e24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x142e28: 0x460609c2  mul.s       $f7, $f1, $f6
    ctx->pc = 0x142e28u;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x142e2c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x142e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x142e30: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x142e30u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x142e34: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x142e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x142e38: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x142e38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x142e3c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x142e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x142e40: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x142e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x142e44: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x142e44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142e48: 0x460c1540  add.s       $f21, $f2, $f12
    ctx->pc = 0x142e48u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
    // 0x142e4c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x142e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142e50: 0x46091d00  add.s       $f20, $f3, $f9
    ctx->pc = 0x142e50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x142e54: 0x460c2b01  sub.s       $f12, $f5, $f12
    ctx->pc = 0x142e54u;
    ctx->f[12] = FPU_SUB_S(ctx->f[5], ctx->f[12]);
    // 0x142e58: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x142E58u;
    {
        const bool branch_taken_0x142e58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E58u;
        // 0x142e5c: 0x46070581  sub.s       $f22, $f0, $f7 (Delay Slot)
        ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e58) {
            ctx->pc = 0x142E6Cu;
            goto label_142e6c;
        }
    }
    ctx->pc = 0x142E60u;
    // 0x142e60: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x142e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x142e64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x142E64u;
    {
        const bool branch_taken_0x142e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E64u;
        // 0x142e68: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e64) {
            ctx->pc = 0x142E70u;
            goto label_142e70;
        }
    }
    ctx->pc = 0x142E6Cu;
label_142e6c:
    // 0x142e6c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x142e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_142e70:
    // 0x142e70: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x142e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x142e74: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x142e74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142e78: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142E78u;
    {
        const bool branch_taken_0x142e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E78u;
        // 0x142e7c: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e78) {
            ctx->pc = 0x142E88u;
            goto label_142e88;
        }
    }
    ctx->pc = 0x142E80u;
    // 0x142e80: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142E80u;
    {
        const bool branch_taken_0x142e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E80u;
        // 0x142e84: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e80) {
            ctx->pc = 0x142E90u;
            goto label_142e90;
        }
    }
    ctx->pc = 0x142E88u;
label_142e88:
    // 0x142e88: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x142e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x142e8c: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x142e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_142e90:
    // 0x142e90: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x142e90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142e94: 0x24e2fffe  addiu       $v0, $a3, -0x2
    ctx->pc = 0x142e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
    // 0x142e98: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x142e98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x142e9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x142E9Cu;
    {
        const bool branch_taken_0x142e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E9Cu;
        // 0x142ea0: 0x61100  sll         $v0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e9c) {
            ctx->pc = 0x142EACu;
            goto label_142eac;
        }
    }
    ctx->pc = 0x142EA4u;
    // 0x142ea4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x142EA4u;
    {
        const bool branch_taken_0x142ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142EA4u;
        // 0x142ea8: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142ea4) {
            ctx->pc = 0x142EB4u;
            goto label_142eb4;
        }
    }
    ctx->pc = 0x142EACu;
label_142eac:
    // 0x142eac: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x142eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x142eb0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x142eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
label_142eb4:
    // 0x142eb4: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x142eb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142eb8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x142eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ebc: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x142EBCu;
    SET_GPR_U32(ctx, 31, 0x142EC4u);
    ctx->pc = 0x142EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EBCu;
    // 0x142ec0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x142EBCu, 0x142EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EC4u;
label_142ec4:
    // 0x142ec4: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x142ec4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142ec8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x142ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142ecc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x142eccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x142ed0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x142ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ed4: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x142ED4u;
    SET_GPR_U32(ctx, 31, 0x142EDCu);
    ctx->pc = 0x142ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142ED4u;
    // 0x142ed8: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x142ED4u, 0x142EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EDCu;
label_142edc:
    // 0x142edc: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142edcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142ee0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x142ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142ee4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x142ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142ee8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x142ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142eec: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x142EECu;
    SET_GPR_U32(ctx, 31, 0x142EF4u);
    ctx->pc = 0x142EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142EECu;
    // 0x142ef0: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x142EECu, 0x142EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142EF4u;
label_142ef4:
    // 0x142ef4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142ef8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x142ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142efc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x142efcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x142f00: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x142f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f04: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x142f08: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x142F08u;
    SET_GPR_U32(ctx, 31, 0x142F10u);
    ctx->pc = 0x142F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F08u;
    // 0x142f0c: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x142F08u, 0x142F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F10u;
label_142f10:
    // 0x142f10: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142f10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142f14: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x142f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142f18: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x142f18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f1c: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x142f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142f20: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x142F20u;
    SET_GPR_U32(ctx, 31, 0x142F28u);
    ctx->pc = 0x142F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F20u;
    // 0x142f24: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x142F20u, 0x142F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F28u;
label_142f28:
    // 0x142f28: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142f28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142f2c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x142f2cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x142f30: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x142f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142f34: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x142f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f38: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x142f3c: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x142F3Cu;
    SET_GPR_U32(ctx, 31, 0x142F44u);
    ctx->pc = 0x142F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F3Cu;
    // 0x142f40: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x142F3Cu, 0x142F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F44u;
label_142f44:
    // 0x142f44: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142f44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142f48: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x142f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x142f4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x142f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142f50: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x142f50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142f54: 0xc136b18  jal         func_4DAC60
    ctx->pc = 0x142F54u;
    SET_GPR_U32(ctx, 31, 0x142F5Cu);
    ctx->pc = 0x142F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142F54u;
    // 0x142f58: 0x7fa20020  sq          $v0, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC60u, 0x142F54u, 0x142F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142F5Cu;
label_142f5c:
    // 0x142f5c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x142f5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x142f60: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x142f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x142f64: 0x7e620000  sq          $v0, 0x0($s3)
    ctx->pc = 0x142f64u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), GPR_VEC(ctx, 2));
    // 0x142f68: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x142f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x142f6c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x142f6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x142f70: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x142f70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x142f74: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x142f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x142f78: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x142f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x142f7c: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x142f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x142f80: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x142f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x142f84: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x142f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x142f88: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x142f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x142f8c: 0x3e00008  jr          $ra
    ctx->pc = 0x142F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142F8Cu;
        // 0x142f90: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142F8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142F94u;
    // 0x142f94: 0x0  nop
    ctx->pc = 0x142f94u;
    // NOP
    ctx->pc = 0x142f98u;
}
