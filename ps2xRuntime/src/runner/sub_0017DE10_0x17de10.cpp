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

// Function: sub_0017DE10
// Address: 0x17de10 - 0x17e490
void sub_0017DE10_0x17de10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DE10_0x17de10");
#endif

    switch (ctx->pc) {
        case 0x17de88u: goto label_17de88;
        case 0x17df10u: goto label_17df10;
        case 0x17e04cu: goto label_17e04c;
        case 0x17e070u: goto label_17e070;
        case 0x17e090u: goto label_17e090;
        case 0x17e09cu: goto label_17e09c;
        case 0x17e0a4u: goto label_17e0a4;
        case 0x17e0b0u: goto label_17e0b0;
        case 0x17e0c0u: goto label_17e0c0;
        case 0x17e194u: goto label_17e194;
        case 0x17e1a8u: goto label_17e1a8;
        case 0x17e1bcu: goto label_17e1bc;
        case 0x17e25cu: goto label_17e25c;
        case 0x17e2e0u: goto label_17e2e0;
        case 0x17e390u: goto label_17e390;
        case 0x17e3f0u: goto label_17e3f0;
        default: break;
    }

    ctx->pc = 0x17de10u;

    // 0x17de10: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x17de10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x17de14: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17de18: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x17de18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x17de1c: 0x460060c6  mov.s       $f3, $f12
    ctx->pc = 0x17de1cu;
    ctx->f[3] = FPU_MOV_S(ctx->f[12]);
    // 0x17de20: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x17de20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
    // 0x17de24: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x17de24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de28: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x17de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
    // 0x17de2c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x17de2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de30: 0x8c435374  lw          $v1, 0x5374($v0)
    ctx->pc = 0x17de30u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E5374u));
    // 0x17de34: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x17de34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17de38: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x17de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x17de3c: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x17de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x17de40: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x17de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x17de44: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x17de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x17de48: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x17de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x17de4c: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x17de4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
    // 0x17de50: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x17de50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x17de54: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x17de54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x17de58: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x17DE58u;
    {
        const bool branch_taken_0x17de58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE58u;
        // 0x17de5c: 0xafa40120  sw          $a0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de58) {
            ctx->pc = 0x17E2A0u;
            goto label_17e2a0;
        }
    }
    ctx->pc = 0x17DE60u;
    // 0x17de60: 0x30d00001  andi        $s0, $a2, 0x1
    ctx->pc = 0x17de60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x17de64: 0x12000047  beqz        $s0, . + 4 + (0x47 << 2)
    ctx->pc = 0x17DE64u;
    {
        const bool branch_taken_0x17de64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE64u;
        // 0x17de68: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de64) {
            ctx->pc = 0x17DF84u;
            goto label_17df84;
        }
    }
    ctx->pc = 0x17DE6Cu;
    // 0x17de6c: 0x11000023  beqz        $t0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17DE6Cu;
    {
        const bool branch_taken_0x17de6c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE6Cu;
        // 0x17de70: 0xafa20124  sw          $v0, 0x124($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17de6c) {
            ctx->pc = 0x17DEFCu;
            goto label_17defc;
        }
    }
    ctx->pc = 0x17DE74u;
    // 0x17de74: 0x3c013a23  lui         $at, 0x3A23
    ctx->pc = 0x17de74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14883 << 16));
    // 0x17de78: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17de78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17de7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17de7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17de80: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17DE80u;
    SET_GPR_U32(ctx, 31, 0x17DE88u);
    ctx->pc = 0x17DE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DE80u;
    // 0x17de84: 0x460c1b02  mul.s       $f12, $f3, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17DE80u, 0x17DE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DE88u;
label_17de88:
    // 0x17de88: 0x2c450003  sltiu       $a1, $v0, 0x3
    ctx->pc = 0x17de88u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x17de8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x17de8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17de90: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x17de90u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x17de94: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x17de94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x17de98: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x17de98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x17de9c: 0x24865300  addiu       $a2, $a0, 0x5300
    ctx->pc = 0x17de9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    // 0x17dea0: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x17dea4: 0xafa50124  sw          $a1, 0x124($sp)
    ctx->pc = 0x17dea4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 5));
    // 0x17dea8: 0x24855300  addiu       $a1, $a0, 0x5300
    ctx->pc = 0x17dea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    // 0x17deac: 0x68c70073  ldl         $a3, 0x73($a2)
    ctx->pc = 0x17deacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 115); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17deb0: 0x6cc7006c  ldr         $a3, 0x6C($a2)
    ctx->pc = 0x17deb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 108); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17deb4: 0x68c2007b  ldl         $v0, 0x7B($a2)
    ctx->pc = 0x17deb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 123); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17deb8: 0x6cc20074  ldr         $v0, 0x74($a2)
    ctx->pc = 0x17deb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 116); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17debc: 0x68c30083  ldl         $v1, 0x83($a2)
    ctx->pc = 0x17debcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 131); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17dec0: 0x6cc3007c  ldr         $v1, 0x7C($a2)
    ctx->pc = 0x17dec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 124); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17dec4: 0xb0a70007  sdl         $a3, 0x7($a1)
    ctx->pc = 0x17dec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dec8: 0xb4a70000  sdr         $a3, 0x0($a1)
    ctx->pc = 0x17dec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17decc: 0xb0a2000f  sdl         $v0, 0xF($a1)
    ctx->pc = 0x17deccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ded0: 0xb4a20008  sdr         $v0, 0x8($a1)
    ctx->pc = 0x17ded0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ded4: 0xb0a30017  sdl         $v1, 0x17($a1)
    ctx->pc = 0x17ded4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17ded8: 0xb4a30010  sdr         $v1, 0x10($a1)
    ctx->pc = 0x17ded8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dedc: 0x68c7008b  ldl         $a3, 0x8B($a2)
    ctx->pc = 0x17dedcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 139); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x17dee0: 0x6cc70084  ldr         $a3, 0x84($a2)
    ctx->pc = 0x17dee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 132); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x17dee4: 0x8cc2008c  lw          $v0, 0x8C($a2)
    ctx->pc = 0x17dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 140)));
    // 0x17dee8: 0xb0a7001f  sdl         $a3, 0x1F($a1)
    ctx->pc = 0x17dee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17deec: 0xb4a70018  sdr         $a3, 0x18($a1)
    ctx->pc = 0x17deecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17def0: 0xaca20020  sw          $v0, 0x20($a1)
    ctx->pc = 0x17def0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 2));
    // 0x17def4: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x17DEF4u;
    {
        const bool branch_taken_0x17def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEF4u;
        // 0x17def8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17def4) {
            ctx->pc = 0x17DFE4u;
            goto label_17dfe4;
        }
    }
    ctx->pc = 0x17DEFCu;
label_17defc:
    // 0x17defc: 0x3c013a23  lui         $at, 0x3A23
    ctx->pc = 0x17defcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14883 << 16));
    // 0x17df00: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17df00u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x17df04: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17df04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17df08: 0xc10b1c6  jal         func_42C718
    ctx->pc = 0x17DF08u;
    SET_GPR_U32(ctx, 31, 0x17DF10u);
    ctx->pc = 0x17DF0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DF08u;
    // 0x17df0c: 0x460c1b02  mul.s       $f12, $f3, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C718u, 0x17DF08u, 0x17DF10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17DF10u;
label_17df10:
    // 0x17df10: 0x2c450004  sltiu       $a1, $v0, 0x4
    ctx->pc = 0x17df10u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x17df14: 0x8fa70124  lw          $a3, 0x124($sp)
    ctx->pc = 0x17df14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
    // 0x17df18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x17df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17df1c: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x17df1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x17df20: 0x45180b  movn        $v1, $v0, $a1
    ctx->pc = 0x17df20u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x17df24: 0x24865300  addiu       $a2, $a0, 0x5300
    ctx->pc = 0x17df24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    // 0x17df28: 0xe33823  subu        $a3, $a3, $v1
    ctx->pc = 0x17df28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x17df2c: 0xafa70124  sw          $a3, 0x124($sp)
    ctx->pc = 0x17df2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 7));
    // 0x17df30: 0x24875300  addiu       $a3, $a0, 0x5300
    ctx->pc = 0x17df30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    // 0x17df34: 0x68c2004f  ldl         $v0, 0x4F($a2)
    ctx->pc = 0x17df34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17df38: 0x6cc20048  ldr         $v0, 0x48($a2)
    ctx->pc = 0x17df38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17df3c: 0x68c30057  ldl         $v1, 0x57($a2)
    ctx->pc = 0x17df3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x17df40: 0x6cc30050  ldr         $v1, 0x50($a2)
    ctx->pc = 0x17df40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x17df44: 0x68c5005f  ldl         $a1, 0x5F($a2)
    ctx->pc = 0x17df44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17df48: 0x6cc50058  ldr         $a1, 0x58($a2)
    ctx->pc = 0x17df48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17df4c: 0xb0e20007  sdl         $v0, 0x7($a3)
    ctx->pc = 0x17df4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df50: 0xb4e20000  sdr         $v0, 0x0($a3)
    ctx->pc = 0x17df50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df54: 0xb0e3000f  sdl         $v1, 0xF($a3)
    ctx->pc = 0x17df54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df58: 0xb4e30008  sdr         $v1, 0x8($a3)
    ctx->pc = 0x17df58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df5c: 0xb0e50017  sdl         $a1, 0x17($a3)
    ctx->pc = 0x17df5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df60: 0xb4e50010  sdr         $a1, 0x10($a3)
    ctx->pc = 0x17df60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df64: 0x68c20067  ldl         $v0, 0x67($a2)
    ctx->pc = 0x17df64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17df68: 0x6cc20060  ldr         $v0, 0x60($a2)
    ctx->pc = 0x17df68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17df6c: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x17df6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
    // 0x17df70: 0xb0e2001f  sdl         $v0, 0x1F($a3)
    ctx->pc = 0x17df70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df74: 0xb4e20018  sdr         $v0, 0x18($a3)
    ctx->pc = 0x17df74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17df78: 0xace30020  sw          $v1, 0x20($a3)
    ctx->pc = 0x17df78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 3));
    // 0x17df7c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x17DF7Cu;
    {
        const bool branch_taken_0x17df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DF7Cu;
        // 0x17df80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df7c) {
            ctx->pc = 0x17DFE4u;
            goto label_17dfe4;
        }
    }
    ctx->pc = 0x17DF84u;
label_17df84:
    // 0x17df84: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x17df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x17df88: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x17df88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x17df8c: 0xafa30124  sw          $v1, 0x124($sp)
    ctx->pc = 0x17df8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 3));
    // 0x17df90: 0x24435300  addiu       $v1, $v0, 0x5300
    ctx->pc = 0x17df90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x17df94: 0x24475300  addiu       $a3, $v0, 0x5300
    ctx->pc = 0x17df94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x17df98: 0x6864002b  ldl         $a0, 0x2B($v1)
    ctx->pc = 0x17df98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17df9c: 0x6c640024  ldr         $a0, 0x24($v1)
    ctx->pc = 0x17df9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17dfa0: 0x68650033  ldl         $a1, 0x33($v1)
    ctx->pc = 0x17dfa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 51); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17dfa4: 0x6c65002c  ldr         $a1, 0x2C($v1)
    ctx->pc = 0x17dfa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 44); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17dfa8: 0x6866003b  ldl         $a2, 0x3B($v1)
    ctx->pc = 0x17dfa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 59); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x17dfac: 0x6c660034  ldr         $a2, 0x34($v1)
    ctx->pc = 0x17dfacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 52); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x17dfb0: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x17dfb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfb4: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x17dfb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfb8: 0xb0e5000f  sdl         $a1, 0xF($a3)
    ctx->pc = 0x17dfb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfbc: 0xb4e50008  sdr         $a1, 0x8($a3)
    ctx->pc = 0x17dfbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfc0: 0xb0e60017  sdl         $a2, 0x17($a3)
    ctx->pc = 0x17dfc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfc4: 0xb4e60010  sdr         $a2, 0x10($a3)
    ctx->pc = 0x17dfc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfc8: 0x68640043  ldl         $a0, 0x43($v1)
    ctx->pc = 0x17dfc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17dfcc: 0x6c64003c  ldr         $a0, 0x3C($v1)
    ctx->pc = 0x17dfccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17dfd0: 0x8c650044  lw          $a1, 0x44($v1)
    ctx->pc = 0x17dfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x715344u));
    // 0x17dfd4: 0xb0e4001f  sdl         $a0, 0x1F($a3)
    ctx->pc = 0x17dfd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfd8: 0xb4e40018  sdr         $a0, 0x18($a3)
    ctx->pc = 0x17dfd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17dfdc: 0xace50020  sw          $a1, 0x20($a3)
    ctx->pc = 0x17dfdcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x715320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715320u, _value); } while (0);
    // 0x17dfe0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17dfe4:
    // 0x17dfe4: 0x1220011d  beqz        $s1, . + 4 + (0x11D << 2)
    ctx->pc = 0x17DFE4u;
    {
        const bool branch_taken_0x17dfe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DFE4u;
        // 0x17dfe8: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfe4) {
            ctx->pc = 0x17E45Cu;
            goto label_17e45c;
        }
    }
    ctx->pc = 0x17DFECu;
    // 0x17dfec: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x17dfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x17dff0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x17dff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17dff4: 0x24425300  addiu       $v0, $v0, 0x5300
    ctx->pc = 0x17dff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
    // 0x17dff8: 0x8c550020  lw          $s5, 0x20($v0)
    ctx->pc = 0x17dff8u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x715320u));
    // 0x17dffc: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x17dffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x17e000: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x17e000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x17e004: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x17e004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x17e008: 0x3c030055  lui         $v1, 0x55
    ctx->pc = 0x17e008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)85 << 16));
    // 0x17e00c: 0x3c17ffff  lui         $s7, 0xFFFF
    ctx->pc = 0x17e00cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65535 << 16));
    // 0x17e010: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x17e010u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x17e014: 0xc47422ec  lwc1        $f20, 0x22EC($v1)
    ctx->pc = 0x17e014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e018: 0xafa40128  sw          $a0, 0x128($sp)
    ctx->pc = 0x17e018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 4));
    // 0x17e01c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17e01cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e020: 0x12c0009b  beqz        $s6, . + 4 + (0x9B << 2)
    ctx->pc = 0x17E020u;
    {
        const bool branch_taken_0x17e020 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E020u;
        // 0x17e024: 0x36f7ffff  ori         $s7, $s7, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e020) {
            ctx->pc = 0x17E290u;
            goto label_17e290;
        }
    }
    ctx->pc = 0x17E028u;
    // 0x17e028: 0x92c20647  lbu         $v0, 0x647($s6)
    ctx->pc = 0x17e028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1607)));
    // 0x17e02c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x17e02cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x17e030: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x17E030u;
    {
        const bool branch_taken_0x17e030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E030u;
        // 0x17e034: 0x8fa70124  lw          $a3, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e030) {
            ctx->pc = 0x17E294u;
            goto label_17e294;
        }
    }
    ctx->pc = 0x17E038u;
    // 0x17e038: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x17e038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17e03c: 0x8ca40084  lw          $a0, 0x84($a1)
    ctx->pc = 0x17e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x17e040: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e044: 0xc05f1c0  jal         func_17C700
    ctx->pc = 0x17E044u;
    SET_GPR_U32(ctx, 31, 0x17E04Cu);
    ctx->pc = 0x17E048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E044u;
    // 0x17e048: 0x26d10090  addiu       $s1, $s6, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C700u, 0x17E044u, 0x17E04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E04Cu;
label_17e04c:
    // 0x17e04c: 0x86250002  lh          $a1, 0x2($s1)
    ctx->pc = 0x17e04cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17e050: 0x3c100071  lui         $s0, 0x71
    ctx->pc = 0x17e050u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)113 << 16));
    // 0x17e054: 0x26104b00  addiu       $s0, $s0, 0x4B00
    ctx->pc = 0x17e054u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 19200));
    // 0x17e058: 0x27b200c0  addiu       $s2, $sp, 0xC0
    ctx->pc = 0x17e058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x17e05c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x17e05cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x17e060: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e064: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x17e064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x17e068: 0xc0cd940  jal         func_336500
    ctx->pc = 0x17E068u;
    SET_GPR_U32(ctx, 31, 0x17E070u);
    ctx->pc = 0x17E06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E068u;
    // 0x17e06c: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x17E068u, 0x17E070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E070u;
label_17e070:
    // 0x17e070: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x17e070u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17e074: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x17e074u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17e078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17e078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e07c: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x17e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17e080: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x17e080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x17e084: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x17e084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17e088: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x17E088u;
    SET_GPR_U32(ctx, 31, 0x17E090u);
    ctx->pc = 0x17E08Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E088u;
    // 0x17e08c: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x17E088u, 0x17E090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E090u;
label_17e090:
    // 0x17e090: 0x244500d0  addiu       $a1, $v0, 0xD0
    ctx->pc = 0x17e090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    // 0x17e094: 0xc0cd940  jal         func_336500
    ctx->pc = 0x17E094u;
    SET_GPR_U32(ctx, 31, 0x17E09Cu);
    ctx->pc = 0x17E098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E094u;
    // 0x17e098: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336500u, 0x17E094u, 0x17E09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E09Cu;
label_17e09c:
    // 0x17e09c: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x17E09Cu;
    SET_GPR_U32(ctx, 31, 0x17E0A4u);
    ctx->pc = 0x17E0A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E09Cu;
    // 0x17e0a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x17E09Cu, 0x17E0A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0A4u;
label_17e0a4:
    // 0x17e0a4: 0x245000c0  addiu       $s0, $v0, 0xC0
    ctx->pc = 0x17e0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x17e0a8: 0xc087408  jal         func_21D020
    ctx->pc = 0x17E0A8u;
    SET_GPR_U32(ctx, 31, 0x17E0B0u);
    ctx->pc = 0x17E0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0A8u;
    // 0x17e0ac: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x17E0A8u, 0x17E0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0B0u;
label_17e0b0:
    // 0x17e0b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x17e0b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x17e0b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x17e0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x17e0b8: 0xc136b24  jal         func_4DAC90
    ctx->pc = 0x17E0B8u;
    SET_GPR_U32(ctx, 31, 0x17E0C0u);
    ctx->pc = 0x17E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E0B8u;
    // 0x17e0bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAC90u, 0x17E0B8u, 0x17E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E0C0u;
label_17e0c0:
    // 0x17e0c0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x17e0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e0c4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17e0c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17e0c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17e0c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e0cc: 0x7ba30110  lq          $v1, 0x110($sp)
    ctx->pc = 0x17e0ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x17e0d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x17e0d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x17e0d4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x17e0d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17e0d8: 0x7fa30100  sq          $v1, 0x100($sp)
    ctx->pc = 0x17e0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 3));
    // 0x17e0dc: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x17e0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
    // 0x17e0e0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x17e0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x17e0e4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17e0e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17e0e8: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x17e0e8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x17e0ec: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x17e0ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x17e0f0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x17e0f0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x17e0f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x17e0f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x17e0f8: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x17e0f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x17e0fc: 0x4bc208a8  vadd.xyz    $vf2, $vf1, $vf2
    ctx->pc = 0x17e0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x17e100: 0x4a22033c  vmove.w     $vf2, $vf0
    ctx->pc = 0x17e100u;
    { __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], ctx->vu0_vf[0], _mm_castsi128_ps(mask)); }
    // 0x17e104: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x17e104u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x17e108: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x17e108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x17e10c: 0x7fa400a0  sq          $a0, 0xA0($sp)
    ctx->pc = 0x17e10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 4));
    // 0x17e110: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x17e110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x17e114: 0x7fa40100  sq          $a0, 0x100($sp)
    ctx->pc = 0x17e114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 4));
    // 0x17e118: 0xda6a0000  lqc2        $vf10, 0x0($s3)
    ctx->pc = 0x17e118u;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x17e11c: 0xda6b0010  lqc2        $vf11, 0x10($s3)
    ctx->pc = 0x17e11cu;
    ctx->vu0_vf[11] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x17e120: 0xda6c0020  lqc2        $vf12, 0x20($s3)
    ctx->pc = 0x17e120u;
    ctx->vu0_vf[12] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x17e124: 0xda6d0030  lqc2        $vf13, 0x30($s3)
    ctx->pc = 0x17e124u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x17e128: 0xda540000  lqc2        $vf20, 0x0($s2)
    ctx->pc = 0x17e128u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x17e12c: 0xda550010  lqc2        $vf21, 0x10($s2)
    ctx->pc = 0x17e12cu;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x17e130: 0xda560020  lqc2        $vf22, 0x20($s2)
    ctx->pc = 0x17e130u;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x17e134: 0xda570030  lqc2        $vf23, 0x30($s2)
    ctx->pc = 0x17e134u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x17e138: 0x4beaa1bc  vmulax.xyzw $ACC, $vf20, $vf10x
    ctx->pc = 0x17e138u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e13c: 0x4beaa8bd  vmadday.xyzw $ACC, $vf21, $vf10y
    ctx->pc = 0x17e13cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e140: 0x4beab0be  vmaddaz.xyzw $ACC, $vf22, $vf10z
    ctx->pc = 0x17e140u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e144: 0x4beaba8b  vmaddw.xyzw $vf10, $vf23, $vf10w
    ctx->pc = 0x17e144u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x17e148: 0x4beba1bc  vmulax.xyzw $ACC, $vf20, $vf11x
    ctx->pc = 0x17e148u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e14c: 0x4beba8bd  vmadday.xyzw $ACC, $vf21, $vf11y
    ctx->pc = 0x17e14cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e150: 0x4bebb0be  vmaddaz.xyzw $ACC, $vf22, $vf11z
    ctx->pc = 0x17e150u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e154: 0x4bebbacb  vmaddw.xyzw $vf11, $vf23, $vf11w
    ctx->pc = 0x17e154u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x17e158: 0x4beca1bc  vmulax.xyzw $ACC, $vf20, $vf12x
    ctx->pc = 0x17e158u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e15c: 0x4beca8bd  vmadday.xyzw $ACC, $vf21, $vf12y
    ctx->pc = 0x17e15cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e160: 0x4becb0be  vmaddaz.xyzw $ACC, $vf22, $vf12z
    ctx->pc = 0x17e160u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e164: 0x4becbb0b  vmaddw.xyzw $vf12, $vf23, $vf12w
    ctx->pc = 0x17e164u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x17e168: 0x4beda1bc  vmulax.xyzw $ACC, $vf20, $vf13x
    ctx->pc = 0x17e168u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e16c: 0x4beda8bd  vmadday.xyzw $ACC, $vf21, $vf13y
    ctx->pc = 0x17e16cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e170: 0x4bedb0be  vmaddaz.xyzw $ACC, $vf22, $vf13z
    ctx->pc = 0x17e170u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x17e174: 0x4bedbb4b  vmaddw.xyzw $vf13, $vf23, $vf13w
    ctx->pc = 0x17e174u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[23], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x17e178: 0xfa4a0000  sqc2        $vf10, 0x0($s2)
    ctx->pc = 0x17e178u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x17e17c: 0xfa4b0010  sqc2        $vf11, 0x10($s2)
    ctx->pc = 0x17e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x17e180: 0xfa4c0020  sqc2        $vf12, 0x20($s2)
    ctx->pc = 0x17e180u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x17e184: 0xfa4d0030  sqc2        $vf13, 0x30($s2)
    ctx->pc = 0x17e184u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x17e188: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17e188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e18c: 0xc087408  jal         func_21D020
    ctx->pc = 0x17E18Cu;
    SET_GPR_U32(ctx, 31, 0x17E194u);
    ctx->pc = 0x17E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E18Cu;
    // 0x17e190: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x17E18Cu, 0x17E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E194u;
label_17e194:
    // 0x17e194: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x17e194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e198: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17e198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e19c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17e19cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e1a0: 0xc087408  jal         func_21D020
    ctx->pc = 0x17E1A0u;
    SET_GPR_U32(ctx, 31, 0x17E1A8u);
    ctx->pc = 0x17E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1A0u;
    // 0x17e1a4: 0xe7a100c0  swc1        $f1, 0xC0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x17E1A0u, 0x17E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1A8u;
label_17e1a8:
    // 0x17e1a8: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x17e1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e1ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x17e1acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1b0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x17e1b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17e1b4: 0xc087408  jal         func_21D020
    ctx->pc = 0x17E1B4u;
    SET_GPR_U32(ctx, 31, 0x17E1BCu);
    ctx->pc = 0x17E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E1B4u;
    // 0x17e1b8: 0xe7a100e8  swc1        $f1, 0xE8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D020u, 0x17E1B4u, 0x17E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E1BCu;
label_17e1bc:
    // 0x17e1bc: 0x92c30644  lbu         $v1, 0x644($s6)
    ctx->pc = 0x17e1bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1604)));
    // 0x17e1c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e1c4: 0x92c60645  lbu         $a2, 0x645($s6)
    ctx->pc = 0x17e1c4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1605)));
    // 0x17e1c8: 0x92c40646  lbu         $a0, 0x646($s6)
    ctx->pc = 0x17e1c8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1606)));
    // 0x17e1cc: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x17e1ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x17e1d0: 0x0  nop
    ctx->pc = 0x17e1d0u;
    // NOP
    // 0x17e1d4: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x17e1d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x17e1d8: 0x92c20647  lbu         $v0, 0x647($s6)
    ctx->pc = 0x17e1d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 1607)));
    // 0x17e1dc: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x17e1dcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x17e1e0: 0x0  nop
    ctx->pc = 0x17e1e0u;
    // NOP
    // 0x17e1e4: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x17e1e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x17e1e8: 0xc7a200d4  lwc1        $f2, 0xD4($sp)
    ctx->pc = 0x17e1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e1ec: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x17e1ecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x17e1f0: 0x0  nop
    ctx->pc = 0x17e1f0u;
    // NOP
    // 0x17e1f4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x17e1f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x17e1f8: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x17e1f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x17e1fc: 0x0  nop
    ctx->pc = 0x17e1fcu;
    // NOP
    // 0x17e200: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x17e200u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x17e204: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x17e204u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x17e208: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x17e208u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x17e20c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x17e20cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x17e210: 0x8fa70120  lw          $a3, 0x120($sp)
    ctx->pc = 0x17e210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17e214: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x17e214u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x17e218: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x17e218u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x17e21c: 0x8ce40084  lw          $a0, 0x84($a3)
    ctx->pc = 0x17e21cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 132)));
    // 0x17e220: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x17e220u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x17e224: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x17e224u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x17e228: 0xe7a200d4  swc1        $f2, 0xD4($sp)
    ctx->pc = 0x17e228u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x17e22c: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x17e22cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x17e230: 0x6ba200f7  ldl         $v0, 0xF7($sp)
    ctx->pc = 0x17e230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x17e234: 0x6fa200f0  ldr         $v0, 0xF0($sp)
    ctx->pc = 0x17e234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x17e238: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x17e238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x17e23c: 0xb3a2002b  sdl         $v0, 0x2B($sp)
    ctx->pc = 0x17e23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e240: 0xb7a20024  sdr         $v0, 0x24($sp)
    ctx->pc = 0x17e240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17e244: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x17e244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x17e248: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x17e248u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17e24c: 0xe7a30044  swc1        $f3, 0x44($sp)
    ctx->pc = 0x17e24cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x17e250: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x17e250u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x17e254: 0xc05f210  jal         func_17C840
    ctx->pc = 0x17E254u;
    SET_GPR_U32(ctx, 31, 0x17E25Cu);
    ctx->pc = 0x17E258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17E254u;
    // 0x17e258: 0xe7a6004c  swc1        $f6, 0x4C($sp) (Delay Slot)
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x17E254u, 0x17E25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17E25Cu;
label_17e25c:
    // 0x17e25c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x17e25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x17e260: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x17e260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x17e264: 0x24845300  addiu       $a0, $a0, 0x5300
    ctx->pc = 0x17e264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21248));
    // 0x17e268: 0x3c050071  lui         $a1, 0x71
    ctx->pc = 0x17e268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)113 << 16));
    // 0x17e26c: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x17e26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x17e270: 0x24a55300  addiu       $a1, $a1, 0x5300
    ctx->pc = 0x17e270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21248));
    // 0x17e274: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x17e274u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x715320u));
    // 0x17e278: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x17e278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e27c: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x17e27cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17e280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17e280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17e284: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17e284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17e288: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x17e288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x17e28c: 0xacb50020  sw          $s5, 0x20($a1)
    ctx->pc = 0x17e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 21));
label_17e290:
    // 0x17e290: 0x8fa70124  lw          $a3, 0x124($sp)
    ctx->pc = 0x17e290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_17e294:
    // 0x17e294: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x17e294u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x17e298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17E298u;
    {
        const bool branch_taken_0x17e298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E298u;
        // 0x17e29c: 0x8fa20128  lw          $v0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e298) {
            ctx->pc = 0x17E2A8u;
            goto label_17e2a8;
        }
    }
    ctx->pc = 0x17E2A0u;
label_17e2a0:
    // 0x17e2a0: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x17E2A0u;
    {
        const bool branch_taken_0x17e2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2A0u;
        // 0x17e2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2a0) {
            ctx->pc = 0x17E45Cu;
            goto label_17e45c;
        }
    }
    ctx->pc = 0x17E2A8u;
label_17e2a8:
    // 0x17e2a8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x17e2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17e2ac: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x17e2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17e2b0: 0x10820066  beq         $a0, $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x17E2B0u;
    {
        const bool branch_taken_0x17e2b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x17E2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E2B0u;
        // 0x17e2b4: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e2b0) {
            ctx->pc = 0x17E44Cu;
            goto label_17e44c;
        }
    }
    ctx->pc = 0x17E2B8u;
    // 0x17e2b8: 0x3c030071  lui         $v1, 0x71
    ctx->pc = 0x17e2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)113 << 16));
    // 0x17e2bc: 0xc44622ec  lwc1        $f6, 0x22EC($v0)
    ctx->pc = 0x17e2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8940)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x17e2c0: 0x246b5300  addiu       $t3, $v1, 0x5300
    ctx->pc = 0x17e2c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 21248));
    // 0x17e2c4: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x17e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x17e2c8: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x17e2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
    // 0x17e2cc: 0x460031c6  mov.s       $f7, $f6
    ctx->pc = 0x17e2ccu;
    ctx->f[7] = FPU_MOV_S(ctx->f[6]);
    // 0x17e2d0: 0x5d4821  addu        $t1, $v0, $sp
    ctx->pc = 0x17e2d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x17e2d4: 0x4b4021  addu        $t0, $v0, $t3
    ctx->pc = 0x17e2d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x17e2d8: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x17e2d8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x17e2dc: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x17e2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e2e0:
    // 0x17e2e0: 0xc4a50014  lwc1        $f5, 0x14($a1)
    ctx->pc = 0x17e2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x17e2e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x17e2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17e2e8: 0xc4430040  lwc1        $f3, 0x40($v0)
    ctx->pc = 0x17e2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17e2ec: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x17e2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e2f0: 0xc7c10004  lwc1        $f1, 0x4($fp)
    ctx->pc = 0x17e2f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e2f4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x17e2f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x17e2f8: 0xc7c40008  lwc1        $f4, 0x8($fp)
    ctx->pc = 0x17e2f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17e2fc: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x17e2fcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x17e300: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x17e300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17e304: 0xc4420044  lwc1        $f2, 0x44($v0)
    ctx->pc = 0x17e304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17e308: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x17e308u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x17e30c: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x17e30cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x17e310: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x17e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x17e314: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x17e314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e318: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x17e318u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x17e31c: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x17e31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x17e320: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x17e320u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x17e324: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x17e324u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x17e328: 0xc7c1000c  lwc1        $f1, 0xC($fp)
    ctx->pc = 0x17e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x17e32c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x17e32cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x17e330: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x17e330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x17e334: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x17e334u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x17e338: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x17e338u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x17e33c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x17e33cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x17e340: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x17e340u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x17e344: 0x46034034  c.lt.s      $f8, $f3
    ctx->pc = 0x17e344u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[8], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e348: 0x0  nop
    ctx->pc = 0x17e348u;
    // NOP
    // 0x17e34c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17E34Cu;
    {
        const bool branch_taken_0x17e34c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E34Cu;
        // 0x17e350: 0x8fa30124  lw          $v1, 0x124($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e34c) {
            ctx->pc = 0x17E360u;
            goto label_17e360;
        }
    }
    ctx->pc = 0x17E354u;
    // 0x17e354: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17E354u;
    {
        const bool branch_taken_0x17e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E354u;
        // 0x17e358: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e354) {
            ctx->pc = 0x17E43Cu;
            goto label_17e43c;
        }
    }
    ctx->pc = 0x17E35Cu;
    // 0x17e35c: 0x0  nop
    ctx->pc = 0x17e35cu;
    // NOP
label_17e360:
    // 0x17e360: 0x2a3102b  sltu        $v0, $s5, $v1
    ctx->pc = 0x17e360u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17e364: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x17E364u;
    {
        const bool branch_taken_0x17e364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17e364) {
            ctx->pc = 0x17E368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E364u;
            // 0x17e368: 0xe5230000  swc1        $f3, 0x0($t1) (Delay Slot)
            { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E424u;
            goto label_17e424;
        }
    }
    ctx->pc = 0x17E36Cu;
    // 0x17e36c: 0x4606a032  c.eq.s      $f20, $f6
    ctx->pc = 0x17e36cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e370: 0x0  nop
    ctx->pc = 0x17e370u;
    // NOP
    // 0x17e374: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x17E374u;
    {
        const bool branch_taken_0x17e374 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E374u;
        // 0x17e378: 0x24870004  addiu       $a3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e374) {
            ctx->pc = 0x17E3BCu;
            goto label_17e3bc;
        }
    }
    ctx->pc = 0x17E37Cu;
    // 0x17e37c: 0xd5102b  sltu        $v0, $a2, $s5
    ctx->pc = 0x17e37cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x17e380: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x17E380u;
    {
        const bool branch_taken_0x17e380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E380u;
        // 0x17e384: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e380) {
            ctx->pc = 0x17E3BCu;
            goto label_17e3bc;
        }
    }
    ctx->pc = 0x17E388u;
    // 0x17e388: 0x15d1821  addu        $v1, $t2, $sp
    ctx->pc = 0x17e388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
    // 0x17e38c: 0x0  nop
    ctx->pc = 0x17e38cu;
    // NOP
label_17e390:
    // 0x17e390: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x17e390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e394: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17e394u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e398: 0x0  nop
    ctx->pc = 0x17e398u;
    // NOP
    // 0x17e39c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x17E39Cu;
    {
        const bool branch_taken_0x17e39c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e39c) {
            ctx->pc = 0x17E3A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E39Cu;
            // 0x17e3a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E3B0u;
            goto label_17e3b0;
        }
    }
    ctx->pc = 0x17E3A4u;
    // 0x17e3a4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17e3a4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17e3a8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x17e3a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3ac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17e3acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17e3b0:
    // 0x17e3b0: 0x95102b  sltu        $v0, $a0, $s5
    ctx->pc = 0x17e3b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x17e3b4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E3B4u;
    {
        const bool branch_taken_0x17e3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3B4u;
        // 0x17e3b8: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3b4) {
            ctx->pc = 0x17E390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e390;
        }
    }
    ctx->pc = 0x17E3BCu;
label_17e3bc:
    // 0x17e3bc: 0x46141834  c.lt.s      $f3, $f20
    ctx->pc = 0x17e3bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e3c0: 0x0  nop
    ctx->pc = 0x17e3c0u;
    // NOP
    // 0x17e3c4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x17E3C4u;
    {
        const bool branch_taken_0x17e3c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3C4u;
        // 0x17e3c8: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3c4) {
            ctx->pc = 0x17E3DCu;
            goto label_17e3dc;
        }
    }
    ctx->pc = 0x17E3CCu;
    // 0x17e3cc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x17e3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x17e3d0: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x17e3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x17e3d4: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x17e3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x17e3d8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x17e3d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_17e3dc:
    // 0x17e3dc: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x17e3dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3e0: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x17e3e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x17e3e4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17E3E4u;
    {
        const bool branch_taken_0x17e3e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E3E4u;
        // 0x17e3e8: 0x46003d06  mov.s       $f20, $f7 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3e4) {
            ctx->pc = 0x17E438u;
            goto label_17e438;
        }
    }
    ctx->pc = 0x17E3ECu;
    // 0x17e3ec: 0x15d2021  addu        $a0, $t2, $sp
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 29)));
label_17e3f0:
    // 0x17e3f0: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17e3f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17e3f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x17e3f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17e3f8: 0x0  nop
    ctx->pc = 0x17e3f8u;
    // NOP
    // 0x17e3fc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x17E3FCu;
    {
        const bool branch_taken_0x17e3fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e3fc) {
            ctx->pc = 0x17E400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E3FCu;
            // 0x17e400: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E410u;
            goto label_17e410;
        }
    }
    ctx->pc = 0x17E404u;
    // 0x17e404: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x17e404u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x17e408: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x17e408u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e40c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x17e40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_17e410:
    // 0x17e410: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x17e410u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x17e414: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E414u;
    {
        const bool branch_taken_0x17e414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E414u;
        // 0x17e418: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e414) {
            ctx->pc = 0x17E3F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e3f0;
        }
    }
    ctx->pc = 0x17E41Cu;
    // 0x17e41c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17E41Cu;
    {
        const bool branch_taken_0x17e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E41Cu;
        // 0x17e420: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e41c) {
            ctx->pc = 0x17E43Cu;
            goto label_17e43c;
        }
    }
    ctx->pc = 0x17E424u;
label_17e424:
    // 0x17e424: 0x24870004  addiu       $a3, $a0, 0x4
    ctx->pc = 0x17e424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x17e428: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x17e428u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
    // 0x17e42c: 0x25290004  addiu       $t1, $t1, 0x4
    ctx->pc = 0x17e42cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
    // 0x17e430: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x17e430u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x17e434: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x17e434u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_17e438:
    // 0x17e438: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x17e438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_17e43c:
    // 0x17e43c: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x17e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x17e440: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x17e444: 0x5482ffa6  bnel        $a0, $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x17E444u;
    {
        const bool branch_taken_0x17e444 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x17e444) {
            ctx->pc = 0x17E448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17E444u;
            // 0x17e448: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17E2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17e2e0;
        }
    }
    ctx->pc = 0x17E44Cu;
label_17e44c:
    // 0x17e44c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x17e44cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x17e450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e454: 0x24c35300  addiu       $v1, $a2, 0x5300
    ctx->pc = 0x17e454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 21248));
    // 0x17e458: 0xac750020  sw          $s5, 0x20($v1)
    ctx->pc = 0x17e458u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 21)); ps2TraceGuestWrite(rdram, 0x715320u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x715320u, _value); } while (0);
label_17e45c:
    // 0x17e45c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x17e45cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x17e460: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x17e460u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x17e464: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x17e464u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x17e468: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x17e468u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x17e46c: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x17e46cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x17e470: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x17e470u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x17e474: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x17e474u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x17e478: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x17e478u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x17e47c: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x17e47cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x17e480: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x17e480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x17e484: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x17e484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17e488: 0x3e00008  jr          $ra
    ctx->pc = 0x17E488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E488u;
        // 0x17e48c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E490u;
}
