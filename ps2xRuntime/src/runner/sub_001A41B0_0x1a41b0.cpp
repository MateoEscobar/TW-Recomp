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

// Function: sub_001A41B0
// Address: 0x1a41b0 - 0x1a4310
void sub_001A41B0_0x1a41b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A41B0_0x1a41b0");
#endif

    switch (ctx->pc) {
        case 0x1a41b0u: goto label_1a41b0;
        case 0x1a41b4u: goto label_1a41b4;
        case 0x1a41b8u: goto label_1a41b8;
        case 0x1a41bcu: goto label_1a41bc;
        case 0x1a41c0u: goto label_1a41c0;
        case 0x1a41c4u: goto label_1a41c4;
        case 0x1a41c8u: goto label_1a41c8;
        case 0x1a41ccu: goto label_1a41cc;
        case 0x1a41d0u: goto label_1a41d0;
        case 0x1a41d4u: goto label_1a41d4;
        case 0x1a41d8u: goto label_1a41d8;
        case 0x1a41dcu: goto label_1a41dc;
        case 0x1a41e0u: goto label_1a41e0;
        case 0x1a41e4u: goto label_1a41e4;
        case 0x1a41e8u: goto label_1a41e8;
        case 0x1a41ecu: goto label_1a41ec;
        case 0x1a41f0u: goto label_1a41f0;
        case 0x1a41f4u: goto label_1a41f4;
        case 0x1a41f8u: goto label_1a41f8;
        case 0x1a41fcu: goto label_1a41fc;
        case 0x1a4200u: goto label_1a4200;
        case 0x1a4204u: goto label_1a4204;
        case 0x1a4208u: goto label_1a4208;
        case 0x1a420cu: goto label_1a420c;
        case 0x1a4210u: goto label_1a4210;
        case 0x1a4214u: goto label_1a4214;
        case 0x1a4218u: goto label_1a4218;
        case 0x1a421cu: goto label_1a421c;
        case 0x1a4220u: goto label_1a4220;
        case 0x1a4224u: goto label_1a4224;
        case 0x1a4228u: goto label_1a4228;
        case 0x1a422cu: goto label_1a422c;
        case 0x1a4230u: goto label_1a4230;
        case 0x1a4234u: goto label_1a4234;
        case 0x1a4238u: goto label_1a4238;
        case 0x1a423cu: goto label_1a423c;
        case 0x1a4240u: goto label_1a4240;
        case 0x1a4244u: goto label_1a4244;
        case 0x1a4248u: goto label_1a4248;
        case 0x1a424cu: goto label_1a424c;
        case 0x1a4250u: goto label_1a4250;
        case 0x1a4254u: goto label_1a4254;
        case 0x1a4258u: goto label_1a4258;
        case 0x1a425cu: goto label_1a425c;
        case 0x1a4260u: goto label_1a4260;
        case 0x1a4264u: goto label_1a4264;
        case 0x1a4268u: goto label_1a4268;
        case 0x1a426cu: goto label_1a426c;
        case 0x1a4270u: goto label_1a4270;
        case 0x1a4274u: goto label_1a4274;
        case 0x1a4278u: goto label_1a4278;
        case 0x1a427cu: goto label_1a427c;
        case 0x1a4280u: goto label_1a4280;
        case 0x1a4284u: goto label_1a4284;
        case 0x1a4288u: goto label_1a4288;
        case 0x1a428cu: goto label_1a428c;
        case 0x1a4290u: goto label_1a4290;
        case 0x1a4294u: goto label_1a4294;
        case 0x1a4298u: goto label_1a4298;
        case 0x1a429cu: goto label_1a429c;
        case 0x1a42a0u: goto label_1a42a0;
        case 0x1a42a4u: goto label_1a42a4;
        case 0x1a42a8u: goto label_1a42a8;
        case 0x1a42acu: goto label_1a42ac;
        case 0x1a42b0u: goto label_1a42b0;
        case 0x1a42b4u: goto label_1a42b4;
        case 0x1a42b8u: goto label_1a42b8;
        case 0x1a42bcu: goto label_1a42bc;
        case 0x1a42c0u: goto label_1a42c0;
        case 0x1a42c4u: goto label_1a42c4;
        case 0x1a42c8u: goto label_1a42c8;
        case 0x1a42ccu: goto label_1a42cc;
        case 0x1a42d0u: goto label_1a42d0;
        case 0x1a42d4u: goto label_1a42d4;
        case 0x1a42d8u: goto label_1a42d8;
        case 0x1a42dcu: goto label_1a42dc;
        case 0x1a42e0u: goto label_1a42e0;
        case 0x1a42e4u: goto label_1a42e4;
        case 0x1a42e8u: goto label_1a42e8;
        case 0x1a42ecu: goto label_1a42ec;
        case 0x1a42f0u: goto label_1a42f0;
        case 0x1a42f4u: goto label_1a42f4;
        case 0x1a42f8u: goto label_1a42f8;
        case 0x1a42fcu: goto label_1a42fc;
        case 0x1a4300u: goto label_1a4300;
        case 0x1a4304u: goto label_1a4304;
        case 0x1a4308u: goto label_1a4308;
        case 0x1a430cu: goto label_1a430c;
        default: break;
    }

    ctx->pc = 0x1a41b0u;

label_1a41b0:
    // 0x1a41b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a41b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a41b4:
    // 0x1a41b4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1a41b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1a41b8:
    // 0x1a41b8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1a41b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1a41bc:
    // 0x1a41bc: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x1a41bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a41c0:
    // 0x1a41c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a41c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a41c4:
    // 0x1a41c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1a41c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1a41c8:
    // 0x1a41c8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1a41c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_1a41cc:
    // 0x1a41cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a41ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1a41d0:
    // 0x1a41d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a41d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a41d4:
    // 0x1a41d4: 0xae060220  sw          $a2, 0x220($s0)
    ctx->pc = 0x1a41d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 6));
label_1a41d8:
    // 0x1a41d8: 0xe61402e4  swc1        $f20, 0x2E4($s0)
    ctx->pc = 0x1a41d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
label_1a41dc:
    // 0x1a41dc: 0x16220008  bne         $s1, $v0, . + 4 + (0x8 << 2)
label_1a41e0:
    if (ctx->pc == 0x1A41E0u) {
        ctx->pc = 0x1A41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41DCu;
        // 0x1a41e0: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41E4u;
        goto label_1a41e4;
    }
    ctx->pc = 0x1A41DCu;
    {
        const bool branch_taken_0x1a41dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41DCu;
        // 0x1a41e0: 0xae000224  sw          $zero, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41dc) {
            ctx->pc = 0x1A4200u;
            goto label_1a4200;
        }
    }
    ctx->pc = 0x1A41E4u;
label_1a41e4:
    // 0x1a41e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a41e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a41e8:
    // 0x1a41e8: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1a41e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1a41ec:
    // 0x1a41ec: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1a41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1a41f0:
    // 0x1a41f0: 0x60f809  jalr        $v1
label_1a41f4:
    if (ctx->pc == 0x1A41F4u) {
        ctx->pc = 0x1A41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41F0u;
        // 0x1a41f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A41F8u;
        goto label_1a41f8;
    }
    ctx->pc = 0x1A41F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A41F8u);
        ctx->pc = 0x1A41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41F0u;
        // 0x1a41f4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A41F0u, 0x1A41F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A41F8u;
label_1a41f8:
    // 0x1a41f8: 0x10000040  b           . + 4 + (0x40 << 2)
label_1a41fc:
    if (ctx->pc == 0x1A41FCu) {
        ctx->pc = 0x1A41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41F8u;
        // 0x1a41fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4200u;
        goto label_1a4200;
    }
    ctx->pc = 0x1A41F8u;
    {
        const bool branch_taken_0x1a41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A41F8u;
        // 0x1a41fc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a41f8) {
            ctx->pc = 0x1A42FCu;
            goto label_1a42fc;
        }
    }
    ctx->pc = 0x1A4200u;
label_1a4200:
    // 0x1a4200: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1a4204:
    // 0x1a4204: 0x1622000f  bne         $s1, $v0, . + 4 + (0xF << 2)
label_1a4208:
    if (ctx->pc == 0x1A4208u) {
        ctx->pc = 0x1A4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4204u;
        // 0x1a4208: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A420Cu;
        goto label_1a420c;
    }
    ctx->pc = 0x1A4204u;
    {
        const bool branch_taken_0x1a4204 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4204u;
        // 0x1a4208: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4204) {
            ctx->pc = 0x1A4244u;
            goto label_1a4244;
        }
    }
    ctx->pc = 0x1A420Cu;
label_1a420c:
    // 0x1a420c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a420cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a4210:
    // 0x1a4210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4214:
    // 0x1a4214: 0xc069014  jal         func_1A4050
label_1a4218:
    if (ctx->pc == 0x1A4218u) {
        ctx->pc = 0x1A4218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4214u;
        // 0x1a4218: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A421Cu;
        goto label_1a421c;
    }
    ctx->pc = 0x1A4214u;
    SET_GPR_U32(ctx, 31, 0x1A421Cu);
    ctx->pc = 0x1A4218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4214u;
    // 0x1a4218: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4050u, 0x1A4214u, 0x1A421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A421Cu;
label_1a421c:
    // 0x1a421c: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a421cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a4220:
    // 0x1a4220: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a4220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a4224:
    // 0x1a4224: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a4224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a4228:
    // 0x1a4228: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a4228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a422c:
    // 0x1a422c: 0xb2020273  sdl         $v0, 0x273($s0)
    ctx->pc = 0x1a422cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4230:
    // 0x1a4230: 0xb602026c  sdr         $v0, 0x26C($s0)
    ctx->pc = 0x1a4230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4234:
    // 0x1a4234: 0xb203027b  sdl         $v1, 0x27B($s0)
    ctx->pc = 0x1a4234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a4238:
    // 0x1a4238: 0xb6030274  sdr         $v1, 0x274($s0)
    ctx->pc = 0x1a4238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a423c:
    // 0x1a423c: 0x1000002d  b           . + 4 + (0x2D << 2)
label_1a4240:
    if (ctx->pc == 0x1A4240u) {
        ctx->pc = 0x1A4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A423Cu;
        // 0x1a4240: 0xe61402e4  swc1        $f20, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4244u;
        goto label_1a4244;
    }
    ctx->pc = 0x1A423Cu;
    {
        const bool branch_taken_0x1a423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A423Cu;
        // 0x1a4240: 0xe61402e4  swc1        $f20, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a423c) {
            ctx->pc = 0x1A42F4u;
            goto label_1a42f4;
        }
    }
    ctx->pc = 0x1A4244u;
label_1a4244:
    // 0x1a4244: 0x16220018  bne         $s1, $v0, . + 4 + (0x18 << 2)
label_1a4248:
    if (ctx->pc == 0x1A4248u) {
        ctx->pc = 0x1A4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4244u;
        // 0x1a4248: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A424Cu;
        goto label_1a424c;
    }
    ctx->pc = 0x1A4244u;
    {
        const bool branch_taken_0x1a4244 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A4248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4244u;
        // 0x1a4248: 0x2622ffff  addiu       $v0, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4244) {
            ctx->pc = 0x1A42A8u;
            goto label_1a42a8;
        }
    }
    ctx->pc = 0x1A424Cu;
label_1a424c:
    // 0x1a424c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1a424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1a4250:
    // 0x1a4250: 0x8c45b734  lw          $a1, -0x48CC($v0)
    ctx->pc = 0x1a4250u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_1a4254:
    // 0x1a4254: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a4254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a4258:
    // 0x1a4258: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1a4258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1a425c:
    // 0x1a425c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1a425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a4260:
    // 0x1a4260: 0x40f809  jalr        $v0
label_1a4264:
    if (ctx->pc == 0x1A4264u) {
        ctx->pc = 0x1A4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4260u;
        // 0x1a4264: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4268u;
        goto label_1a4268;
    }
    ctx->pc = 0x1A4260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4268u);
        ctx->pc = 0x1A4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4260u;
        // 0x1a4264: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4260u, 0x1A4268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A4268u;
label_1a4268:
    // 0x1a4268: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a426c:
    // 0x1a426c: 0x0  nop
    ctx->pc = 0x1a426cu;
    // NOP
label_1a4270:
    // 0x1a4270: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a4270u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a4274:
    // 0x1a4274: 0x0  nop
    ctx->pc = 0x1a4274u;
    // NOP
label_1a4278:
    // 0x1a4278: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_1a427c:
    if (ctx->pc == 0x1A427Cu) {
        ctx->pc = 0x1A427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4278u;
        // 0x1a427c: 0xfe020328  sd          $v0, 0x328($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 808), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4280u;
        goto label_1a4280;
    }
    ctx->pc = 0x1A4278u;
    {
        const bool branch_taken_0x1a4278 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A427Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4278u;
        // 0x1a427c: 0xfe020328  sd          $v0, 0x328($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 808), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4278) {
            ctx->pc = 0x1A429Cu;
            goto label_1a429c;
        }
    }
    ctx->pc = 0x1A4280u;
label_1a4280:
    // 0x1a4280: 0x4600a047  neg.s       $f1, $f20
    ctx->pc = 0x1a4280u;
    ctx->f[1] = FPU_NEG_S(ctx->f[20]);
label_1a4284:
    // 0x1a4284: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1a4284u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_1a4288:
    // 0x1a4288: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a4288u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a428c:
    // 0x1a428c: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x1a428cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1a4290:
    // 0x1a4290: 0xe60002e4  swc1        $f0, 0x2E4($s0)
    ctx->pc = 0x1a4290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
label_1a4294:
    // 0x1a4294: 0x10000007  b           . + 4 + (0x7 << 2)
label_1a4298:
    if (ctx->pc == 0x1A4298u) {
        ctx->pc = 0x1A4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4294u;
        // 0x1a4298: 0xe6010320  swc1        $f1, 0x320($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A429Cu;
        goto label_1a429c;
    }
    ctx->pc = 0x1A4294u;
    {
        const bool branch_taken_0x1a4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4294u;
        // 0x1a4298: 0xe6010320  swc1        $f1, 0x320($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4294) {
            ctx->pc = 0x1A42B4u;
            goto label_1a42b4;
        }
    }
    ctx->pc = 0x1A429Cu;
label_1a429c:
    // 0x1a429c: 0xe6140320  swc1        $f20, 0x320($s0)
    ctx->pc = 0x1a429cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 800), bits); }
label_1a42a0:
    // 0x1a42a0: 0x10000004  b           . + 4 + (0x4 << 2)
label_1a42a4:
    if (ctx->pc == 0x1A42A4u) {
        ctx->pc = 0x1A42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42A0u;
        // 0x1a42a4: 0xe60002e4  swc1        $f0, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42A8u;
        goto label_1a42a8;
    }
    ctx->pc = 0x1A42A0u;
    {
        const bool branch_taken_0x1a42a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A42A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42A0u;
        // 0x1a42a4: 0xe60002e4  swc1        $f0, 0x2E4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 740), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a42a0) {
            ctx->pc = 0x1A42B4u;
            goto label_1a42b4;
        }
    }
    ctx->pc = 0x1A42A8u;
label_1a42a8:
    // 0x1a42a8: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a42a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1a42ac:
    // 0x1a42ac: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_1a42b0:
    if (ctx->pc == 0x1A42B0u) {
        ctx->pc = 0x1A42B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A42ACu;
        // 0x1a42b0: 0xae110044  sw          $s1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A42B4u;
        goto label_1a42b4;
    }
    ctx->pc = 0x1A42ACu;
    {
        const bool branch_taken_0x1a42ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a42ac) {
            ctx->pc = 0x1A42B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A42ACu;
            // 0x1a42b0: 0xae110044  sw          $s1, 0x44($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A42F8u;
            goto label_1a42f8;
        }
    }
    ctx->pc = 0x1A42B4u;
label_1a42b4:
    // 0x1a42b4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1a42b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1a42b8:
    // 0x1a42b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a42b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a42bc:
    // 0x1a42bc: 0x3c014337  lui         $at, 0x4337
    ctx->pc = 0x1a42bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17207 << 16));
label_1a42c0:
    // 0x1a42c0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a42c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a42c4:
    // 0x1a42c4: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1a42c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a42c8:
    // 0x1a42c8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1a42c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1a42cc:
    // 0x1a42cc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1a42ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1a42d0:
    // 0x1a42d0: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1a42d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_1a42d4:
    // 0x1a42d4: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x1a42d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1a42d8:
    // 0x1a42d8: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x1a42d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1a42dc:
    // 0x1a42dc: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x1a42dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a42e0:
    // 0x1a42e0: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x1a42e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a42e4:
    // 0x1a42e4: 0xb2020273  sdl         $v0, 0x273($s0)
    ctx->pc = 0x1a42e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a42e8:
    // 0x1a42e8: 0xb602026c  sdr         $v0, 0x26C($s0)
    ctx->pc = 0x1a42e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a42ec:
    // 0x1a42ec: 0xb203027b  sdl         $v1, 0x27B($s0)
    ctx->pc = 0x1a42ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 635); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a42f0:
    // 0x1a42f0: 0xb6030274  sdr         $v1, 0x274($s0)
    ctx->pc = 0x1a42f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 628); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a42f4:
    // 0x1a42f4: 0xae110044  sw          $s1, 0x44($s0)
    ctx->pc = 0x1a42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 17));
label_1a42f8:
    // 0x1a42f8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1a42f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a42fc:
    // 0x1a42fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1a42fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a4300:
    // 0x1a4300: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a4300u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a4304:
    // 0x1a4304: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x1a4304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a4308:
    // 0x1a4308: 0x3e00008  jr          $ra
label_1a430c:
    if (ctx->pc == 0x1A430Cu) {
        ctx->pc = 0x1A430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4308u;
        // 0x1a430c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A4310u;
        goto label_fallthrough_0x1a4308;
    }
    ctx->pc = 0x1A4308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4308u;
        // 0x1a430c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1a4308:
    ctx->pc = 0x1A4310u;
}
