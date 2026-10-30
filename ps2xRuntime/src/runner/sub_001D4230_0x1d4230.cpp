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

// Function: sub_001D4230
// Address: 0x1d4230 - 0x1d43e8
void sub_001D4230_0x1d4230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4230_0x1d4230");
#endif

    switch (ctx->pc) {
        case 0x1d4230u: goto label_1d4230;
        case 0x1d4234u: goto label_1d4234;
        case 0x1d4238u: goto label_1d4238;
        case 0x1d423cu: goto label_1d423c;
        case 0x1d4240u: goto label_1d4240;
        case 0x1d4244u: goto label_1d4244;
        case 0x1d4248u: goto label_1d4248;
        case 0x1d424cu: goto label_1d424c;
        case 0x1d4250u: goto label_1d4250;
        case 0x1d4254u: goto label_1d4254;
        case 0x1d4258u: goto label_1d4258;
        case 0x1d425cu: goto label_1d425c;
        case 0x1d4260u: goto label_1d4260;
        case 0x1d4264u: goto label_1d4264;
        case 0x1d4268u: goto label_1d4268;
        case 0x1d426cu: goto label_1d426c;
        case 0x1d4270u: goto label_1d4270;
        case 0x1d4274u: goto label_1d4274;
        case 0x1d4278u: goto label_1d4278;
        case 0x1d427cu: goto label_1d427c;
        case 0x1d4280u: goto label_1d4280;
        case 0x1d4284u: goto label_1d4284;
        case 0x1d4288u: goto label_1d4288;
        case 0x1d428cu: goto label_1d428c;
        case 0x1d4290u: goto label_1d4290;
        case 0x1d4294u: goto label_1d4294;
        case 0x1d4298u: goto label_1d4298;
        case 0x1d429cu: goto label_1d429c;
        case 0x1d42a0u: goto label_1d42a0;
        case 0x1d42a4u: goto label_1d42a4;
        case 0x1d42a8u: goto label_1d42a8;
        case 0x1d42acu: goto label_1d42ac;
        case 0x1d42b0u: goto label_1d42b0;
        case 0x1d42b4u: goto label_1d42b4;
        case 0x1d42b8u: goto label_1d42b8;
        case 0x1d42bcu: goto label_1d42bc;
        case 0x1d42c0u: goto label_1d42c0;
        case 0x1d42c4u: goto label_1d42c4;
        case 0x1d42c8u: goto label_1d42c8;
        case 0x1d42ccu: goto label_1d42cc;
        case 0x1d42d0u: goto label_1d42d0;
        case 0x1d42d4u: goto label_1d42d4;
        case 0x1d42d8u: goto label_1d42d8;
        case 0x1d42dcu: goto label_1d42dc;
        case 0x1d42e0u: goto label_1d42e0;
        case 0x1d42e4u: goto label_1d42e4;
        case 0x1d42e8u: goto label_1d42e8;
        case 0x1d42ecu: goto label_1d42ec;
        case 0x1d42f0u: goto label_1d42f0;
        case 0x1d42f4u: goto label_1d42f4;
        case 0x1d42f8u: goto label_1d42f8;
        case 0x1d42fcu: goto label_1d42fc;
        case 0x1d4300u: goto label_1d4300;
        case 0x1d4304u: goto label_1d4304;
        case 0x1d4308u: goto label_1d4308;
        case 0x1d430cu: goto label_1d430c;
        case 0x1d4310u: goto label_1d4310;
        case 0x1d4314u: goto label_1d4314;
        case 0x1d4318u: goto label_1d4318;
        case 0x1d431cu: goto label_1d431c;
        case 0x1d4320u: goto label_1d4320;
        case 0x1d4324u: goto label_1d4324;
        case 0x1d4328u: goto label_1d4328;
        case 0x1d432cu: goto label_1d432c;
        case 0x1d4330u: goto label_1d4330;
        case 0x1d4334u: goto label_1d4334;
        case 0x1d4338u: goto label_1d4338;
        case 0x1d433cu: goto label_1d433c;
        case 0x1d4340u: goto label_1d4340;
        case 0x1d4344u: goto label_1d4344;
        case 0x1d4348u: goto label_1d4348;
        case 0x1d434cu: goto label_1d434c;
        case 0x1d4350u: goto label_1d4350;
        case 0x1d4354u: goto label_1d4354;
        case 0x1d4358u: goto label_1d4358;
        case 0x1d435cu: goto label_1d435c;
        case 0x1d4360u: goto label_1d4360;
        case 0x1d4364u: goto label_1d4364;
        case 0x1d4368u: goto label_1d4368;
        case 0x1d436cu: goto label_1d436c;
        case 0x1d4370u: goto label_1d4370;
        case 0x1d4374u: goto label_1d4374;
        case 0x1d4378u: goto label_1d4378;
        case 0x1d437cu: goto label_1d437c;
        case 0x1d4380u: goto label_1d4380;
        case 0x1d4384u: goto label_1d4384;
        case 0x1d4388u: goto label_1d4388;
        case 0x1d438cu: goto label_1d438c;
        case 0x1d4390u: goto label_1d4390;
        case 0x1d4394u: goto label_1d4394;
        case 0x1d4398u: goto label_1d4398;
        case 0x1d439cu: goto label_1d439c;
        case 0x1d43a0u: goto label_1d43a0;
        case 0x1d43a4u: goto label_1d43a4;
        case 0x1d43a8u: goto label_1d43a8;
        case 0x1d43acu: goto label_1d43ac;
        case 0x1d43b0u: goto label_1d43b0;
        case 0x1d43b4u: goto label_1d43b4;
        case 0x1d43b8u: goto label_1d43b8;
        case 0x1d43bcu: goto label_1d43bc;
        case 0x1d43c0u: goto label_1d43c0;
        case 0x1d43c4u: goto label_1d43c4;
        case 0x1d43c8u: goto label_1d43c8;
        case 0x1d43ccu: goto label_1d43cc;
        case 0x1d43d0u: goto label_1d43d0;
        case 0x1d43d4u: goto label_1d43d4;
        case 0x1d43d8u: goto label_1d43d8;
        case 0x1d43dcu: goto label_1d43dc;
        case 0x1d43e0u: goto label_1d43e0;
        case 0x1d43e4u: goto label_1d43e4;
        default: break;
    }

    ctx->pc = 0x1d4230u;

label_1d4230:
    // 0x1d4230: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d4230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1d4234:
    // 0x1d4234: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1d4234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_1d4238:
    // 0x1d4238: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1d4238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1d423c:
    // 0x1d423c: 0x24910070  addiu       $s1, $a0, 0x70
    ctx->pc = 0x1d423cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_1d4240:
    // 0x1d4240: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1d4240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1d4244:
    // 0x1d4244: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x1d4244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1d4248:
    // 0x1d4248: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d4248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1d424c:
    // 0x1d424c: 0x140982d  daddu       $s3, $t2, $zero
    ctx->pc = 0x1d424cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1d4250:
    // 0x1d4250: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d4250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1d4254:
    // 0x1d4254: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1d4254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d4258:
    // 0x1d4258: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1d4258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_1d425c:
    // 0x1d425c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x1d425cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1d4260:
    // 0x1d4260: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1d4260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1d4264:
    // 0x1d4264: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1d4264u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1d4268:
    // 0x1d4268: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d4268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1d426c:
    // 0x1d426c: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x1d426cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d4270:
    // 0x1d4270: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1d4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_1d4274:
    // 0x1d4274: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1d4274u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1d4278:
    // 0x1d4278: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1d4278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1d427c:
    // 0x1d427c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d427cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d4280:
    // 0x1d4280: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4284:
    // 0x1d4284: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1d4284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d4288:
    // 0x1d4288: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1d4288u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d428c:
    // 0x1d428c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1d428cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_1d4290:
    // 0x1d4290: 0x2c420032  sltiu       $v0, $v0, 0x32
    ctx->pc = 0x1d4290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1d4294:
    // 0x1d4294: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
label_1d4298:
    if (ctx->pc == 0x1D4298u) {
        ctx->pc = 0x1D4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4294u;
        // 0x1d4298: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D429Cu;
        goto label_1d429c;
    }
    ctx->pc = 0x1D4294u;
    {
        const bool branch_taken_0x1d4294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4294u;
        // 0x1d4298: 0xafa70004  sw          $a3, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4294) {
            ctx->pc = 0x1D43B4u;
            goto label_1d43b4;
        }
    }
    ctx->pc = 0x1D429Cu;
label_1d429c:
    // 0x1d429c: 0x3c1e0051  lui         $fp, 0x51
    ctx->pc = 0x1d429cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)81 << 16));
label_1d42a0:
    // 0x1d42a0: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d42a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d42a4:
    // 0x1d42a4: 0x8fcb27e4  lw          $t3, 0x27E4($fp)
    ctx->pc = 0x1d42a4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1d42a8:
    // 0x1d42a8: 0x24060200  addiu       $a2, $zero, 0x200
    ctx->pc = 0x1d42a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_1d42ac:
    // 0x1d42ac: 0x24a55f58  addiu       $a1, $a1, 0x5F58
    ctx->pc = 0x1d42acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24408));
label_1d42b0:
    // 0x1d42b0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d42b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d42b4:
    // 0x1d42b4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1d42b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1d42b8:
    // 0x1d42b8: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d42b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d42bc:
    // 0x1d42bc: 0x25085f20  addiu       $t0, $t0, 0x5F20
    ctx->pc = 0x1d42bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24352));
label_1d42c0:
    // 0x1d42c0: 0x240900d2  addiu       $t1, $zero, 0xD2
    ctx->pc = 0x1d42c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_1d42c4:
    // 0x1d42c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d42c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d42c8:
    // 0x1d42c8: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d42c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d42cc:
    // 0x1d42cc: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d42ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d42d0:
    // 0x1d42d0: 0x1642021  addu        $a0, $t3, $a0
    ctx->pc = 0x1d42d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
label_1d42d4:
    // 0x1d42d4: 0x40f809  jalr        $v0
label_1d42d8:
    if (ctx->pc == 0x1D42D8u) {
        ctx->pc = 0x1D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D4u;
        // 0x1d42d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42DCu;
        goto label_1d42dc;
    }
    ctx->pc = 0x1D42D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D42DCu);
        ctx->pc = 0x1D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42D4u;
        // 0x1d42d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D42D4u, 0x1D42DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D42DCu;
label_1d42dc:
    // 0x1d42dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d42dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d42e0:
    // 0x1d42e0: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_1d42e4:
    if (ctx->pc == 0x1D42E4u) {
        ctx->pc = 0x1D42E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42E0u;
        // 0x1d42e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42E8u;
        goto label_1d42e8;
    }
    ctx->pc = 0x1D42E0u;
    {
        const bool branch_taken_0x1d42e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d42e0) {
            ctx->pc = 0x1D42E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D42E0u;
            // 0x1d42e4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D42F8u;
            goto label_1d42f8;
        }
    }
    ctx->pc = 0x1D42E8u;
label_1d42e8:
    // 0x1d42e8: 0xc0754d4  jal         func_1D5350
label_1d42ec:
    if (ctx->pc == 0x1D42ECu) {
        ctx->pc = 0x1D42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42E8u;
        // 0x1d42ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D42F0u;
        goto label_1d42f0;
    }
    ctx->pc = 0x1D42E8u;
    SET_GPR_U32(ctx, 31, 0x1D42F0u);
    ctx->pc = 0x1D42ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D42E8u;
    // 0x1d42ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5350u, 0x1D42E8u, 0x1D42F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D42F0u;
label_1d42f0:
    // 0x1d42f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d42f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d42f4:
    // 0x1d42f4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1d42f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d42f8:
    // 0x1d42f8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1d42f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d42fc:
    // 0x1d42fc: 0x8fab00c0  lw          $t3, 0xC0($sp)
    ctx->pc = 0x1d42fcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1d4300:
    // 0x1d4300: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d4300u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d4304:
    // 0x1d4304: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x1d4304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_1d4308:
    // 0x1d4308: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1d4308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1d430c:
    // 0x1d430c: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x1d430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_1d4310:
    // 0x1d4310: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1d4310u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d4314:
    // 0x1d4314: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x1d4314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1d4318:
    // 0x1d4318: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1d4318u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1d431c:
    // 0x1d431c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1d431cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d4320:
    // 0x1d4320: 0x60f809  jalr        $v1
label_1d4324:
    if (ctx->pc == 0x1D4324u) {
        ctx->pc = 0x1D4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4320u;
        // 0x1d4324: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4328u;
        goto label_1d4328;
    }
    ctx->pc = 0x1D4320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D4328u);
        ctx->pc = 0x1D4324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4320u;
        // 0x1d4324: 0x240502d  daddu       $t2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D4320u, 0x1D4328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4328u;
label_1d4328:
    // 0x1d4328: 0x8fcc27e4  lw          $t4, 0x27E4($fp)
    ctx->pc = 0x1d4328u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 10212)));
label_1d432c:
    // 0x1d432c: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x1d432cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_1d4330:
    // 0x1d4330: 0x24a55f48  addiu       $a1, $a1, 0x5F48
    ctx->pc = 0x1d4330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24392));
label_1d4334:
    // 0x1d4334: 0x3c080055  lui         $t0, 0x55
    ctx->pc = 0x1d4334u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)85 << 16));
label_1d4338:
    // 0x1d4338: 0x25085f20  addiu       $t0, $t0, 0x5F20
    ctx->pc = 0x1d4338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 24352));
label_1d433c:
    // 0x1d433c: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x1d433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_1d4340:
    // 0x1d4340: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1d4340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1d4344:
    // 0x1d4344: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d4344u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d4348:
    // 0x1d4348: 0x240900d4  addiu       $t1, $zero, 0xD4
    ctx->pc = 0x1d4348u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1d434c:
    // 0x1d434c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1d434cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1d4350:
    // 0x1d4350: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d4350u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d4354:
    // 0x1d4354: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1d4354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1d4358:
    // 0x1d4358: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d4358u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d435c:
    // 0x1d435c: 0x40f809  jalr        $v0
label_1d4360:
    if (ctx->pc == 0x1D4360u) {
        ctx->pc = 0x1D4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D435Cu;
        // 0x1d4360: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4364u;
        goto label_1d4364;
    }
    ctx->pc = 0x1D435Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D4364u);
        ctx->pc = 0x1D4360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D435Cu;
        // 0x1d4360: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D435Cu, 0x1D4364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D4364u;
label_1d4364:
    // 0x1d4364: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d4368:
    if (ctx->pc == 0x1D4368u) {
        ctx->pc = 0x1D4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4364u;
        // 0x1d4368: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D436Cu;
        goto label_1d436c;
    }
    ctx->pc = 0x1D4364u;
    {
        const bool branch_taken_0x1d4364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4364u;
        // 0x1d4368: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4364) {
            ctx->pc = 0x1D4380u;
            goto label_1d4380;
        }
    }
    ctx->pc = 0x1D436Cu;
label_1d436c:
    // 0x1d436c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1d436cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1d4370:
    // 0x1d4370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d4370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d4374:
    // 0x1d4374: 0xc074eec  jal         func_1D3BB0
label_1d4378:
    if (ctx->pc == 0x1D4378u) {
        ctx->pc = 0x1D4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4374u;
        // 0x1d4378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D437Cu;
        goto label_1d437c;
    }
    ctx->pc = 0x1D4374u;
    SET_GPR_U32(ctx, 31, 0x1D437Cu);
    ctx->pc = 0x1D4378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D4374u;
    // 0x1d4378: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3BB0u, 0x1D4374u, 0x1D437Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D437Cu;
label_1d437c:
    // 0x1d437c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1d437cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1d4380:
    // 0x1d4380: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1d4380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d4384:
    // 0x1d4384: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1d4384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1d4388:
    // 0x1d4388: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
label_1d438c:
    if (ctx->pc == 0x1D438Cu) {
        ctx->pc = 0x1D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4388u;
        // 0x1d438c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4390u;
        goto label_1d4390;
    }
    ctx->pc = 0x1D4388u;
    {
        const bool branch_taken_0x1d4388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4388u;
        // 0x1d438c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4388) {
            ctx->pc = 0x1D43ACu;
            goto label_1d43ac;
        }
    }
    ctx->pc = 0x1D4390u;
label_1d4390:
    // 0x1d4390: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_1d4394:
    if (ctx->pc == 0x1D4394u) {
        ctx->pc = 0x1D4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4390u;
        // 0x1d4394: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D4398u;
        goto label_1d4398;
    }
    ctx->pc = 0x1D4390u;
    {
        const bool branch_taken_0x1d4390 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D4394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D4390u;
        // 0x1d4394: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d4390) {
            ctx->pc = 0x1D439Cu;
            goto label_1d439c;
        }
    }
    ctx->pc = 0x1D4398u;
label_1d4398:
    // 0x1d4398: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1d4398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_1d439c:
    // 0x1d439c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1d439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1d43a0:
    // 0x1d43a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1d43a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_1d43a4:
    // 0x1d43a4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d43a8:
    if (ctx->pc == 0x1D43A8u) {
        ctx->pc = 0x1D43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43A4u;
        // 0x1d43a8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43ACu;
        goto label_1d43ac;
    }
    ctx->pc = 0x1D43A4u;
    {
        const bool branch_taken_0x1d43a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D43A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43A4u;
        // 0x1d43a8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d43a4) {
            ctx->pc = 0x1D43B4u;
            goto label_1d43b4;
        }
    }
    ctx->pc = 0x1D43ACu;
label_1d43ac:
    // 0x1d43ac: 0xc13a0dc  jal         func_4E8370
label_1d43b0:
    if (ctx->pc == 0x1D43B0u) {
        ctx->pc = 0x1D43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43ACu;
        // 0x1d43b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43B4u;
        goto label_1d43b4;
    }
    ctx->pc = 0x1D43ACu;
    SET_GPR_U32(ctx, 31, 0x1D43B4u);
    ctx->pc = 0x1D43B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D43ACu;
    // 0x1d43b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4E8370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4E8370u, 0x1D43ACu, 0x1D43B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D43B4u;
label_1d43b4:
    // 0x1d43b4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1d43b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d43b8:
    // 0x1d43b8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1d43b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d43bc:
    // 0x1d43bc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1d43bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d43c0:
    // 0x1d43c0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1d43c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d43c4:
    // 0x1d43c4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d43c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d43c8:
    // 0x1d43c8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d43c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d43cc:
    // 0x1d43cc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1d43ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d43d0:
    // 0x1d43d0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1d43d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d43d4:
    // 0x1d43d4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1d43d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d43d8:
    // 0x1d43d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d43d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d43dc:
    // 0x1d43dc: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d43dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d43e0:
    // 0x1d43e0: 0x3e00008  jr          $ra
label_1d43e4:
    if (ctx->pc == 0x1D43E4u) {
        ctx->pc = 0x1D43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43E0u;
        // 0x1d43e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D43E8u;
        goto label_fallthrough_0x1d43e0;
    }
    ctx->pc = 0x1D43E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D43E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D43E0u;
        // 0x1d43e4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D43E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d43e0:
    ctx->pc = 0x1D43E8u;
}
