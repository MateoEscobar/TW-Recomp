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

// Function: sub_002B4200
// Address: 0x2b4200 - 0x2b42f0
void sub_002B4200_0x2b4200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4200_0x2b4200");
#endif

    switch (ctx->pc) {
        case 0x2b4220u: goto label_2b4220;
        case 0x2b4238u: goto label_2b4238;
        case 0x2b4280u: goto label_2b4280;
        case 0x2b4298u: goto label_2b4298;
        case 0x2b42acu: goto label_2b42ac;
        case 0x2b42c4u: goto label_2b42c4;
        default: break;
    }

    ctx->pc = 0x2b4200u;

    // 0x2b4200: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2b4200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2b4204: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b4204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b4208: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2b4208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2b420c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2b420cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2b4210: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2b4210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2b4214: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b4214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b4218: 0xc0ad056  jal         func_2B4158
    ctx->pc = 0x2B4218u;
    SET_GPR_U32(ctx, 31, 0x2B4220u);
    ctx->pc = 0x2B421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4218u;
    // 0x2b421c: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4158u, 0x2B4218u, 0x2B4220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4220u;
label_2b4220:
    // 0x2b4220: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b4220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b4224: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2b4224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2b4228: 0x8c64caa8  lw          $a0, -0x3558($v1)
    ctx->pc = 0x2b4228u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CAA8u));
    // 0x2b422c: 0x8c46020c  lw          $a2, 0x20C($v0)
    ctx->pc = 0x2b422cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x2b4230: 0xc05913e  jal         func_1644F8
    ctx->pc = 0x2B4230u;
    SET_GPR_U32(ctx, 31, 0x2B4238u);
    ctx->pc = 0x2B4234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4230u;
    // 0x2b4234: 0x8cc5002c  lw          $a1, 0x2C($a2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1644F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1644F8u, 0x2B4230u, 0x2B4238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4238u;
label_2b4238:
    // 0x2b4238: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4238u;
    {
        const bool branch_taken_0x2b4238 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4238u;
        // 0x2b423c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4238) {
            ctx->pc = 0x2B4254u;
            goto label_2b4254;
        }
    }
    ctx->pc = 0x2B4240u;
    // 0x2b4240: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b4240u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4244: 0x0  nop
    ctx->pc = 0x2b4244u;
    // NOP
    // 0x2b4248: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b4248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b424c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B424Cu;
    {
        const bool branch_taken_0x2b424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b424c) {
            ctx->pc = 0x2B426Cu;
            goto label_2b426c;
        }
    }
    ctx->pc = 0x2B4254u;
label_2b4254:
    // 0x2b4254: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b4254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b4258: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b4258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b425c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2b425cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b4260: 0x0  nop
    ctx->pc = 0x2b4260u;
    // NOP
    // 0x2b4264: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2b4264u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2b4268: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2b4268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_2b426c:
    // 0x2b426c: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2b426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2b4270: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b4270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b4274: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b4274u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4278: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x2B4278u;
    SET_GPR_U32(ctx, 31, 0x2B4280u);
    ctx->pc = 0x2B427Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4278u;
    // 0x2b427c: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x2B4278u, 0x2B4280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4280u;
label_2b4280:
    // 0x2b4280: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x2b4280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x2b4284: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b4284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b4288: 0x2610b880  addiu       $s0, $s0, -0x4780
    ctx->pc = 0x2b4288u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294948992));
    // 0x2b428c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b428cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b4290: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B4290u;
    SET_GPR_U32(ctx, 31, 0x2B4298u);
    ctx->pc = 0x2B4294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B4290u;
    // 0x2b4294: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B4290u, 0x2B4298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B4298u;
label_2b4298:
    // 0x2b4298: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2b4298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2b429c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b429cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42a0: 0xa242002b  sb          $v0, 0x2B($s2)
    ctx->pc = 0x2b42a0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 43), (uint8_t)GPR_U32(ctx, 2));
    // 0x2b42a4: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B42A4u;
    SET_GPR_U32(ctx, 31, 0x2B42ACu);
    ctx->pc = 0x2B42A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42A4u;
    // 0x2b42a8: 0x24050064  addiu       $a1, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B42A4u, 0x2B42ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42ACu;
label_2b42ac:
    // 0x2b42ac: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x2b42acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x2b42b0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B42B0u;
    {
        const bool branch_taken_0x2b42b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b42b0) {
            ctx->pc = 0x2B42B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B42B0u;
            // 0x2b42b4: 0xa253002c  sb          $s3, 0x2C($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B42D4u;
            goto label_2b42d4;
        }
    }
    ctx->pc = 0x2B42B8u;
    // 0x2b42b8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b42b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b42bc: 0xc0a3658  jal         func_28D960
    ctx->pc = 0x2B42BCu;
    SET_GPR_U32(ctx, 31, 0x2B42C4u);
    ctx->pc = 0x2B42C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B42BCu;
    // 0x2b42c0: 0x24050098  addiu       $a1, $zero, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D960u, 0x2B42BCu, 0x2B42C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B42C4u;
label_2b42c4:
    // 0x2b42c4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b42c4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2b42c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2b42c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2b42cc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b42ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b42d0: 0xa253002c  sb          $s3, 0x2C($s2)
    ctx->pc = 0x2b42d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 44), (uint8_t)GPR_U32(ctx, 19));
label_2b42d4:
    // 0x2b42d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2b42d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b42d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2b42d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b42dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b42dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b42e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2b42e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b42e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b42e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b42e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B42E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B42E8u;
        // 0x2b42ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B42E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B42F0u;
}
