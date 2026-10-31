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

// Function: sub_001204F0
// Address: 0x1204f0 - 0x1205c0
void sub_001204F0_0x1204f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001204F0_0x1204f0");
#endif

    switch (ctx->pc) {
        case 0x120504u: goto label_120504;
        case 0x12054cu: goto label_12054c;
        case 0x120570u: goto label_120570;
        default: break;
    }

    ctx->pc = 0x1204f0u;

    // 0x1204f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1204f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1204f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1204f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1204f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1204f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1204fc: 0xc04821a  jal         func_120868
    ctx->pc = 0x1204FCu;
    SET_GPR_U32(ctx, 31, 0x120504u);
    ctx->pc = 0x120500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1204FCu;
    // 0x120500: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120868u, 0x1204FCu, 0x120504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120504u;
label_120504:
    // 0x120504: 0x3c0140a3  lui         $at, 0x40A3
    ctx->pc = 0x120504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16547 << 16));
    // 0x120508: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x120508u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12050c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12050cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120510: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x120510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x120514: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x120514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
    // 0x120518: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x120518u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x12051c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12051cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120520: 0x24425250  addiu       $v0, $v0, 0x5250
    ctx->pc = 0x120520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21072));
    // 0x120524: 0xae0001e0  sw          $zero, 0x1E0($s0)
    ctx->pc = 0x120524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 0));
    // 0x120528: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x120528u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
    // 0x12052c: 0xa200003f  sb          $zero, 0x3F($s0)
    ctx->pc = 0x12052cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 63), (uint8_t)GPR_U32(ctx, 0));
    // 0x120530: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x120530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x120534: 0xe6010210  swc1        $f1, 0x210($s0)
    ctx->pc = 0x120534u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x120538: 0x24a58750  addiu       $a1, $a1, -0x78B0
    ctx->pc = 0x120538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936400));
    // 0x12053c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x12053cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x120540: 0xe6000214  swc1        $f0, 0x214($s0)
    ctx->pc = 0x120540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x120544: 0xc10c4de  jal         func_431378
    ctx->pc = 0x120544u;
    SET_GPR_U32(ctx, 31, 0x12054Cu);
    ctx->pc = 0x120548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120544u;
    // 0x120548: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x120544u, 0x12054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12054Cu;
label_12054c:
    // 0x12054c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x12054cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x120550: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x120550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
    // 0x120554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120558: 0x24631790  addiu       $v1, $v1, 0x1790
    ctx->pc = 0x120558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6032));
    // 0x12055c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12055cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120560: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x120560u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x511790u));
    // 0x120564: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x120564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x120568: 0xc0482a6  jal         func_120A98
    ctx->pc = 0x120568u;
    SET_GPR_U32(ctx, 31, 0x120570u);
    ctx->pc = 0x12056Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x120568u;
    // 0x12056c: 0x7e020200  sq          $v0, 0x200($s0) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 16), 512), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120A98u, 0x120568u, 0x120570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120570u;
label_120570:
    // 0x120570: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x120570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x120574: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x120574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x120578: 0x26030220  addiu       $v1, $s0, 0x220
    ctx->pc = 0x120578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x12057c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12057cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x120580: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x120580u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x120584: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x120584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120588: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x120588u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x12058c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12058cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x120590: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x120590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x120594: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x120594u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x120598: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x120598u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12059c: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x12059cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1205a0: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x1205a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1205a4: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1205a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1205a8: 0xe6010050  swc1        $f1, 0x50($s0)
    ctx->pc = 0x1205a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x1205ac: 0xe6020054  swc1        $f2, 0x54($s0)
    ctx->pc = 0x1205acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x1205b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1205b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1205b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1205b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1205b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1205B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1205BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205B8u;
        // 0x1205bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1205B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1205C0u;
}
