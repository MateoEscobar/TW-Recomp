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

// Function: sub_004556F0
// Address: 0x4556f0 - 0x455e68
void sub_004556F0_0x4556f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004556F0_0x4556f0");
#endif

    switch (ctx->pc) {
        case 0x45579cu: goto label_45579c;
        case 0x4557c8u: goto label_4557c8;
        case 0x455810u: goto label_455810;
        case 0x4558a0u: goto label_4558a0;
        case 0x4558bcu: goto label_4558bc;
        case 0x455900u: goto label_455900;
        case 0x455928u: goto label_455928;
        case 0x45597cu: goto label_45597c;
        case 0x4559a0u: goto label_4559a0;
        case 0x4559d0u: goto label_4559d0;
        case 0x455a38u: goto label_455a38;
        case 0x455a74u: goto label_455a74;
        case 0x455a98u: goto label_455a98;
        case 0x455b1cu: goto label_455b1c;
        case 0x455b68u: goto label_455b68;
        case 0x455b90u: goto label_455b90;
        case 0x455c18u: goto label_455c18;
        case 0x455c40u: goto label_455c40;
        case 0x455c78u: goto label_455c78;
        case 0x455cf4u: goto label_455cf4;
        case 0x455d3cu: goto label_455d3c;
        case 0x455d60u: goto label_455d60;
        case 0x455de8u: goto label_455de8;
        default: break;
    }

    ctx->pc = 0x4556f0u;

    // 0x4556f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4556f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4556f4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4556f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4556f8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4556f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4556fc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4556fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455700: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x455700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x455704: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x455704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x455708: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x455708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x45570c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x45570cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x455710: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x455710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x455714: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x455714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x455718: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x455718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x45571c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x45571cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x455720: 0xc5000070  lwc1        $f0, 0x70($t0)
    ctx->pc = 0x455720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x455724: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x455724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x455728: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x455728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x45572c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x45572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x455730: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x455730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x455734: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x455734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x455738: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x455738u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x45573c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x45573cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x455740: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x455740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x455744: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x455744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x455748: 0xe7a30008  swc1        $f3, 0x8($sp)
    ctx->pc = 0x455748u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x45574c: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x45574cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x455750: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x455750u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x455754: 0xc5000074  lwc1        $f0, 0x74($t0)
    ctx->pc = 0x455754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x455758: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x455758u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x45575c: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x45575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x455760: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x455760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x455764: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x455764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x455768: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x455768u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x45576c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x45576cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x455770: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x455770u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x455774: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x455774u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x455778: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x455778u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x45577c: 0xe7a30014  swc1        $f3, 0x14($sp)
    ctx->pc = 0x45577cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x455780: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x455780u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x455784: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x455784u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x455788: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x455788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x45578c: 0x14a20190  bne         $a1, $v0, . + 4 + (0x190 << 2)
    ctx->pc = 0x45578Cu;
    {
        const bool branch_taken_0x45578c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x455790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45578Cu;
        // 0x455790: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45578c) {
            ctx->pc = 0x455DD0u;
            goto label_455dd0;
        }
    }
    ctx->pc = 0x455794u;
    // 0x455794: 0xc10f4c8  jal         func_43D320
    ctx->pc = 0x455794u;
    SET_GPR_U32(ctx, 31, 0x45579Cu);
    ctx->pc = 0x455798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x455794u;
    // 0x455798: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D320u, 0x455794u, 0x45579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x45579Cu;
label_45579c:
    // 0x45579c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x45579cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x4557a0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x4557a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x4557a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4557a4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x4557a8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x4557a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x4557ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x4557ACu;
    {
        const bool branch_taken_0x4557ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4557B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4557ACu;
        // 0x4557b0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4557ac) {
            ctx->pc = 0x4557E8u;
            goto label_4557e8;
        }
    }
    ctx->pc = 0x4557B4u;
    // 0x4557b4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4557b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x4557b8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x4557b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x4557bc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x4557bcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x4557c0: 0xf  sync
    ctx->pc = 0x4557c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4557c4: 0x40f  sync.p
    ctx->pc = 0x4557c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4557c8:
    // 0x4557c8: 0x0  nop
    ctx->pc = 0x4557c8u;
    // NOP
    // 0x4557cc: 0x0  nop
    ctx->pc = 0x4557ccu;
    // NOP
    // 0x4557d0: 0x0  nop
    ctx->pc = 0x4557d0u;
    // NOP
    // 0x4557d4: 0x0  nop
    ctx->pc = 0x4557d4u;
    // NOP
    // 0x4557d8: 0x0  nop
    ctx->pc = 0x4557d8u;
    // NOP
    // 0x4557dc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4557DCu;
    {
        const bool branch_taken_0x4557dc = (false);
        if (branch_taken_0x4557dc) {
            ctx->pc = 0x4557C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4557c8;
        }
    }
    ctx->pc = 0x4557E4u;
    // 0x4557e4: 0x0  nop
    ctx->pc = 0x4557e4u;
    // NOP
label_4557e8:
    // 0x4557e8: 0x3c021001  lui         $v0, 0x1001
    ctx->pc = 0x4557e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4097 << 16));
    // 0x4557ec: 0x8c42d000  lw          $v0, -0x3000($v0)
    ctx->pc = 0x4557ecu;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x4557f0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4557f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4557f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x4557F4u;
    {
        const bool branch_taken_0x4557f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4557F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4557F4u;
        // 0x4557f8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4557f4) {
            ctx->pc = 0x455830u;
            goto label_455830;
        }
    }
    ctx->pc = 0x4557FCu;
    // 0x4557fc: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x4557fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455800: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455804: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455804u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455808: 0xf  sync
    ctx->pc = 0x455808u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45580c: 0x40f  sync.p
    ctx->pc = 0x45580cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455810:
    // 0x455810: 0x0  nop
    ctx->pc = 0x455810u;
    // NOP
    // 0x455814: 0x0  nop
    ctx->pc = 0x455814u;
    // NOP
    // 0x455818: 0x0  nop
    ctx->pc = 0x455818u;
    // NOP
    // 0x45581c: 0x0  nop
    ctx->pc = 0x45581cu;
    // NOP
    // 0x455820: 0x0  nop
    ctx->pc = 0x455820u;
    // NOP
    // 0x455824: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455824u;
    {
        const bool branch_taken_0x455824 = (false);
        if (branch_taken_0x455824) {
            ctx->pc = 0x455810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455810;
        }
    }
    ctx->pc = 0x45582Cu;
    // 0x45582c: 0x0  nop
    ctx->pc = 0x45582cu;
    // NOP
label_455830:
    // 0x455830: 0x2a2200cd  slti        $v0, $s1, 0xCD
    ctx->pc = 0x455830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x455834: 0x144000ac  bnez        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x455834u;
    {
        const bool branch_taken_0x455834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455834) {
            ctx->pc = 0x455AE8u;
            goto label_455ae8;
        }
    }
    ctx->pc = 0x45583Cu;
    // 0x45583c: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x45583cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x455840: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x455840u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x455844: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x455844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x455848: 0x3c0a1000  lui         $t2, 0x1000
    ctx->pc = 0x455848u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)4096 << 16));
    // 0x45584c: 0x3c151000  lui         $s5, 0x1000
    ctx->pc = 0x45584cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)4096 << 16));
    // 0x455850: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x455850u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x455854: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x455854u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x455858: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x455858u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x45585c: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x45585cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x455860: 0x3c0f1000  lui         $t7, 0x1000
    ctx->pc = 0x455860u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)4096 << 16));
    // 0x455864: 0x3529d000  ori         $t1, $t1, 0xD000
    ctx->pc = 0x455864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53248);
    // 0x455868: 0x34a5e020  ori         $a1, $a1, 0xE020
    ctx->pc = 0x455868u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57376);
    // 0x45586c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x45586cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455870: 0x34c6d400  ori         $a2, $a2, 0xD400
    ctx->pc = 0x455870u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)54272);
    // 0x455874: 0x240b0200  addiu       $t3, $zero, 0x200
    ctx->pc = 0x455874u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x455878: 0x354ae010  ori         $t2, $t2, 0xE010
    ctx->pc = 0x455878u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)57360);
    // 0x45587c: 0x36b5d480  ori         $s5, $s5, 0xD480
    ctx->pc = 0x45587cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)54400);
    // 0x455880: 0x3694d410  ori         $s4, $s4, 0xD410
    ctx->pc = 0x455880u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)54288);
    // 0x455884: 0x3673d420  ori         $s3, $s3, 0xD420
    ctx->pc = 0x455884u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)54304);
    // 0x455888: 0x3739d080  ori         $t9, $t9, 0xD080
    ctx->pc = 0x455888u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)53376);
    // 0x45588c: 0x3718d020  ori         $t8, $t8, 0xD020
    ctx->pc = 0x45588cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)53280);
    // 0x455890: 0x241e00cc  addiu       $fp, $zero, 0xCC
    ctx->pc = 0x455890u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    // 0x455894: 0x24170cc0  addiu       $s7, $zero, 0xCC0
    ctx->pc = 0x455894u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x455898: 0x35efd010  ori         $t7, $t7, 0xD010
    ctx->pc = 0x455898u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)53264);
    // 0x45589c: 0x24160330  addiu       $s6, $zero, 0x330
    ctx->pc = 0x45589cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 816));
label_4558a0:
    // 0x4558a0: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x4558a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x4558a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4558a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4558a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x4558A8u;
    {
        const bool branch_taken_0x4558a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4558a8) {
            ctx->pc = 0x4558D8u;
            goto label_4558d8;
        }
    }
    ctx->pc = 0x4558B0u;
    // 0x4558b0: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x4558b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x4558b4: 0xf  sync
    ctx->pc = 0x4558b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4558b8: 0x40f  sync.p
    ctx->pc = 0x4558b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_4558bc:
    // 0x4558bc: 0x0  nop
    ctx->pc = 0x4558bcu;
    // NOP
    // 0x4558c0: 0x0  nop
    ctx->pc = 0x4558c0u;
    // NOP
    // 0x4558c4: 0x0  nop
    ctx->pc = 0x4558c4u;
    // NOP
    // 0x4558c8: 0x0  nop
    ctx->pc = 0x4558c8u;
    // NOP
    // 0x4558cc: 0x0  nop
    ctx->pc = 0x4558ccu;
    // NOP
    // 0x4558d0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x4558D0u;
    {
        const bool branch_taken_0x4558d0 = (false);
        if (branch_taken_0x4558d0) {
            ctx->pc = 0x4558BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4558bc;
        }
    }
    ctx->pc = 0x4558D8u;
label_4558d8:
    // 0x4558d8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4558dc: 0x262eff34  addiu       $t6, $s1, -0xCC
    ctx->pc = 0x4558dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967092));
    // 0x4558e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4558e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4558e4: 0x260c0cc0  addiu       $t4, $s0, 0xCC0
    ctx->pc = 0x4558e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 16), 3264));
    // 0x4558e8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4558e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4558ec: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4558ECu;
    {
        const bool branch_taken_0x4558ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4558F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4558ECu;
        // 0x4558f0: 0x264d3300  addiu       $t5, $s2, 0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 13056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4558ec) {
            ctx->pc = 0x455944u;
            goto label_455944;
        }
    }
    ctx->pc = 0x4558F4u;
    // 0x4558f4: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4558f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x4558f8: 0xf  sync
    ctx->pc = 0x4558f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x4558fc: 0x40f  sync.p
    ctx->pc = 0x4558fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455900:
    // 0x455900: 0x0  nop
    ctx->pc = 0x455900u;
    // NOP
    // 0x455904: 0x0  nop
    ctx->pc = 0x455904u;
    // NOP
    // 0x455908: 0x0  nop
    ctx->pc = 0x455908u;
    // NOP
    // 0x45590c: 0x0  nop
    ctx->pc = 0x45590cu;
    // NOP
    // 0x455910: 0x0  nop
    ctx->pc = 0x455910u;
    // NOP
    // 0x455914: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455914u;
    {
        const bool branch_taken_0x455914 = (false);
        if (branch_taken_0x455914) {
            ctx->pc = 0x455900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455900;
        }
    }
    ctx->pc = 0x45591Cu;
    // 0x45591c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x45591cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455920: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x455924: 0x0  nop
    ctx->pc = 0x455924u;
    // NOP
label_455928:
    // 0x455928: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455928u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x45592c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x45592cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455930: 0x0  nop
    ctx->pc = 0x455930u;
    // NOP
    // 0x455934: 0x0  nop
    ctx->pc = 0x455934u;
    // NOP
    // 0x455938: 0x0  nop
    ctx->pc = 0x455938u;
    // NOP
    // 0x45593c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x45593Cu;
    {
        const bool branch_taken_0x45593c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45593c) {
            ctx->pc = 0x455928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455928;
        }
    }
    ctx->pc = 0x455944u;
label_455944:
    // 0x455944: 0xad4b0000  sw          $t3, 0x0($t2)
    ctx->pc = 0x455944u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 11));
    // 0x455948: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x455948u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x45594c: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x45594cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
    // 0x455950: 0xae7e0000  sw          $fp, 0x0($s3)
    ctx->pc = 0x455950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 30));
    // 0x455954: 0xacc80000  sw          $t0, 0x0($a2)
    ctx->pc = 0x455954u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
    // 0x455958: 0xf  sync
    ctx->pc = 0x455958u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x45595c: 0x40f  sync.p
    ctx->pc = 0x45595cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455960: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x455960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x455964: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455968: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x455968u;
    {
        const bool branch_taken_0x455968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45596Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455968u;
        // 0x45596c: 0x3c037000  lui         $v1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455968) {
            ctx->pc = 0x4559C0u;
            goto label_4559c0;
        }
    }
    ctx->pc = 0x455970u;
    // 0x455970: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x455970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x455974: 0xf  sync
    ctx->pc = 0x455974u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455978: 0x40f  sync.p
    ctx->pc = 0x455978u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_45597c:
    // 0x45597c: 0x0  nop
    ctx->pc = 0x45597cu;
    // NOP
    // 0x455980: 0x0  nop
    ctx->pc = 0x455980u;
    // NOP
    // 0x455984: 0x0  nop
    ctx->pc = 0x455984u;
    // NOP
    // 0x455988: 0x0  nop
    ctx->pc = 0x455988u;
    // NOP
    // 0x45598c: 0x0  nop
    ctx->pc = 0x45598cu;
    // NOP
    // 0x455990: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455990u;
    {
        const bool branch_taken_0x455990 = (false);
        if (branch_taken_0x455990) {
            ctx->pc = 0x45597Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_45597c;
        }
    }
    ctx->pc = 0x455998u;
    // 0x455998: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x45599c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x45599cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_4559a0:
    // 0x4559a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4559a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x4559a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x4559a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x4559a8: 0x0  nop
    ctx->pc = 0x4559a8u;
    // NOP
    // 0x4559ac: 0x0  nop
    ctx->pc = 0x4559acu;
    // NOP
    // 0x4559b0: 0x0  nop
    ctx->pc = 0x4559b0u;
    // NOP
    // 0x4559b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4559B4u;
    {
        const bool branch_taken_0x4559b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4559b4) {
            ctx->pc = 0x4559A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4559a0;
        }
    }
    ctx->pc = 0x4559BCu;
    // 0x4559bc: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x4559bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
label_4559c0:
    // 0x4559c0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x4559c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4559c4: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x4559c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x4559c8: 0x34630cc0  ori         $v1, $v1, 0xCC0
    ctx->pc = 0x4559c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3264);
    // 0x4559cc: 0x240700cb  addiu       $a3, $zero, 0xCB
    ctx->pc = 0x4559ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
label_4559d0:
    // 0x4559d0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x4559d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4559d4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x4559d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4559d8: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x4559d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4559dc: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x4559dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4559e0: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x4559e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4559e4: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x4559e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4559e8: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x4559e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4559ec: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x4559ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x4559f0: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x4559f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x4559f4: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x4559f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x4559f8: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x4559f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x4559fc: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x4559fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x455a00: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x455a00u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x455a04: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x455a04u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x455a08: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x455a08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x455a0c: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x455a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x455a10: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x455a10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x455a14: 0x4e1ffee  bgez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x455A14u;
    {
        const bool branch_taken_0x455a14 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x455A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455A14u;
        // 0x455a18: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455a14) {
            ctx->pc = 0x4559D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4559d0;
        }
    }
    ctx->pc = 0x455A1Cu;
    // 0x455a1c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x455a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x455a20: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455a20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455a24: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x455A24u;
    {
        const bool branch_taken_0x455a24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a24) {
            ctx->pc = 0x455A58u;
            goto label_455a58;
        }
    }
    ctx->pc = 0x455A2Cu;
    // 0x455a2c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x455a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x455a30: 0xf  sync
    ctx->pc = 0x455a30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455a34: 0x40f  sync.p
    ctx->pc = 0x455a34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455a38:
    // 0x455a38: 0x0  nop
    ctx->pc = 0x455a38u;
    // NOP
    // 0x455a3c: 0x0  nop
    ctx->pc = 0x455a3cu;
    // NOP
    // 0x455a40: 0x0  nop
    ctx->pc = 0x455a40u;
    // NOP
    // 0x455a44: 0x0  nop
    ctx->pc = 0x455a44u;
    // NOP
    // 0x455a48: 0x0  nop
    ctx->pc = 0x455a48u;
    // NOP
    // 0x455a4c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455A4Cu;
    {
        const bool branch_taken_0x455a4c = (false);
        if (branch_taken_0x455a4c) {
            ctx->pc = 0x455A38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455a38;
        }
    }
    ctx->pc = 0x455A54u;
    // 0x455a54: 0x0  nop
    ctx->pc = 0x455a54u;
    // NOP
label_455a58:
    // 0x455a58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x455a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x455a5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455a60: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x455A60u;
    {
        const bool branch_taken_0x455a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a60) {
            ctx->pc = 0x455AB4u;
            goto label_455ab4;
        }
    }
    ctx->pc = 0x455A68u;
    // 0x455a68: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x455a68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x455a6c: 0xf  sync
    ctx->pc = 0x455a6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455a70: 0x40f  sync.p
    ctx->pc = 0x455a70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455a74:
    // 0x455a74: 0x0  nop
    ctx->pc = 0x455a74u;
    // NOP
    // 0x455a78: 0x0  nop
    ctx->pc = 0x455a78u;
    // NOP
    // 0x455a7c: 0x0  nop
    ctx->pc = 0x455a7cu;
    // NOP
    // 0x455a80: 0x0  nop
    ctx->pc = 0x455a80u;
    // NOP
    // 0x455a84: 0x0  nop
    ctx->pc = 0x455a84u;
    // NOP
    // 0x455a88: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455A88u;
    {
        const bool branch_taken_0x455a88 = (false);
        if (branch_taken_0x455a88) {
            ctx->pc = 0x455A74u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455a74;
        }
    }
    ctx->pc = 0x455A90u;
    // 0x455a90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455a94: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455a94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_455a98:
    // 0x455a98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455a98u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455a9c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455aa0: 0x0  nop
    ctx->pc = 0x455aa0u;
    // NOP
    // 0x455aa4: 0x0  nop
    ctx->pc = 0x455aa4u;
    // NOP
    // 0x455aa8: 0x0  nop
    ctx->pc = 0x455aa8u;
    // NOP
    // 0x455aac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x455AACu;
    {
        const bool branch_taken_0x455aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455aac) {
            ctx->pc = 0x455A98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455a98;
        }
    }
    ctx->pc = 0x455AB4u;
label_455ab4:
    // 0x455ab4: 0xad480000  sw          $t0, 0x0($t2)
    ctx->pc = 0x455ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 8));
    // 0x455ab8: 0xaf370000  sw          $s7, 0x0($t9)
    ctx->pc = 0x455ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 23));
    // 0x455abc: 0xadf20000  sw          $s2, 0x0($t7)
    ctx->pc = 0x455abcu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 0), GPR_U32(ctx, 18));
    // 0x455ac0: 0xaf160000  sw          $s6, 0x0($t8)
    ctx->pc = 0x455ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 22));
    // 0x455ac4: 0xad280000  sw          $t0, 0x0($t1)
    ctx->pc = 0x455ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 8));
    // 0x455ac8: 0xf  sync
    ctx->pc = 0x455ac8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455acc: 0x40f  sync.p
    ctx->pc = 0x455accu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455ad0: 0x180802d  daddu       $s0, $t4, $zero
    ctx->pc = 0x455ad0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455ad4: 0x1c0882d  daddu       $s1, $t6, $zero
    ctx->pc = 0x455ad4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455ad8: 0x2a2200cd  slti        $v0, $s1, 0xCD
    ctx->pc = 0x455ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)205) ? 1 : 0);
    // 0x455adc: 0x1040ff70  beqz        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x455ADCu;
    {
        const bool branch_taken_0x455adc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455ADCu;
        // 0x455ae0: 0x1a0902d  daddu       $s2, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455adc) {
            ctx->pc = 0x4558A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4558a0;
        }
    }
    ctx->pc = 0x455AE4u;
    // 0x455ae4: 0x0  nop
    ctx->pc = 0x455ae4u;
    // NOP
label_455ae8:
    // 0x455ae8: 0x522000d3  beql        $s1, $zero, . + 4 + (0xD3 << 2)
    ctx->pc = 0x455AE8u;
    {
        const bool branch_taken_0x455ae8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x455ae8) {
            ctx->pc = 0x455AECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x455AE8u;
            // 0x455aec: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x455E38u;
            goto label_455e38;
        }
    }
    ctx->pc = 0x455AF0u;
    // 0x455af0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455af4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x455af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x455af8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x455af8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x455afc: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x455afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x455b00: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x455B00u;
    {
        const bool branch_taken_0x455b00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x455B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455B00u;
        // 0x455b04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455b00) {
            ctx->pc = 0x455B38u;
            goto label_455b38;
        }
    }
    ctx->pc = 0x455B08u;
    // 0x455b08: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x455b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455b0c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455b10: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455b10u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455b14: 0xf  sync
    ctx->pc = 0x455b14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455b18: 0x40f  sync.p
    ctx->pc = 0x455b18u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455b1c:
    // 0x455b1c: 0x0  nop
    ctx->pc = 0x455b1cu;
    // NOP
    // 0x455b20: 0x0  nop
    ctx->pc = 0x455b20u;
    // NOP
    // 0x455b24: 0x0  nop
    ctx->pc = 0x455b24u;
    // NOP
    // 0x455b28: 0x0  nop
    ctx->pc = 0x455b28u;
    // NOP
    // 0x455b2c: 0x0  nop
    ctx->pc = 0x455b2cu;
    // NOP
    // 0x455b30: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455B30u;
    {
        const bool branch_taken_0x455b30 = (false);
        if (branch_taken_0x455b30) {
            ctx->pc = 0x455B1Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455b1c;
        }
    }
    ctx->pc = 0x455B38u;
label_455b38:
    // 0x455b38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455b3c: 0x113080  sll         $a2, $s1, 2
    ctx->pc = 0x455b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x455b40: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x455b44: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455b44u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455b48: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455b4c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x455B4Cu;
    {
        const bool branch_taken_0x455b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455B4Cu;
        // 0x455b50: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455b4c) {
            ctx->pc = 0x455BACu;
            goto label_455bac;
        }
    }
    ctx->pc = 0x455B54u;
    // 0x455b54: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x455b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x455b58: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455b5c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455b5cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455b60: 0xf  sync
    ctx->pc = 0x455b60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455b64: 0x40f  sync.p
    ctx->pc = 0x455b64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455b68:
    // 0x455b68: 0x0  nop
    ctx->pc = 0x455b68u;
    // NOP
    // 0x455b6c: 0x0  nop
    ctx->pc = 0x455b6cu;
    // NOP
    // 0x455b70: 0x0  nop
    ctx->pc = 0x455b70u;
    // NOP
    // 0x455b74: 0x0  nop
    ctx->pc = 0x455b74u;
    // NOP
    // 0x455b78: 0x0  nop
    ctx->pc = 0x455b78u;
    // NOP
    // 0x455b7c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455B7Cu;
    {
        const bool branch_taken_0x455b7c = (false);
        if (branch_taken_0x455b7c) {
            ctx->pc = 0x455B68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455b68;
        }
    }
    ctx->pc = 0x455B84u;
    // 0x455b84: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455b88: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x455b8c: 0x0  nop
    ctx->pc = 0x455b8cu;
    // NOP
label_455b90:
    // 0x455b90: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455b90u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455b94: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455b98: 0x0  nop
    ctx->pc = 0x455b98u;
    // NOP
    // 0x455b9c: 0x0  nop
    ctx->pc = 0x455b9cu;
    // NOP
    // 0x455ba0: 0x0  nop
    ctx->pc = 0x455ba0u;
    // NOP
    // 0x455ba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x455BA4u;
    {
        const bool branch_taken_0x455ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455ba4) {
            ctx->pc = 0x455B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455b90;
        }
    }
    ctx->pc = 0x455BACu;
label_455bac:
    // 0x455bac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455bb0: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x455bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x455bb4: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x455bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x455bb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455bbc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x455bbcu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x455bc0: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x455bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x455bc4: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x455bc4u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x455bc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455bcc: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x455bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x455bd0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455bd4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x455bd4u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x455bd8: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x455bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x455bdc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x455bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x455be0: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x455be0u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x455be4: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x455be4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x455be8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x455be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455bec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x455becu;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x10000000
    // 0x455bf0: 0xf  sync
    ctx->pc = 0x455bf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455bf4: 0x40f  sync.p
    ctx->pc = 0x455bf4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455bf8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x455bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x455bfc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455c00: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x455C00u;
    {
        const bool branch_taken_0x455c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455C00u;
        // 0x455c04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455c00) {
            ctx->pc = 0x455C5Cu;
            goto label_455c5c;
        }
    }
    ctx->pc = 0x455C08u;
    // 0x455c08: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455c0c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x455c0cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x455c10: 0xf  sync
    ctx->pc = 0x455c10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455c14: 0x40f  sync.p
    ctx->pc = 0x455c14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455c18:
    // 0x455c18: 0x0  nop
    ctx->pc = 0x455c18u;
    // NOP
    // 0x455c1c: 0x0  nop
    ctx->pc = 0x455c1cu;
    // NOP
    // 0x455c20: 0x0  nop
    ctx->pc = 0x455c20u;
    // NOP
    // 0x455c24: 0x0  nop
    ctx->pc = 0x455c24u;
    // NOP
    // 0x455c28: 0x0  nop
    ctx->pc = 0x455c28u;
    // NOP
    // 0x455c2c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455C2Cu;
    {
        const bool branch_taken_0x455c2c = (false);
        if (branch_taken_0x455c2c) {
            ctx->pc = 0x455C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455c18;
        }
    }
    ctx->pc = 0x455C34u;
    // 0x455c34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455c38: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455c38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x455c3c: 0x0  nop
    ctx->pc = 0x455c3cu;
    // NOP
label_455c40:
    // 0x455c40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455c40u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455c44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455c48: 0x0  nop
    ctx->pc = 0x455c48u;
    // NOP
    // 0x455c4c: 0x0  nop
    ctx->pc = 0x455c4cu;
    // NOP
    // 0x455c50: 0x0  nop
    ctx->pc = 0x455c50u;
    // NOP
    // 0x455c54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x455C54u;
    {
        const bool branch_taken_0x455c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455c54) {
            ctx->pc = 0x455C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455c40;
        }
    }
    ctx->pc = 0x455C5Cu;
label_455c5c:
    // 0x455c5c: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x455c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x455c60: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x455c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x455c64: 0x1a200018  blez        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x455C64u;
    {
        const bool branch_taken_0x455c64 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x455C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455C64u;
        // 0x455c68: 0x34630cc0  ori         $v1, $v1, 0xCC0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3264);
        ctx->in_delay_slot = false;
        if (branch_taken_0x455c64) {
            ctx->pc = 0x455CC8u;
            goto label_455cc8;
        }
    }
    ctx->pc = 0x455C6Cu;
    // 0x455c6c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x455c6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455c70: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x455c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x455c74: 0x0  nop
    ctx->pc = 0x455c74u;
    // NOP
label_455c78:
    // 0x455c78: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x455c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x455c7c: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x455c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x455c80: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x455c80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x455c84: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x455c84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x455c88: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x455c88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x455c8c: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x455c8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x455c90: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x455c90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x455c94: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x455c94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x455c98: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x455c98u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x455c9c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x455c9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x455ca0: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x455ca0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x455ca4: 0xf8640000  sqc2        $vf4, 0x0($v1)
    ctx->pc = 0x455ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x455ca8: 0xf8650010  sqc2        $vf5, 0x10($v1)
    ctx->pc = 0x455ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x455cac: 0xf8660020  sqc2        $vf6, 0x20($v1)
    ctx->pc = 0x455cacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x455cb0: 0xf8670030  sqc2        $vf7, 0x30($v1)
    ctx->pc = 0x455cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x455cb4: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x455cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x455cb8: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x455cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x455cbc: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x455CBCu;
    {
        const bool branch_taken_0x455cbc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x455CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455CBCu;
        // 0x455cc0: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455cbc) {
            ctx->pc = 0x455C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455c78;
        }
    }
    ctx->pc = 0x455CC4u;
    // 0x455cc4: 0x0  nop
    ctx->pc = 0x455cc4u;
    // NOP
label_455cc8:
    // 0x455cc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455ccc: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x455cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x455cd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x455cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x10000000
    // 0x455cd4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x455cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x455cd8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x455CD8u;
    {
        const bool branch_taken_0x455cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x455CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455CD8u;
        // 0x455cdc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455cd8) {
            ctx->pc = 0x455D10u;
            goto label_455d10;
        }
    }
    ctx->pc = 0x455CE0u;
    // 0x455ce0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x455ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455ce4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455ce8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455ce8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455cec: 0xf  sync
    ctx->pc = 0x455cecu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455cf0: 0x40f  sync.p
    ctx->pc = 0x455cf0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455cf4:
    // 0x455cf4: 0x0  nop
    ctx->pc = 0x455cf4u;
    // NOP
    // 0x455cf8: 0x0  nop
    ctx->pc = 0x455cf8u;
    // NOP
    // 0x455cfc: 0x0  nop
    ctx->pc = 0x455cfcu;
    // NOP
    // 0x455d00: 0x0  nop
    ctx->pc = 0x455d00u;
    // NOP
    // 0x455d04: 0x0  nop
    ctx->pc = 0x455d04u;
    // NOP
    // 0x455d08: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455D08u;
    {
        const bool branch_taken_0x455d08 = (false);
        if (branch_taken_0x455d08) {
            ctx->pc = 0x455CF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455cf4;
        }
    }
    ctx->pc = 0x455D10u;
label_455d10:
    // 0x455d10: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455d14: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x455d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x455d18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x455d18u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x10000000
    // 0x455d1c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x455d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x455d20: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x455D20u;
    {
        const bool branch_taken_0x455d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x455D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455D20u;
        // 0x455d24: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455d20) {
            ctx->pc = 0x455D7Cu;
            goto label_455d7c;
        }
    }
    ctx->pc = 0x455D28u;
    // 0x455d28: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x455d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x455d2c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x455d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x455d30: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x455d30u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x455d34: 0xf  sync
    ctx->pc = 0x455d34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455d38: 0x40f  sync.p
    ctx->pc = 0x455d38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_455d3c:
    // 0x455d3c: 0x0  nop
    ctx->pc = 0x455d3cu;
    // NOP
    // 0x455d40: 0x0  nop
    ctx->pc = 0x455d40u;
    // NOP
    // 0x455d44: 0x0  nop
    ctx->pc = 0x455d44u;
    // NOP
    // 0x455d48: 0x0  nop
    ctx->pc = 0x455d48u;
    // NOP
    // 0x455d4c: 0x0  nop
    ctx->pc = 0x455d4cu;
    // NOP
    // 0x455d50: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x455D50u;
    {
        const bool branch_taken_0x455d50 = (false);
        if (branch_taken_0x455d50) {
            ctx->pc = 0x455D3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455d3c;
        }
    }
    ctx->pc = 0x455D58u;
    // 0x455d58: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455d58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455d5c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x455d5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_455d60:
    // 0x455d60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x455d60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x455d64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x455d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x455d68: 0x0  nop
    ctx->pc = 0x455d68u;
    // NOP
    // 0x455d6c: 0x0  nop
    ctx->pc = 0x455d6cu;
    // NOP
    // 0x455d70: 0x0  nop
    ctx->pc = 0x455d70u;
    // NOP
    // 0x455d74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x455D74u;
    {
        const bool branch_taken_0x455d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x455d74) {
            ctx->pc = 0x455D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455d60;
        }
    }
    ctx->pc = 0x455D7Cu;
label_455d7c:
    // 0x455d7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455d80: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x455d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x455d84: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x455d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x455d88: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455d88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455d8c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x455d8cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x455d90: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x455d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x455d94: 0x24040cc0  addiu       $a0, $zero, 0xCC0
    ctx->pc = 0x455d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3264));
    // 0x455d98: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455d9c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x455d9cu;
    runtime->Store32(rdram, ctx, 0x1000D080u, GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x455da0: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x455da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x455da4: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x455da4u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 18)); // MMIO: 0x10000000
    // 0x455da8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x455da8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x455dac: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x455dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x455db0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x455db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x455db4: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x455db4u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 6)); // MMIO: 0x10000000
    // 0x455db8: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x455db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x455dbc: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x455dbcu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x10000000
    // 0x455dc0: 0xf  sync
    ctx->pc = 0x455dc0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455dc4: 0x40f  sync.p
    ctx->pc = 0x455dc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x455dc8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x455DC8u;
    {
        const bool branch_taken_0x455dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455DC8u;
        // 0x455dcc: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455dc8) {
            ctx->pc = 0x455E38u;
            goto label_455e38;
        }
    }
    ctx->pc = 0x455DD0u;
label_455dd0:
    // 0x455dd0: 0x5a200019  blezl       $s1, . + 4 + (0x19 << 2)
    ctx->pc = 0x455DD0u;
    {
        const bool branch_taken_0x455dd0 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x455dd0) {
            ctx->pc = 0x455DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x455DD0u;
            // 0x455dd4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x455E38u;
            goto label_455e38;
        }
    }
    ctx->pc = 0x455DD8u;
    // 0x455dd8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x455dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x455ddc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x455ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x455de0: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x455de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x455de4: 0x0  nop
    ctx->pc = 0x455de4u;
    // NOP
label_455de8:
    // 0x455de8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x455de8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x455dec: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x455decu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x455df0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x455df0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x455df4: 0x4bc2092c  vsub.xyz    $vf4, $vf1, $vf2
    ctx->pc = 0x455df4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x455df8: 0x4bc20968  vadd.xyz    $vf5, $vf1, $vf2
    ctx->pc = 0x455df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x455dfc: 0x4bc209a8  vadd.xyz    $vf6, $vf1, $vf2
    ctx->pc = 0x455dfcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x455e00: 0x4bc209ec  vsub.xyz    $vf7, $vf1, $vf2
    ctx->pc = 0x455e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x455e04: 0x4bc3212c  vsub.xyz    $vf4, $vf4, $vf3
    ctx->pc = 0x455e04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x455e08: 0x4bc3296c  vsub.xyz    $vf5, $vf5, $vf3
    ctx->pc = 0x455e08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x455e0c: 0x4bc331a8  vadd.xyz    $vf6, $vf6, $vf3
    ctx->pc = 0x455e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x455e10: 0x4bc339e8  vadd.xyz    $vf7, $vf7, $vf3
    ctx->pc = 0x455e10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[7], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x455e14: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x455e14u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x455e18: 0xfa450010  sqc2        $vf5, 0x10($s2)
    ctx->pc = 0x455e18u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x455e1c: 0xfa460020  sqc2        $vf6, 0x20($s2)
    ctx->pc = 0x455e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x455e20: 0xfa470030  sqc2        $vf7, 0x30($s2)
    ctx->pc = 0x455e20u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x455e24: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x455e24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x455e28: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x455e28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x455e2c: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
    ctx->pc = 0x455E2Cu;
    {
        const bool branch_taken_0x455e2c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x455E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455E2Cu;
        // 0x455e30: 0x2058021  addu        $s0, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455e2c) {
            ctx->pc = 0x455DE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_455de8;
        }
    }
    ctx->pc = 0x455E34u;
    // 0x455e34: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x455e34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_455e38:
    // 0x455e38: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x455e38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x455e3c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x455e3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x455e40: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x455e40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x455e44: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x455e44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x455e48: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x455e48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x455e4c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x455e4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x455e50: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x455e50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x455e54: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x455e54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x455e58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x455e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x455e5c: 0x3e00008  jr          $ra
    ctx->pc = 0x455E5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x455E5Cu;
        // 0x455e60: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x455E5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x455E64u;
    // 0x455e64: 0x0  nop
    ctx->pc = 0x455e64u;
    // NOP
    ctx->pc = 0x455e68u;
}
