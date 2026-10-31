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

// Function: sub_00113188
// Address: 0x113188 - 0x113258
void sub_00113188_0x113188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113188_0x113188");
#endif

    switch (ctx->pc) {
        case 0x1131e0u: goto label_1131e0;
        case 0x1131e8u: goto label_1131e8;
        case 0x1131f8u: goto label_1131f8;
        default: break;
    }

    ctx->pc = 0x113188u;

    // 0x113188: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x113188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x11318c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x11318cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x113190: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x113190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x113194: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x113194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x113198: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x113198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11319c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11319cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1131a0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1131a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131a4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1131a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1131a8: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x1131a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1131ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1131acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1131b0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1131b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1131b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1131b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1131b8: 0x3c01461c  lui         $at, 0x461C
    ctx->pc = 0x1131b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17948 << 16));
    // 0x1131bc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1131bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1131c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1131c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1131c4: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1131c4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1131c8: 0x8c45489c  lw          $a1, 0x489C($v0)
    ctx->pc = 0x1131c8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x51489Cu));
    // 0x1131cc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x1131ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x1131d0: 0x84a20224  lh          $v0, 0x224($a1)
    ctx->pc = 0x1131d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 548)));
    // 0x1131d4: 0x18400015  blez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1131D4u;
    {
        const bool branch_taken_0x1131d4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1131D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131D4u;
        // 0x1131d8: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131d4) {
            ctx->pc = 0x11322Cu;
            goto label_11322c;
        }
    }
    ctx->pc = 0x1131DCu;
    // 0x1131dc: 0x24910020  addiu       $s1, $a0, 0x20
    ctx->pc = 0x1131dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_1131e0:
    // 0x1131e0: 0xc047e6c  jal         func_11F9B0
    ctx->pc = 0x1131E0u;
    SET_GPR_U32(ctx, 31, 0x1131E8u);
    ctx->pc = 0x1131E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131E0u;
    // 0x1131e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9B0u, 0x1131E0u, 0x1131E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131E8u;
label_1131e8:
    // 0x1131e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1131E8u;
    {
        const bool branch_taken_0x1131e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1131ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1131E8u;
        // 0x1131ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1131e8) {
            ctx->pc = 0x113214u;
            goto label_113214;
        }
    }
    ctx->pc = 0x1131F0u;
    // 0x1131f0: 0xc0cdb62  jal         func_336D88
    ctx->pc = 0x1131F0u;
    SET_GPR_U32(ctx, 31, 0x1131F8u);
    ctx->pc = 0x1131F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1131F0u;
    // 0x1131f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336D88u, 0x1131F0u, 0x1131F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1131F8u;
label_1131f8:
    // 0x1131f8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1131f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1131fc: 0x0  nop
    ctx->pc = 0x1131fcu;
    // NOP
    // 0x113200: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x113200u;
    {
        const bool branch_taken_0x113200 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113200u;
        // 0x113204: 0x8e83489c  lw          $v1, 0x489C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113200) {
            ctx->pc = 0x113218u;
            goto label_113218;
        }
    }
    ctx->pc = 0x113208u;
    // 0x113208: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x113208u;
    {
        const bool branch_taken_0x113208 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11320Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113208u;
        // 0x11320c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x113208) {
            ctx->pc = 0x113218u;
            goto label_113218;
        }
    }
    ctx->pc = 0x113210u;
    // 0x113210: 0xae500000  sw          $s0, 0x0($s2)
    ctx->pc = 0x113210u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
label_113214:
    // 0x113214: 0x8e83489c  lw          $v1, 0x489C($s4)
    ctx->pc = 0x113214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 18588)));
label_113218:
    // 0x113218: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x113218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11321c: 0x84620224  lh          $v0, 0x224($v1)
    ctx->pc = 0x11321cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 548)));
    // 0x113220: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x113220u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113224: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x113224u;
    {
        const bool branch_taken_0x113224 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113224u;
        // 0x113228: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113224) {
            ctx->pc = 0x1131E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1131e0;
        }
    }
    ctx->pc = 0x11322Cu;
label_11322c:
    // 0x11322c: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x11322cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x113230: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x113230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x113234: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x113234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x113238: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x113238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11323c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11323cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x113240: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x113240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113244: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x113244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113248: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x113248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11324c: 0x3e00008  jr          $ra
    ctx->pc = 0x11324Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11324Cu;
        // 0x113250: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11324Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113254u;
    // 0x113254: 0x0  nop
    ctx->pc = 0x113254u;
    // NOP
    ctx->pc = 0x113258u;
}
