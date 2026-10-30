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

// Function: sub_00203110
// Address: 0x203110 - 0x203220
void sub_00203110_0x203110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00203110_0x203110");
#endif

    switch (ctx->pc) {
        case 0x203110u: goto label_203110;
        case 0x203114u: goto label_203114;
        case 0x203118u: goto label_203118;
        case 0x20311cu: goto label_20311c;
        case 0x203120u: goto label_203120;
        case 0x203124u: goto label_203124;
        case 0x203128u: goto label_203128;
        case 0x20312cu: goto label_20312c;
        case 0x203130u: goto label_203130;
        case 0x203134u: goto label_203134;
        case 0x203138u: goto label_203138;
        case 0x20313cu: goto label_20313c;
        case 0x203140u: goto label_203140;
        case 0x203144u: goto label_203144;
        case 0x203148u: goto label_203148;
        case 0x20314cu: goto label_20314c;
        case 0x203150u: goto label_203150;
        case 0x203154u: goto label_203154;
        case 0x203158u: goto label_203158;
        case 0x20315cu: goto label_20315c;
        case 0x203160u: goto label_203160;
        case 0x203164u: goto label_203164;
        case 0x203168u: goto label_203168;
        case 0x20316cu: goto label_20316c;
        case 0x203170u: goto label_203170;
        case 0x203174u: goto label_203174;
        case 0x203178u: goto label_203178;
        case 0x20317cu: goto label_20317c;
        case 0x203180u: goto label_203180;
        case 0x203184u: goto label_203184;
        case 0x203188u: goto label_203188;
        case 0x20318cu: goto label_20318c;
        case 0x203190u: goto label_203190;
        case 0x203194u: goto label_203194;
        case 0x203198u: goto label_203198;
        case 0x20319cu: goto label_20319c;
        case 0x2031a0u: goto label_2031a0;
        case 0x2031a4u: goto label_2031a4;
        case 0x2031a8u: goto label_2031a8;
        case 0x2031acu: goto label_2031ac;
        case 0x2031b0u: goto label_2031b0;
        case 0x2031b4u: goto label_2031b4;
        case 0x2031b8u: goto label_2031b8;
        case 0x2031bcu: goto label_2031bc;
        case 0x2031c0u: goto label_2031c0;
        case 0x2031c4u: goto label_2031c4;
        case 0x2031c8u: goto label_2031c8;
        case 0x2031ccu: goto label_2031cc;
        case 0x2031d0u: goto label_2031d0;
        case 0x2031d4u: goto label_2031d4;
        case 0x2031d8u: goto label_2031d8;
        case 0x2031dcu: goto label_2031dc;
        case 0x2031e0u: goto label_2031e0;
        case 0x2031e4u: goto label_2031e4;
        case 0x2031e8u: goto label_2031e8;
        case 0x2031ecu: goto label_2031ec;
        case 0x2031f0u: goto label_2031f0;
        case 0x2031f4u: goto label_2031f4;
        case 0x2031f8u: goto label_2031f8;
        case 0x2031fcu: goto label_2031fc;
        case 0x203200u: goto label_203200;
        case 0x203204u: goto label_203204;
        case 0x203208u: goto label_203208;
        case 0x20320cu: goto label_20320c;
        case 0x203210u: goto label_203210;
        case 0x203214u: goto label_203214;
        case 0x203218u: goto label_203218;
        case 0x20321cu: goto label_20321c;
        default: break;
    }

    ctx->pc = 0x203110u;

label_203110:
    // 0x203110: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x203110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_203114:
    // 0x203114: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x203114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_203118:
    // 0x203118: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x203118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20311c:
    // 0x20311c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_203120:
    // 0x203120: 0xc06a38c  jal         func_1A8E30
label_203124:
    if (ctx->pc == 0x203124u) {
        ctx->pc = 0x203124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203120u;
        // 0x203124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203128u;
        goto label_203128;
    }
    ctx->pc = 0x203120u;
    SET_GPR_U32(ctx, 31, 0x203128u);
    ctx->pc = 0x203124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x203120u;
    // 0x203124: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x203120u, 0x203128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x203128u;
label_203128:
    // 0x203128: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x203128u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20312c:
    // 0x20312c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20312cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_203130:
    // 0x203130: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_203134:
    // 0x203134: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_203138:
    // 0x203138: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x203138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20313c:
    // 0x20313c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20313cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_203140:
    // 0x203140: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x203140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_203144:
    // 0x203144: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x203144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_203148:
    // 0x203148: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x203148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20314c:
    // 0x20314c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20314cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_203150:
    // 0x203150: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x203150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_203154:
    // 0x203154: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x203154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_203158:
    // 0x203158: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x203158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20315c:
    // 0x20315c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20315cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_203160:
    // 0x203160: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_203164:
    // 0x203164: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x203164u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_203168:
    // 0x203168: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x203168u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20316c:
    // 0x20316c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20316cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_203170:
    // 0x203170: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x203170u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_203174:
    // 0x203174: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x203174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_203178:
    // 0x203178: 0x24a58438  addiu       $a1, $a1, -0x7BC8
    ctx->pc = 0x203178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935608));
label_20317c:
    // 0x20317c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20317cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_203180:
    // 0x203180: 0x25088440  addiu       $t0, $t0, -0x7BC0
    ctx->pc = 0x203180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935616));
label_203184:
    // 0x203184: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x203184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_203188:
    // 0x203188: 0x254a8468  addiu       $t2, $t2, -0x7B98
    ctx->pc = 0x203188u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294935656));
label_20318c:
    // 0x20318c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20318cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_203190:
    // 0x203190: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_203194:
    // 0x203194: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x203194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_203198:
    // 0x203198: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x203198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20319c:
    // 0x20319c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20319cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2031a0:
    // 0x2031a0: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x2031a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_2031a4:
    // 0x2031a4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2031a8:
    // 0x2031a8: 0x40f809  jalr        $v0
label_2031ac:
    if (ctx->pc == 0x2031ACu) {
        ctx->pc = 0x2031ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031A8u;
        // 0x2031ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2031B0u;
        goto label_2031b0;
    }
    ctx->pc = 0x2031A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2031B0u);
        ctx->pc = 0x2031ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2031A8u;
        // 0x2031ac: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2031A8u, 0x2031B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2031B0u;
label_2031b0:
    // 0x2031b0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x2031b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_2031b4:
    // 0x2031b4: 0x3c080054  lui         $t0, 0x54
    ctx->pc = 0x2031b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)84 << 16));
label_2031b8:
    // 0x2031b8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x2031b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_2031bc:
    // 0x2031bc: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_2031c0:
    // 0x2031c0: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x2031c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_2031c4:
    // 0x2031c4: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x2031c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_2031c8:
    // 0x2031c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2031c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2031cc:
    // 0x2031cc: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2031ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_2031d0:
    // 0x2031d0: 0x2508d9c0  addiu       $t0, $t0, -0x2640
    ctx->pc = 0x2031d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294957504));
label_2031d4:
    // 0x2031d4: 0x24e7d9e8  addiu       $a3, $a3, -0x2618
    ctx->pc = 0x2031d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294957544));
label_2031d8:
    // 0x2031d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2031d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2031dc:
    // 0x2031dc: 0x24a5da18  addiu       $a1, $a1, -0x25E8
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957592));
label_2031e0:
    // 0x2031e0: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2031e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_2031e4:
    // 0x2031e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2031e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2031e8:
    // 0x2031e8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2031e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2031ec:
    // 0x2031ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2031ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2031f0:
    // 0x2031f0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2031f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2031f4:
    // 0x2031f4: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x2031f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_2031f8:
    // 0x2031f8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2031f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2031fc:
    // 0x2031fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2031fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_203200:
    // 0x203200: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x203200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_203204:
    // 0x203204: 0xae08006c  sw          $t0, 0x6C($s0)
    ctx->pc = 0x203204u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 8));
label_203208:
    // 0x203208: 0xae070088  sw          $a3, 0x88($s0)
    ctx->pc = 0x203208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 7));
label_20320c:
    // 0x20320c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20320cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_203210:
    // 0x203210: 0xae0600a0  sw          $a2, 0xA0($s0)
    ctx->pc = 0x203210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 6));
label_203214:
    // 0x203214: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x203214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_203218:
    // 0x203218: 0x3e00008  jr          $ra
label_20321c:
    if (ctx->pc == 0x20321Cu) {
        ctx->pc = 0x20321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203218u;
        // 0x20321c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x203220u;
        goto label_fallthrough_0x203218;
    }
    ctx->pc = 0x203218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20321Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x203218u;
        // 0x20321c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x203218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x203218:
    ctx->pc = 0x203220u;
}
