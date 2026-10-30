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

// Function: sub_0018C8C8
// Address: 0x18c8c8 - 0x18c988
void sub_0018C8C8_0x18c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018C8C8_0x18c8c8");
#endif

    switch (ctx->pc) {
        case 0x18c8c8u: goto label_18c8c8;
        case 0x18c8ccu: goto label_18c8cc;
        case 0x18c8d0u: goto label_18c8d0;
        case 0x18c8d4u: goto label_18c8d4;
        case 0x18c8d8u: goto label_18c8d8;
        case 0x18c8dcu: goto label_18c8dc;
        case 0x18c8e0u: goto label_18c8e0;
        case 0x18c8e4u: goto label_18c8e4;
        case 0x18c8e8u: goto label_18c8e8;
        case 0x18c8ecu: goto label_18c8ec;
        case 0x18c8f0u: goto label_18c8f0;
        case 0x18c8f4u: goto label_18c8f4;
        case 0x18c8f8u: goto label_18c8f8;
        case 0x18c8fcu: goto label_18c8fc;
        case 0x18c900u: goto label_18c900;
        case 0x18c904u: goto label_18c904;
        case 0x18c908u: goto label_18c908;
        case 0x18c90cu: goto label_18c90c;
        case 0x18c910u: goto label_18c910;
        case 0x18c914u: goto label_18c914;
        case 0x18c918u: goto label_18c918;
        case 0x18c91cu: goto label_18c91c;
        case 0x18c920u: goto label_18c920;
        case 0x18c924u: goto label_18c924;
        case 0x18c928u: goto label_18c928;
        case 0x18c92cu: goto label_18c92c;
        case 0x18c930u: goto label_18c930;
        case 0x18c934u: goto label_18c934;
        case 0x18c938u: goto label_18c938;
        case 0x18c93cu: goto label_18c93c;
        case 0x18c940u: goto label_18c940;
        case 0x18c944u: goto label_18c944;
        case 0x18c948u: goto label_18c948;
        case 0x18c94cu: goto label_18c94c;
        case 0x18c950u: goto label_18c950;
        case 0x18c954u: goto label_18c954;
        case 0x18c958u: goto label_18c958;
        case 0x18c95cu: goto label_18c95c;
        case 0x18c960u: goto label_18c960;
        case 0x18c964u: goto label_18c964;
        case 0x18c968u: goto label_18c968;
        case 0x18c96cu: goto label_18c96c;
        case 0x18c970u: goto label_18c970;
        case 0x18c974u: goto label_18c974;
        case 0x18c978u: goto label_18c978;
        case 0x18c97cu: goto label_18c97c;
        case 0x18c980u: goto label_18c980;
        case 0x18c984u: goto label_18c984;
        default: break;
    }

    ctx->pc = 0x18c8c8u;

label_18c8c8:
    // 0x18c8c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_18c8cc:
    // 0x18c8cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x18c8ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c8d0:
    // 0x18c8d0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x18c8d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_18c8d4:
    // 0x18c8d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x18c8d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_18c8d8:
    // 0x18c8d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_18c8dc:
    // 0x18c8dc: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x18c8dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_18c8e0:
    // 0x18c8e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18c8e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_18c8e4:
    // 0x18c8e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18c8e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18c8e8:
    // 0x18c8e8: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_18c8ec:
    if (ctx->pc == 0x18C8ECu) {
        ctx->pc = 0x18C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8E8u;
        // 0x18c8ec: 0xae0501a8  sw          $a1, 0x1A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C8F0u;
        goto label_18c8f0;
    }
    ctx->pc = 0x18C8E8u;
    {
        const bool branch_taken_0x18c8e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C8E8u;
        // 0x18c8ec: 0xae0501a8  sw          $a1, 0x1A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c8e8) {
            ctx->pc = 0x18C964u;
            goto label_18c964;
        }
    }
    ctx->pc = 0x18C8F0u;
label_18c8f0:
    // 0x18c8f0: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x18c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_18c8f4:
    // 0x18c8f4: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x18c8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_18c8f8:
    // 0x18c8f8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x18c8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_18c8fc:
    // 0x18c8fc: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x18c8fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_18c900:
    // 0x18c900: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x18c900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_18c904:
    // 0x18c904: 0x40f809  jalr        $v0
label_18c908:
    if (ctx->pc == 0x18C908u) {
        ctx->pc = 0x18C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C904u;
        // 0x18c908: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C90Cu;
        goto label_18c90c;
    }
    ctx->pc = 0x18C904u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x18C90Cu);
        ctx->pc = 0x18C908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C904u;
        // 0x18c908: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C904u, 0x18C90Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x18C90Cu;
label_18c90c:
    // 0x18c90c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_18c910:
    if (ctx->pc == 0x18C910u) {
        ctx->pc = 0x18C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C90Cu;
        // 0x18c910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C914u;
        goto label_18c914;
    }
    ctx->pc = 0x18C90Cu;
    {
        const bool branch_taken_0x18c90c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x18C910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C90Cu;
        // 0x18c910: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c90c) {
            ctx->pc = 0x18C928u;
            goto label_18c928;
        }
    }
    ctx->pc = 0x18C914u;
label_18c914:
    // 0x18c914: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c918:
    // 0x18c918: 0x0  nop
    ctx->pc = 0x18c918u;
    // NOP
label_18c91c:
    // 0x18c91c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c91cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18c920:
    // 0x18c920: 0x10000007  b           . + 4 + (0x7 << 2)
label_18c924:
    if (ctx->pc == 0x18C924u) {
        ctx->pc = 0x18C928u;
        goto label_18c928;
    }
    ctx->pc = 0x18C920u;
    {
        const bool branch_taken_0x18c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c920) {
            ctx->pc = 0x18C940u;
            goto label_18c940;
        }
    }
    ctx->pc = 0x18C928u;
label_18c928:
    // 0x18c928: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x18c928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_18c92c:
    // 0x18c92c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x18c92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_18c930:
    // 0x18c930: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_18c934:
    // 0x18c934: 0x0  nop
    ctx->pc = 0x18c934u;
    // NOP
label_18c938:
    // 0x18c938: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_18c93c:
    // 0x18c93c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x18c93cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_18c940:
    // 0x18c940: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x18c940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_18c944:
    // 0x18c944: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x18c944u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_18c948:
    // 0x18c948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18c948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18c94c:
    // 0x18c94c: 0x0  nop
    ctx->pc = 0x18c94cu;
    // NOP
label_18c950:
    // 0x18c950: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x18c950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_18c954:
    // 0x18c954: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x18c954u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_18c958:
    // 0x18c958: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x18c958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_18c95c:
    // 0x18c95c: 0x10000004  b           . + 4 + (0x4 << 2)
label_18c960:
    if (ctx->pc == 0x18C960u) {
        ctx->pc = 0x18C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C95Cu;
        // 0x18c960: 0xe60101b0  swc1        $f1, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C964u;
        goto label_18c964;
    }
    ctx->pc = 0x18C95Cu;
    {
        const bool branch_taken_0x18c95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C95Cu;
        // 0x18c960: 0xe60101b0  swc1        $f1, 0x1B0($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c95c) {
            ctx->pc = 0x18C970u;
            goto label_18c970;
        }
    }
    ctx->pc = 0x18C964u;
label_18c964:
    // 0x18c964: 0xe60001ac  swc1        $f0, 0x1AC($s0)
    ctx->pc = 0x18c964u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 428), bits); }
label_18c968:
    // 0x18c968: 0xae0501a4  sw          $a1, 0x1A4($s0)
    ctx->pc = 0x18c968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 5));
label_18c96c:
    // 0x18c96c: 0xe60001b0  swc1        $f0, 0x1B0($s0)
    ctx->pc = 0x18c96cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 432), bits); }
label_18c970:
    // 0x18c970: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18c970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18c974:
    // 0x18c974: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18c974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_18c978:
    // 0x18c978: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x18c978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_18c97c:
    // 0x18c97c: 0x3e00008  jr          $ra
label_18c980:
    if (ctx->pc == 0x18C980u) {
        ctx->pc = 0x18C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C97Cu;
        // 0x18c980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18C984u;
        goto label_18c984;
    }
    ctx->pc = 0x18C97Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C97Cu;
        // 0x18c980: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18C97Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18C984u;
label_18c984:
    // 0x18c984: 0x0  nop
    ctx->pc = 0x18c984u;
    // NOP
    ctx->pc = 0x18c988u;
}
