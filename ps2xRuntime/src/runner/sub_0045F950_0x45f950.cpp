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

// Function: sub_0045F950
// Address: 0x45f950 - 0x45fc50
void sub_0045F950_0x45f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045F950_0x45f950");
#endif

    switch (ctx->pc) {
        case 0x45f9c8u: goto label_45f9c8;
        case 0x45f9d0u: goto label_45f9d0;
        case 0x45f9dcu: goto label_45f9dc;
        default: break;
    }

    ctx->pc = 0x45f950u;

    // 0x45f950: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x45f950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x45f954: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x45f954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x45f958: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x45f958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x45f95c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x45f95cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x45f960: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x45f960u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f964: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x45f964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x45f968: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x45f968u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f96c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x45f96cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x45f970: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x45f970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x45f974: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x45f974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x45f978: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x45f978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x45f97c: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x45f97cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x45f980: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x45f980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x45f984: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x45f984u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x45f988: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x45f988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x45f98c: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x45f98cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45f990: 0x8d020020  lw          $v0, 0x20($t0)
    ctx->pc = 0x45f990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x45f994: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x45f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x45f998: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x45f998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x45f99c: 0x8c940004  lw          $s4, 0x4($a0)
    ctx->pc = 0x45f99cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45f9a0: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x45f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x45f9a4: 0x8d1e0038  lw          $fp, 0x38($t0)
    ctx->pc = 0x45f9a4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x45f9a8: 0x8d110004  lw          $s1, 0x4($t0)
    ctx->pc = 0x45f9a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x45f9ac: 0x8d130034  lw          $s3, 0x34($t0)
    ctx->pc = 0x45f9acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
    // 0x45f9b0: 0x18e00099  blez        $a3, . + 4 + (0x99 << 2)
    ctx->pc = 0x45F9B0u;
    {
        const bool branch_taken_0x45f9b0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x45F9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F9B0u;
        // 0x45f9b4: 0x8d12001c  lw          $s2, 0x1C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f9b0) {
            ctx->pc = 0x45FC18u;
            goto label_45fc18;
        }
    }
    ctx->pc = 0x45F9B8u;
    // 0x45f9b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x45f9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x45f9bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x45f9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x45f9c0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x45f9c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x45f9c4: 0x0  nop
    ctx->pc = 0x45f9c4u;
    // NOP
label_45f9c8:
    // 0x45f9c8: 0xc12e310  jal         func_4B8C40
    ctx->pc = 0x45F9C8u;
    SET_GPR_U32(ctx, 31, 0x45F9D0u);
    ctx->pc = 0x45F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45F9C8u;
    // 0x45f9cc: 0xc66c0000  lwc1        $f12, 0x0($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8C40u, 0x45F9C8u, 0x45F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F9D0u;
label_45f9d0:
    // 0x45f9d0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x45f9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x45f9d4: 0xc12e29c  jal         func_4B8A70
    ctx->pc = 0x45F9D4u;
    SET_GPR_U32(ctx, 31, 0x45F9DCu);
    ctx->pc = 0x45F9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x45F9D4u;
    // 0x45f9d8: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x4B8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B8A70u, 0x45F9D4u, 0x45F9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45F9DCu;
label_45f9dc:
    // 0x45f9dc: 0x27e9821  addu        $s3, $s3, $fp
    ctx->pc = 0x45f9dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
    // 0x45f9e0: 0xc6e30000  lwc1        $f3, 0x0($s7)
    ctx->pc = 0x45f9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x45f9e4: 0x4600a107  neg.s       $f4, $f20
    ctx->pc = 0x45f9e4u;
    ctx->f[4] = FPU_NEG_S(ctx->f[20]);
    // 0x45f9e8: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x45f9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x45f9ec: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x45f9ecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x45f9f0: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x45f9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45f9f4: 0x4603a182  mul.s       $f6, $f20, $f3
    ctx->pc = 0x45f9f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
    // 0x45f9f8: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x45f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45f9fc: 0x46050302  mul.s       $f12, $f0, $f5
    ctx->pc = 0x45f9fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x45fa00: 0xc6c80004  lwc1        $f8, 0x4($s6)
    ctx->pc = 0x45fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x45fa04: 0x4602a242  mul.s       $f9, $f20, $f2
    ctx->pc = 0x45fa04u;
    ctx->f[9] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x45fa08: 0xc6e70008  lwc1        $f7, 0x8($s7)
    ctx->pc = 0x45fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x45fa0c: 0x460102c2  mul.s       $f11, $f0, $f1
    ctx->pc = 0x45fa0cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45fa10: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x45fa10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x45fa14: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x45fa14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x45fa18: 0x46080282  mul.s       $f10, $f0, $f8
    ctx->pc = 0x45fa18u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x45fa1c: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x45fa1cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x45fa20: 0x46052142  mul.s       $f5, $f4, $f5
    ctx->pc = 0x45fa20u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x45fa24: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x45fa24u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x45fa28: 0x4607a502  mul.s       $f20, $f20, $f7
    ctx->pc = 0x45fa28u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[7]);
    // 0x45fa2c: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x45fa2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x45fa30: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x45fa30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x45fa34: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x45fa34u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x45fa38: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x45fa38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x45fa3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fa3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fa40: 0x460c3180  add.s       $f6, $f6, $f12
    ctx->pc = 0x45fa40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[12]);
    // 0x45fa44: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x45fa44u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45fa48: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x45fa48u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x45fa4c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x45fa4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45fa50: 0x460ba500  add.s       $f20, $f20, $f11
    ctx->pc = 0x45fa50u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[11]);
    // 0x45fa54: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x45fa54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45fa58: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x45fa58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45fa5c: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x45fa5cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45fa60: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x45fa60u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45fa64: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x45fa64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fa68: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x45fa68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x45fa6c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x45fa6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x45fa70: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x45fa70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x45fa74: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x45fa74u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x45fa78: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x45fa78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fa7c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x45fa7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x45fa80: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x45fa80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x45fa84: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x45fa84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x45fa88: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x45fa88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fa8c: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x45fa8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x45fa90: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x45fa90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x45fa94: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x45fa94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45fa98: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x45fa98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fa9c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x45fa9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x45faa0: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x45faa0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x45faa4: 0xe7a60010  swc1        $f6, 0x10($sp)
    ctx->pc = 0x45faa4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45faa8: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x45faa8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x45faac: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x45faacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fab0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x45fab0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x45fab4: 0x46004a42  mul.s       $f9, $f9, $f0
    ctx->pc = 0x45fab4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[0]);
    // 0x45fab8: 0xe7a90014  swc1        $f9, 0x14($sp)
    ctx->pc = 0x45fab8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x45fabc: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x45fabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fac0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x45fac0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x45fac4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x45fac4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x45fac8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x45fac8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x45facc: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x45faccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x45fad0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45fad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fad4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x45fad4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x45fad8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45fad8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fadc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45fadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fae0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45fae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fae4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fae4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fae8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45fae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45faec: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45faecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45faf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45faf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45faf4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45faf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45faf8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45faf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fafc: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45fafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb00: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fb00u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fb04: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45fb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fb08: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45fb08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45fb0c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fb0cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fb10: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45fb10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fb14: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45fb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb18: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x45fb18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45fb1c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45fb1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fb20: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45fb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fb24: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45fb24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45fb28: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fb28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fb2c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45fb2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fb30: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45fb30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb34: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45fb34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fb38: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45fb38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fb3c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45fb3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45fb40: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fb40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fb44: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45fb44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45fb48: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45fb48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb4c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45fb4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fb50: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45fb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fb54: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x45fb54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x45fb58: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fb58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fb5c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45fb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fb60: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x45fb60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45fb64: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45fb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb68: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45fb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fb6c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45fb6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fb70: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fb70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fb74: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fb74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fb78: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45fb78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fb7c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45fb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb80: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45fb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fb84: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45fb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fb88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fb88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fb8c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fb8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fb90: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45fb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45fb94: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45fb94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fb98: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45fb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fb9c: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45fb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fba0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fba0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fba4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fba4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fba8: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45fba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fbac: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x45fbacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x45fbb0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x45fbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fbb4: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x45fbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fbb8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fbb8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fbbc: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x45fbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fbc0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fbc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fbc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fbc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fbc8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x45fbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x45fbcc: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x45fbccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fbd0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x45fbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fbd4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fbd4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fbd8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x45fbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fbdc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fbdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fbe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fbe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fbe4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x45fbe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x45fbe8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x45fbe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x45fbec: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x45fbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45fbf0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x45fbf0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x45fbf4: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x45fbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x45fbf8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x45fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x45fbfc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x45fbfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x45fc00: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x45fc00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x45fc04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x45fc04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x45fc08: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x45fc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x45fc0c: 0x16a0ff6e  bnez        $s5, . + 4 + (-0x92 << 2)
    ctx->pc = 0x45FC0Cu;
    {
        const bool branch_taken_0x45fc0c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x45FC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45FC0Cu;
        // 0x45fc10: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45fc0c) {
            ctx->pc = 0x45F9C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45f9c8;
        }
    }
    ctx->pc = 0x45FC14u;
    // 0x45fc14: 0x0  nop
    ctx->pc = 0x45fc14u;
    // NOP
label_45fc18:
    // 0x45fc18: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x45fc18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x45fc1c: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x45fc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x45fc20: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x45fc20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x45fc24: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x45fc24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x45fc28: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x45fc28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x45fc2c: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x45fc2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x45fc30: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x45fc30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x45fc34: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x45fc34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x45fc38: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x45fc38u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x45fc3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45fc3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x45fc40: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x45fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x45fc44: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x45fc44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x45fc48: 0x3e00008  jr          $ra
    ctx->pc = 0x45FC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45FC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45FC48u;
        // 0x45fc4c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45FC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45FC50u;
}
