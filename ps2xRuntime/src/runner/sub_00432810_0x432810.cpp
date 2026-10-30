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

// Function: sub_00432810
// Address: 0x432810 - 0x432888
void sub_00432810_0x432810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432810_0x432810");
#endif

    switch (ctx->pc) {
        case 0x43287cu: goto label_43287c;
        default: break;
    }

    ctx->pc = 0x432810u;

    // 0x432810: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x432810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x432814: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x432814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x432818: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x432818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x43281c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x43281cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432820: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x432820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432824: 0x8c4c69ec  lw          $t4, 0x69EC($v0)
    ctx->pc = 0x432824u;
    SET_GPR_S32(ctx, 12, (int32_t)FAST_READ32(0x5169ECu));
    // 0x432828: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x432828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43282c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x43282cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x432830: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x432830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x432834: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x432834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432838: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x432838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x43283c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x43283cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x432840: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x432840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x432844: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x432844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
    // 0x432848: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x432848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x43284c: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x43284cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x432850: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x432850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x432854: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x432854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x432858: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x432858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x43285c: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x43285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x432860: 0xe7ac00b8  swc1        $f12, 0xB8($sp)
    ctx->pc = 0x432860u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x432864: 0xe7ae00bc  swc1        $f14, 0xBC($sp)
    ctx->pc = 0x432864u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x432868: 0xe7b000c0  swc1        $f16, 0xC0($sp)
    ctx->pc = 0x432868u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x43286c: 0xe7b200c4  swc1        $f18, 0xC4($sp)
    ctx->pc = 0x43286cu;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x432870: 0xa7a2000c  sh          $v0, 0xC($sp)
    ctx->pc = 0x432870u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x432874: 0xc10d9c4  jal         func_436710
    ctx->pc = 0x432874u;
    SET_GPR_U32(ctx, 31, 0x43287Cu);
    ctx->pc = 0x432878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x432874u;
    // 0x432878: 0xafac0054  sw          $t4, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x436710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x436710u, 0x432874u, 0x43287Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43287Cu;
label_43287c:
    // 0x43287c: 0x202802b  sltu        $s0, $s0, $v0
    ctx->pc = 0x43287cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x432880: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x432880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x432884: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x432884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x432888u;
}
