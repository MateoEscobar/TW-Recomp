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

// Function: sub_002748A8
// Address: 0x2748a8 - 0x274e38
void sub_002748A8_0x2748a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002748A8_0x2748a8");
#endif

    switch (ctx->pc) {
        case 0x2748e0u: goto label_2748e0;
        case 0x2748ecu: goto label_2748ec;
        case 0x27491cu: goto label_27491c;
        case 0x274938u: goto label_274938;
        case 0x2749e8u: goto label_2749e8;
        case 0x274b88u: goto label_274b88;
        case 0x274c94u: goto label_274c94;
        case 0x274ce8u: goto label_274ce8;
        case 0x274d90u: goto label_274d90;
        default: break;
    }

    ctx->pc = 0x2748a8u;

    // 0x2748a8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2748a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x2748ac: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x2748acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x2748b0: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2748b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2748b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2748b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748b8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2748b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748bc: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2748bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2748c0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2748c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2748c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2748c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748c8: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x2748c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x2748cc: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2748ccu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2748d0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2748d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2748d4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2748d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2748d8: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2748D8u;
    SET_GPR_U32(ctx, 31, 0x2748E0u);
    ctx->pc = 0x2748DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748D8u;
    // 0x2748dc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2748D8u, 0x2748E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748E0u;
label_2748e0:
    // 0x2748e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2748e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748e4: 0xc09ce76  jal         func_2739D8
    ctx->pc = 0x2748E4u;
    SET_GPR_U32(ctx, 31, 0x2748ECu);
    ctx->pc = 0x2748E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2748E4u;
    // 0x2748e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2739D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2739D8u, 0x2748E4u, 0x2748ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2748ECu;
label_2748ec:
    // 0x2748ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2748ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2748f0: 0x8e020518  lw          $v0, 0x518($s0)
    ctx->pc = 0x2748f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1304)));
    // 0x2748f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2748F4u;
    {
        const bool branch_taken_0x2748f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2748F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2748F4u;
        // 0x2748f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2748f4) {
            ctx->pc = 0x274914u;
            goto label_274914;
        }
    }
    ctx->pc = 0x2748FCu;
    // 0x2748fc: 0x8e62b734  lw          $v0, -0x48CC($s3)
    ctx->pc = 0x2748fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x274900: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x274900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x274904: 0xae030518  sw          $v1, 0x518($s0)
    ctx->pc = 0x274904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1304), GPR_U32(ctx, 3));
    // 0x274908: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x274908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x27490c: 0xae04051c  sw          $a0, 0x51C($s0)
    ctx->pc = 0x27490cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1308), GPR_U32(ctx, 4));
    // 0x274910: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x274910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_274914:
    // 0x274914: 0xc09d1c4  jal         func_274710
    ctx->pc = 0x274914u;
    SET_GPR_U32(ctx, 31, 0x27491Cu);
    ctx->pc = 0x274918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274914u;
    // 0x274918: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x274710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274710u, 0x274914u, 0x27491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27491Cu;
label_27491c:
    // 0x27491c: 0x8e63b734  lw          $v1, -0x48CC($s3)
    ctx->pc = 0x27491cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x274920: 0x8e040514  lw          $a0, 0x514($s0)
    ctx->pc = 0x274920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1300)));
    // 0x274924: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x274924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x274928: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x274928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x27492c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27492Cu;
    {
        const bool branch_taken_0x27492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27492c) {
            ctx->pc = 0x274940u;
            goto label_274940;
        }
    }
    ctx->pc = 0x274934u;
    // 0x274934: 0xae000504  sw          $zero, 0x504($s0)
    ctx->pc = 0x274934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
label_274938:
    // 0x274938: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x274938u;
    {
        const bool branch_taken_0x274938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274938u;
        // 0x27493c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274938) {
            ctx->pc = 0x274E10u;
            goto label_274e10;
        }
    }
    ctx->pc = 0x274940u;
label_274940:
    // 0x274940: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x274940u;
    {
        const bool branch_taken_0x274940 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x274940) {
            ctx->pc = 0x274944u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274940u;
            // 0x274944: 0xc60004f0  lwc1        $f0, 0x4F0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x274958u;
            goto label_274958;
        }
    }
    ctx->pc = 0x274948u;
    // 0x274948: 0xae000514  sw          $zero, 0x514($s0)
    ctx->pc = 0x274948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 0));
    // 0x27494c: 0xa220001c  sb          $zero, 0x1C($s1)
    ctx->pc = 0x27494cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x274950: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x274950u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x274954: 0xc60004f0  lwc1        $f0, 0x4F0($s0)
    ctx->pc = 0x274954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274958:
    // 0x274958: 0xc60104f4  lwc1        $f1, 0x4F4($s0)
    ctx->pc = 0x274958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x27495c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27495cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x274960: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x274960u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x274964: 0x3c013d23  lui         $at, 0x3D23
    ctx->pc = 0x274964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15651 << 16));
    // 0x274968: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x274968u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x27496c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27496cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x274970: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274970u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x274974: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x274974u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x274978: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27497c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27497cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274980: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x274980u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x274984: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x274984u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x274988: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x274988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x27498c: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x27498cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x274990: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x274990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274994: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x274994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x274998: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x274998u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27499c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x27499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2749a0: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x2749a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2749a4: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x2749a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x2749a8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2749a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x2749ac: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x2749acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2749b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2749b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2749b4: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x2749b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2749b8: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x2749b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2749bc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2749bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2749c0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x2749c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x2749c4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2749c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2749c8: 0x450000b4  bc1f        . + 4 + (0xB4 << 2)
    ctx->pc = 0x2749C8u;
    {
        const bool branch_taken_0x2749c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2749CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2749C8u;
        // 0x2749cc: 0xe7a30020  swc1        $f3, 0x20($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2749c8) {
            ctx->pc = 0x274C9Cu;
            goto label_274c9c;
        }
    }
    ctx->pc = 0x2749D0u;
    // 0x2749d0: 0x7a0204e0  lq          $v0, 0x4E0($s0)
    ctx->pc = 0x2749d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 1248)));
    // 0x2749d4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2749d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2749d8: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2749d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2749dc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2749dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2749e0: 0xc0cd940  jal         func_336500
    ctx->pc = 0x2749E0u;
    SET_GPR_U32(ctx, 31, 0x2749E8u);
    ctx->pc = 0x2749E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2749E0u;
    // 0x2749e4: 0x7fa20090  sq          $v0, 0x90($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x2749E0u, 0x2749E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2749E8u;
label_2749e8:
    // 0x2749e8: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x2749e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2749ec: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x2749ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2749f0: 0x8e05051c  lw          $a1, 0x51C($s0)
    ctx->pc = 0x2749f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1308)));
    // 0x2749f4: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x2749f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x2749f8: 0x7fa30080  sq          $v1, 0x80($sp)
    ctx->pc = 0x2749f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 3));
    // 0x2749fc: 0x24a407d0  addiu       $a0, $a1, 0x7D0
    ctx->pc = 0x2749fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2000));
    // 0x274a00: 0x8e62b734  lw          $v0, -0x48CC($s3)
    ctx->pc = 0x274a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x274a04: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x274a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x274a08: 0x44202b  sltu        $a0, $v0, $a0
    ctx->pc = 0x274a08u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x274a0c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x274A0Cu;
    {
        const bool branch_taken_0x274a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x274A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A0Cu;
        // 0x274a10: 0xc6840008  lwc1        $f4, 0x8($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a0c) {
            ctx->pc = 0x274A70u;
            goto label_274a70;
        }
    }
    ctx->pc = 0x274A14u;
    // 0x274a14: 0x2442f830  addiu       $v0, $v0, -0x7D0
    ctx->pc = 0x274a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965296));
    // 0x274a18: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x274a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x274a1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274A1Cu;
    {
        const bool branch_taken_0x274a1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A1Cu;
        // 0x274a20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a1c) {
            ctx->pc = 0x274A38u;
            goto label_274a38;
        }
    }
    ctx->pc = 0x274A24u;
    // 0x274a24: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x274a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274a28: 0x0  nop
    ctx->pc = 0x274a28u;
    // NOP
    // 0x274a2c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x274a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x274a30: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x274A30u;
    {
        const bool branch_taken_0x274a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a30) {
            ctx->pc = 0x274A50u;
            goto label_274a50;
        }
    }
    ctx->pc = 0x274A38u;
label_274a38:
    // 0x274a38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274a3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x274a40: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x274a40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274a44: 0x0  nop
    ctx->pc = 0x274a44u;
    // NOP
    // 0x274a48: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x274a48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x274a4c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x274a4cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_274a50:
    // 0x274a50: 0x3c013a03  lui         $at, 0x3A03
    ctx->pc = 0x274a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14851 << 16));
    // 0x274a54: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x274a54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x274a58: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x274a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274a5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x274a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x274a60: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x274a60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x274a64: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x274a64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x274a68: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x274a68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x274a6c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x274a6cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_274a70:
    // 0x274a70: 0x8e63b734  lw          $v1, -0x48CC($s3)
    ctx->pc = 0x274a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x274a74: 0x8e0404f8  lw          $a0, 0x4F8($s0)
    ctx->pc = 0x274a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1272)));
    // 0x274a78: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x274a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x274a7c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x274a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x274a80: 0x2c43001e  sltiu       $v1, $v0, 0x1E
    ctx->pc = 0x274a80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x274a84: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x274A84u;
    {
        const bool branch_taken_0x274a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274a84) {
            ctx->pc = 0x274AC4u;
            goto label_274ac4;
        }
    }
    ctx->pc = 0x274A8Cu;
    // 0x274a8c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x274A8Cu;
    {
        const bool branch_taken_0x274a8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x274A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274A8Cu;
        // 0x274a90: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274a8c) {
            ctx->pc = 0x274AA8u;
            goto label_274aa8;
        }
    }
    ctx->pc = 0x274A94u;
    // 0x274a94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x274a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x274a98: 0x0  nop
    ctx->pc = 0x274a98u;
    // NOP
    // 0x274a9c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x274a9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x274aa0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x274AA0u;
    {
        const bool branch_taken_0x274aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274AA0u;
        // 0x274aa4: 0x460418c2  mul.s       $f3, $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274aa0) {
            ctx->pc = 0x274AD4u;
            goto label_274ad4;
        }
    }
    ctx->pc = 0x274AA8u;
label_274aa8:
    // 0x274aa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x274aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x274aac: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x274aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x274ab0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x274ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x274ab4: 0x0  nop
    ctx->pc = 0x274ab4u;
    // NOP
    // 0x274ab8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x274ab8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x274abc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274ABCu;
    {
        const bool branch_taken_0x274abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274ABCu;
        // 0x274ac0: 0x460318c0  add.s       $f3, $f3, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274abc) {
            ctx->pc = 0x274ACCu;
            goto label_274acc;
        }
    }
    ctx->pc = 0x274AC4u;
label_274ac4:
    // 0x274ac4: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x274ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x274ac8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x274ac8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_274acc:
    // 0x274acc: 0x0  nop
    ctx->pc = 0x274accu;
    // NOP
    // 0x274ad0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x274ad0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_274ad4:
    // 0x274ad4: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x274ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x274ad8: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x274ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x274adc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x274adcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ae0: 0xc60004f4  lwc1        $f0, 0x4F4($s0)
    ctx->pc = 0x274ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x274ae4: 0x2605000d  addiu       $a1, $s0, 0xD
    ctx->pc = 0x274ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
    // 0x274ae8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x274ae8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x274aec: 0xc60104f0  lwc1        $f1, 0x4F0($s0)
    ctx->pc = 0x274aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x274af0: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x274af0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x274af4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x274af4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x274af8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x274af8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x274afc: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x274afcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x274b00: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274b00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274b04: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x274b04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x274b08: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x274b08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x274b0c: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x274b0cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x274b10: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x274b10u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x274b14: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x274b14u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x274b18: 0x46030028  max.s       $f0, $f0, $f3
    ctx->pc = 0x274b18u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[3]);
    // 0x274b1c: 0x46030868  max.s       $f1, $f1, $f3
    ctx->pc = 0x274b1cu;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[3]);
    // 0x274b20: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274b20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x274b24: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x274b24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x274b28: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x274b28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x274b2c: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x274b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x274b30: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x274b30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x274b34: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x274b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x274b38: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x274b38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x274b3c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x274b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x274b40: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x274b40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x274b44: 0xe60104f0  swc1        $f1, 0x4F0($s0)
    ctx->pc = 0x274b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1264), bits); }
    // 0x274b48: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x274b48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x274b4c: 0x1120001d  beqz        $t1, . + 4 + (0x1D << 2)
    ctx->pc = 0x274B4Cu;
    {
        const bool branch_taken_0x274b4c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B4Cu;
        // 0x274b50: 0xe60004f4  swc1        $f0, 0x4F4($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1268), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b4c) {
            ctx->pc = 0x274BC4u;
            goto label_274bc4;
        }
    }
    ctx->pc = 0x274B54u;
    // 0x274b54: 0x90a4ffff  lbu         $a0, -0x1($a1)
    ctx->pc = 0x274b54u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x274b58: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x274b58u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x274b5c: 0xe42023  subu        $a0, $a3, $a0
    ctx->pc = 0x274b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x274b60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x274b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x274b64: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x274b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x274b68: 0x842018  mult        $a0, $a0, $a0
    ctx->pc = 0x274b68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274b6c: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x274b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274b70: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x274b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274b74: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x274b74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x274b78: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x274B78u;
    {
        const bool branch_taken_0x274b78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x274b78) {
            ctx->pc = 0x274B7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274B78u;
            // 0x274b7c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274BC4u;
            goto label_274bc4;
        }
    }
    ctx->pc = 0x274B80u;
    // 0x274b80: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x274b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x274b84: 0x0  nop
    ctx->pc = 0x274b84u;
    // NOP
label_274b88:
    // 0x274b88: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x274b88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x274b8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x274B8Cu;
    {
        const bool branch_taken_0x274b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274B8Cu;
        // 0x274b90: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274b8c) {
            ctx->pc = 0x274BC4u;
            goto label_274bc4;
        }
    }
    ctx->pc = 0x274B94u;
    // 0x274b94: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x274b94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
    // 0x274b98: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x274b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x274b9c: 0xe31823  subu        $v1, $a3, $v1
    ctx->pc = 0x274b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x274ba0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x274ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x274ba4: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x274ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x274ba8: 0x631818  mult        $v1, $v1, $v1
    ctx->pc = 0x274ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x274bac: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x274bacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274bb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x274bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x274bb4: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x274bb4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x274bb8: 0x5080fff3  beql        $a0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x274BB8u;
    {
        const bool branch_taken_0x274bb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x274bb8) {
            ctx->pc = 0x274BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274BB8u;
            // 0x274bbc: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274b88;
        }
    }
    ctx->pc = 0x274BC0u;
    // 0x274bc0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x274bc0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_274bc4:
    // 0x274bc4: 0x11400011  beqz        $t2, . + 4 + (0x11 << 2)
    ctx->pc = 0x274BC4u;
    {
        const bool branch_taken_0x274bc4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BC4u;
        // 0x274bc8: 0x2d22012c  sltiu       $v0, $t1, 0x12C (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)300) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bc4) {
            ctx->pc = 0x274C0Cu;
            goto label_274c0c;
        }
    }
    ctx->pc = 0x274BCCu;
    // 0x274bcc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274BCCu;
    {
        const bool branch_taken_0x274bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BCCu;
        // 0x274bd0: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274bcc) {
            ctx->pc = 0x274BECu;
            goto label_274bec;
        }
    }
    ctx->pc = 0x274BD4u;
    // 0x274bd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274bd8: 0x8e030268  lw          $v1, 0x268($s0)
    ctx->pc = 0x274bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x274bdc: 0xae0204fc  sw          $v0, 0x4FC($s0)
    ctx->pc = 0x274bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 2));
    // 0x274be0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x274be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274be4: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x274BE4u;
    {
        const bool branch_taken_0x274be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274BE4u;
        // 0x274be8: 0xae030508  sw          $v1, 0x508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274be4) {
            ctx->pc = 0x274E10u;
            goto label_274e10;
        }
    }
    ctx->pc = 0x274BECu;
label_274bec:
    // 0x274bec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x274becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x274bf0: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x274bf0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274bf4: 0x83a40001  lb          $a0, 0x1($sp)
    ctx->pc = 0x274bf4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x274bf8: 0xa043000c  sb          $v1, 0xC($v0)
    ctx->pc = 0x274bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x274bfc: 0xa044000d  sb          $a0, 0xD($v0)
    ctx->pc = 0x274bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 13), (uint8_t)GPR_U32(ctx, 4));
    // 0x274c00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x274c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x274c04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x274c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x274c08: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x274c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_274c0c:
    // 0x274c0c: 0x8e020510  lw          $v0, 0x510($s0)
    ctx->pc = 0x274c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x274c10: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x274c10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x274c14: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x274C14u;
    {
        const bool branch_taken_0x274c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274c14) {
            ctx->pc = 0x274C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274C14u;
            // 0x274c18: 0x8e040508  lw          $a0, 0x508($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274CA0u;
            goto label_274ca0;
        }
    }
    ctx->pc = 0x274C1Cu;
    // 0x274c1c: 0x8e030508  lw          $v1, 0x508($s0)
    ctx->pc = 0x274c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
    // 0x274c20: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x274c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x274c24: 0x8e65b734  lw          $a1, -0x48CC($s3)
    ctx->pc = 0x274c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x274c28: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x274c28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274c2c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x274c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x274c30: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x274c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x274c34: 0x9082026c  lbu         $v0, 0x26C($a0)
    ctx->pc = 0x274c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 620)));
    // 0x274c38: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x274c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274c3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c40: 0x0  nop
    ctx->pc = 0x274c40u;
    // NOP
    // 0x274c44: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274c48: 0xe60004f0  swc1        $f0, 0x4F0($s0)
    ctx->pc = 0x274c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1264), bits); }
    // 0x274c4c: 0x9062026d  lbu         $v0, 0x26D($v1)
    ctx->pc = 0x274c4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 621)));
    // 0x274c50: 0xae000510  sw          $zero, 0x510($s0)
    ctx->pc = 0x274c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 0));
    // 0x274c54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x274c54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x274c58: 0x0  nop
    ctx->pc = 0x274c58u;
    // NOP
    // 0x274c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x274c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x274c60: 0xe60004f4  swc1        $f0, 0x4F4($s0)
    ctx->pc = 0x274c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1268), bits); }
    // 0x274c64: 0x8ca20048  lw          $v0, 0x48($a1)
    ctx->pc = 0x274c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x274c68: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x274c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x274c6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x274c70: 0xae020514  sw          $v0, 0x514($s0)
    ctx->pc = 0x274c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1300), GPR_U32(ctx, 2));
    // 0x274c74: 0xa226001d  sb          $a2, 0x1D($s1)
    ctx->pc = 0x274c74u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 6));
    // 0x274c78: 0xa227001c  sb          $a3, 0x1C($s1)
    ctx->pc = 0x274c78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 7));
    // 0x274c7c: 0xae000504  sw          $zero, 0x504($s0)
    ctx->pc = 0x274c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1284), GPR_U32(ctx, 0));
    // 0x274c80: 0x9242019c  lbu         $v0, 0x19C($s2)
    ctx->pc = 0x274c80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 412)));
    // 0x274c84: 0x1040ff2c  beqz        $v0, . + 4 + (-0xD4 << 2)
    ctx->pc = 0x274C84u;
    {
        const bool branch_taken_0x274c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C84u;
        // 0x274c88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c84) {
            ctx->pc = 0x274938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274938;
        }
    }
    ctx->pc = 0x274C8Cu;
    // 0x274c8c: 0xc09ce9a  jal         func_273A68
    ctx->pc = 0x274C8Cu;
    SET_GPR_U32(ctx, 31, 0x274C94u);
    ctx->pc = 0x274C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x274C8Cu;
    // 0x274c90: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x273A68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273A68u, 0x274C8Cu, 0x274C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x274C94u;
label_274c94:
    // 0x274c94: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x274C94u;
    {
        const bool branch_taken_0x274c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274C94u;
        // 0x274c98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274c94) {
            ctx->pc = 0x274E10u;
            goto label_274e10;
        }
    }
    ctx->pc = 0x274C9Cu;
label_274c9c:
    // 0x274c9c: 0x8e040508  lw          $a0, 0x508($s0)
    ctx->pc = 0x274c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
label_274ca0:
    // 0x274ca0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x274ca0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274ca4: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x274ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x274ca8: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x274ca8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274cac: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x274cacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274cb0: 0xae000500  sw          $zero, 0x500($s0)
    ctx->pc = 0x274cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 0));
    // 0x274cb4: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x274cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x274cb8: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x274cb8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x274cbc: 0x93a80000  lbu         $t0, 0x0($sp)
    ctx->pc = 0x274cbcu;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274cc0: 0x64300a  movz        $a2, $v1, $a0
    ctx->pc = 0x274cc0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x274cc4: 0x93a70001  lbu         $a3, 0x1($sp)
    ctx->pc = 0x274cc4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x274cc8: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x274cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x274ccc: 0xc9182b  sltu        $v1, $a2, $t1
    ctx->pc = 0x274cccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x274cd0: 0x2442026d  addiu       $v0, $v0, 0x26D
    ctx->pc = 0x274cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 621));
    // 0x274cd4: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x274CD4u;
    {
        const bool branch_taken_0x274cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CD4u;
        // 0x274cd8: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cd4) {
            ctx->pc = 0x274D20u;
            goto label_274d20;
        }
    }
    ctx->pc = 0x274CDCu;
    // 0x274cdc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x274CDCu;
    {
        const bool branch_taken_0x274cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CDCu;
        // 0x274ce0: 0x90a3ffff  lbu         $v1, -0x1($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cdc) {
            ctx->pc = 0x274CF8u;
            goto label_274cf8;
        }
    }
    ctx->pc = 0x274CE4u;
    // 0x274ce4: 0x0  nop
    ctx->pc = 0x274ce4u;
    // NOP
label_274ce8:
    // 0x274ce8: 0xc9102b  sltu        $v0, $a2, $t1
    ctx->pc = 0x274ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x274cec: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274CECu;
    {
        const bool branch_taken_0x274cec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274CECu;
        // 0x274cf0: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274cec) {
            ctx->pc = 0x274D20u;
            goto label_274d20;
        }
    }
    ctx->pc = 0x274CF4u;
    // 0x274cf4: 0x90a3ffff  lbu         $v1, -0x1($a1)
    ctx->pc = 0x274cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294967295)));
label_274cf8:
    // 0x274cf8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x274cf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x274cfc: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x274cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x274d00: 0xe21023  subu        $v0, $a3, $v0
    ctx->pc = 0x274d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x274d04: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x274d04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274d08: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x274d08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274d0c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x274d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274d10: 0x28630024  slti        $v1, $v1, 0x24
    ctx->pc = 0x274d10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x274d14: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x274D14u;
    {
        const bool branch_taken_0x274d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D14u;
        // 0x274d18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d14) {
            ctx->pc = 0x274CE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274ce8;
        }
    }
    ctx->pc = 0x274D1Cu;
    // 0x274d1c: 0xae0a0500  sw          $t2, 0x500($s0)
    ctx->pc = 0x274d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 10));
label_274d20:
    // 0x274d20: 0x8e070508  lw          $a3, 0x508($s0)
    ctx->pc = 0x274d20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
    // 0x274d24: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x274d24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274d28: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x274d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x274d2c: 0x8e050268  lw          $a1, 0x268($s0)
    ctx->pc = 0x274d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x274d30: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x274d30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x274d34: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x274d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x274d38: 0x2442026d  addiu       $v0, $v0, 0x26D
    ctx->pc = 0x274d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 621));
    // 0x274d3c: 0x65202b  sltu        $a0, $v1, $a1
    ctx->pc = 0x274d3cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x274d40: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x274d40u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d44: 0xa4500a  movz        $t2, $a1, $a0
    ctx->pc = 0x274d44u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
    // 0x274d48: 0x503021  addu        $a2, $v0, $s0
    ctx->pc = 0x274d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x274d4c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x274d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274d50: 0x93a90000  lbu         $t1, 0x0($sp)
    ctx->pc = 0x274d50u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x274d54: 0xea102b  sltu        $v0, $a3, $t2
    ctx->pc = 0x274d54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x274d58: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x274D58u;
    {
        const bool branch_taken_0x274d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D58u;
        // 0x274d5c: 0x93a80001  lbu         $t0, 0x1($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d58) {
            ctx->pc = 0x274DCCu;
            goto label_274dcc;
        }
    }
    ctx->pc = 0x274D60u;
    // 0x274d60: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x274d60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x274d64: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x274d64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274d68: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x274d68u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x274d6c: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x274d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x274d70: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x274d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274d74: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x274d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274d78: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x274d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274d7c: 0x28630024  slti        $v1, $v1, 0x24
    ctx->pc = 0x274d7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x274d80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x274D80u;
    {
        const bool branch_taken_0x274d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D80u;
        // 0x274d84: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d80) {
            ctx->pc = 0x274D90u;
            goto label_274d90;
        }
    }
    ctx->pc = 0x274D88u;
    // 0x274d88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x274D88u;
    {
        const bool branch_taken_0x274d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D88u;
        // 0x274d8c: 0xae0b0500  sw          $t3, 0x500($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d88) {
            ctx->pc = 0x274DCCu;
            goto label_274dcc;
        }
    }
    ctx->pc = 0x274D90u;
label_274d90:
    // 0x274d90: 0xaa102b  sltu        $v0, $a1, $t2
    ctx->pc = 0x274d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x274d94: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x274D94u;
    {
        const bool branch_taken_0x274d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274D94u;
        // 0x274d98: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274d94) {
            ctx->pc = 0x274DCCu;
            goto label_274dcc;
        }
    }
    ctx->pc = 0x274D9Cu;
    // 0x274d9c: 0x90c3ffff  lbu         $v1, -0x1($a2)
    ctx->pc = 0x274d9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4294967295)));
    // 0x274da0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x274da0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274da4: 0x1231823  subu        $v1, $t1, $v1
    ctx->pc = 0x274da4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x274da8: 0x1021023  subu        $v0, $t0, $v0
    ctx->pc = 0x274da8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x274dac: 0x632018  mult        $a0, $v1, $v1
    ctx->pc = 0x274dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x274db0: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x274db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x274db4: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x274db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x274db8: 0x28630024  slti        $v1, $v1, 0x24
    ctx->pc = 0x274db8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)36) ? 1 : 0);
    // 0x274dbc: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x274DBCu;
    {
        const bool branch_taken_0x274dbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274dbc) {
            ctx->pc = 0x274DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x274DBCu;
            // 0x274dc0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x274D90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_274d90;
        }
    }
    ctx->pc = 0x274DC4u;
    // 0x274dc4: 0xae0b0500  sw          $t3, 0x500($s0)
    ctx->pc = 0x274dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1280), GPR_U32(ctx, 11));
    // 0x274dc8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x274dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_274dcc:
    // 0x274dcc: 0x8e020500  lw          $v0, 0x500($s0)
    ctx->pc = 0x274dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1280)));
    // 0x274dd0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x274DD0u;
    {
        const bool branch_taken_0x274dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x274DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DD0u;
        // 0x274dd4: 0xae070508  sw          $a3, 0x508($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1288), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274dd0) {
            ctx->pc = 0x274DF8u;
            goto label_274df8;
        }
    }
    ctx->pc = 0x274DD8u;
    // 0x274dd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274ddc: 0xa220001c  sb          $zero, 0x1C($s1)
    ctx->pc = 0x274ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x274de0: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x274DE0u;
    {
        const bool branch_taken_0x274de0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DE0u;
        // 0x274de4: 0xa222001d  sb          $v0, 0x1D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274de0) {
            ctx->pc = 0x274E00u;
            goto label_274e00;
        }
    }
    ctx->pc = 0x274DE8u;
    // 0x274de8: 0x8e020510  lw          $v0, 0x510($s0)
    ctx->pc = 0x274de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1296)));
    // 0x274dec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x274decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x274df0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x274DF0u;
    {
        const bool branch_taken_0x274df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274DF0u;
        // 0x274df4: 0xae020510  sw          $v0, 0x510($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274df0) {
            ctx->pc = 0x274E00u;
            goto label_274e00;
        }
    }
    ctx->pc = 0x274DF8u;
label_274df8:
    // 0x274df8: 0xa220001d  sb          $zero, 0x1D($s1)
    ctx->pc = 0x274df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x274dfc: 0xa220001c  sb          $zero, 0x1C($s1)
    ctx->pc = 0x274dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 28), (uint8_t)GPR_U32(ctx, 0));
label_274e00:
    // 0x274e00: 0x8e64b734  lw          $a0, -0x48CC($s3)
    ctx->pc = 0x274e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x274e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x274e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x274e08: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x274e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x274e0c: 0xae0304f8  sw          $v1, 0x4F8($s0)
    ctx->pc = 0x274e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1272), GPR_U32(ctx, 3));
label_274e10:
    // 0x274e10: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x274e10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x274e14: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x274e14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x274e18: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x274e18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x274e1c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x274e1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x274e20: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x274e20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x274e24: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x274e24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x274e28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x274e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x274e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x274E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x274E2Cu;
        // 0x274e30: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x274E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x274E34u;
    // 0x274e34: 0x0  nop
    ctx->pc = 0x274e34u;
    // NOP
    ctx->pc = 0x274e38u;
}
