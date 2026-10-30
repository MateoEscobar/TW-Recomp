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

// Function: sub_00306C68
// Address: 0x306c68 - 0x306dd0
void sub_00306C68_0x306c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00306C68_0x306c68");
#endif

    switch (ctx->pc) {
        case 0x306ce4u: goto label_306ce4;
        case 0x306d8cu: goto label_306d8c;
        default: break;
    }

    ctx->pc = 0x306c68u;

    // 0x306c68: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x306c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x306c6c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x306c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x306c70: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x306c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x306c74: 0x24423260  addiu       $v0, $v0, 0x3260
    ctx->pc = 0x306c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12896));
    // 0x306c78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x306c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c7c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x306c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x306c80: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x306c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x306c84: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x306c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c88: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x306c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x306c8c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x306c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x306c90: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x306c90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c94: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x306c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x306c98: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x306c98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306c9c: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x306c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x306ca0: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x306ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ca4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x306ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x306ca8: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x306ca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306cac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x306cb0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x306cb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306cb4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x306cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x306cb8: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x306cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
    // 0x306cbc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x306cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306cc0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x306cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x306cc4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x306cc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x306cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x306cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306ccc: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x306cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x306cd0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x306cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x306cd4: 0xa2200018  sb          $zero, 0x18($s1)
    ctx->pc = 0x306cd4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x306cd8: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x306cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x306cdc: 0xc0c1a3e  jal         func_3068F8
    ctx->pc = 0x306CDCu;
    SET_GPR_U32(ctx, 31, 0x306CE4u);
    ctx->pc = 0x306CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CDCu;
    // 0x306ce0: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3068F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3068F8u, 0x306CDCu, 0x306CE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CE4u;
label_306ce4:
    // 0x306ce4: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x306ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
    // 0x306ce8: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x306ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x306cec: 0x244232c0  addiu       $v0, $v0, 0x32C0
    ctx->pc = 0x306cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12992));
    // 0x306cf0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x306CF0u;
    {
        const bool branch_taken_0x306cf0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x306CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CF0u;
        // 0x306cf4: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cf0) {
            ctx->pc = 0x306D0Cu;
            goto label_306d0c;
        }
    }
    ctx->pc = 0x306CF8u;
    // 0x306cf8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x306cf8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306cfc: 0x0  nop
    ctx->pc = 0x306cfcu;
    // NOP
    // 0x306d00: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x306d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x306d04: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x306D04u;
    {
        const bool branch_taken_0x306d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D04u;
        // 0x306d08: 0xe6200024  swc1        $f0, 0x24($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d04) {
            ctx->pc = 0x306D2Cu;
            goto label_306d2c;
        }
    }
    ctx->pc = 0x306D0Cu;
label_306d0c:
    // 0x306d0c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x306d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x306d10: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x306d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x306d14: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x306d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x306d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306d1c: 0x0  nop
    ctx->pc = 0x306d1cu;
    // NOP
    // 0x306d20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x306d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x306d24: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x306d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x306d28: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x306d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_306d2c:
    // 0x306d2c: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x306D2Cu;
    {
        const bool branch_taken_0x306d2c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x306D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D2Cu;
        // 0x306d30: 0x131842  srl         $v1, $s3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d2c) {
            ctx->pc = 0x306D48u;
            goto label_306d48;
        }
    }
    ctx->pc = 0x306D34u;
    // 0x306d34: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x306d34u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306d38: 0x0  nop
    ctx->pc = 0x306d38u;
    // NOP
    // 0x306d3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x306d3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x306d40: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x306D40u;
    {
        const bool branch_taken_0x306d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D40u;
        // 0x306d44: 0xae34002c  sw          $s4, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d40) {
            ctx->pc = 0x306D64u;
            goto label_306d64;
        }
    }
    ctx->pc = 0x306D48u;
label_306d48:
    // 0x306d48: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x306d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
    // 0x306d4c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x306d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x306d50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x306d50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x306d54: 0x0  nop
    ctx->pc = 0x306d54u;
    // NOP
    // 0x306d58: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x306d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x306d5c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x306d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x306d60: 0xae34002c  sw          $s4, 0x2C($s1)
    ctx->pc = 0x306d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 20));
label_306d64:
    // 0x306d64: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x306d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d68: 0xae350040  sw          $s5, 0x40($s1)
    ctx->pc = 0x306d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 21));
    // 0x306d6c: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x306d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
    // 0x306d70: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x306d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x306d74: 0xae200038  sw          $zero, 0x38($s1)
    ctx->pc = 0x306d74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x306d78: 0xa2200044  sb          $zero, 0x44($s1)
    ctx->pc = 0x306d78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x306d7c: 0xa2200045  sb          $zero, 0x45($s1)
    ctx->pc = 0x306d7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 69), (uint8_t)GPR_U32(ctx, 0));
    // 0x306d80: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x306d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x306d84: 0xc0d4da6  jal         func_353698
    ctx->pc = 0x306D84u;
    SET_GPR_U32(ctx, 31, 0x306D8Cu);
    ctx->pc = 0x306D88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D84u;
    // 0x306d88: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x353698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x353698u, 0x306D84u, 0x306D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D8Cu;
label_306d8c:
    // 0x306d8c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x306d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x306d90: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x306d90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x306d94: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x306d94u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50B734u));
    // 0x306d98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x306d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x306d9c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x306d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x306da0: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x306da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x306da4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x306da4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x306da8: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x306da8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x306dac: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x306dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x306db0: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x306db0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x306db4: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x306db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x306db8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x306db8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x306dbc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x306dbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x306dc0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x306dc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x306dc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306dc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x306dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x306DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DC8u;
        // 0x306dcc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306DD0u;
}
