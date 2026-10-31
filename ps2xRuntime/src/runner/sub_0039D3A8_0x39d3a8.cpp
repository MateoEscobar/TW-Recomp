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

// Function: sub_0039D3A8
// Address: 0x39d3a8 - 0x39d618
void sub_0039D3A8_0x39d3a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039D3A8_0x39d3a8");
#endif

    switch (ctx->pc) {
        case 0x39d3a8u: goto label_39d3a8;
        case 0x39d3acu: goto label_39d3ac;
        case 0x39d3b0u: goto label_39d3b0;
        case 0x39d3b4u: goto label_39d3b4;
        case 0x39d3b8u: goto label_39d3b8;
        case 0x39d3bcu: goto label_39d3bc;
        case 0x39d3c0u: goto label_39d3c0;
        case 0x39d3c4u: goto label_39d3c4;
        case 0x39d3c8u: goto label_39d3c8;
        case 0x39d3ccu: goto label_39d3cc;
        case 0x39d3d0u: goto label_39d3d0;
        case 0x39d3d4u: goto label_39d3d4;
        case 0x39d3d8u: goto label_39d3d8;
        case 0x39d3dcu: goto label_39d3dc;
        case 0x39d3e0u: goto label_39d3e0;
        case 0x39d3e4u: goto label_39d3e4;
        case 0x39d3e8u: goto label_39d3e8;
        case 0x39d3ecu: goto label_39d3ec;
        case 0x39d3f0u: goto label_39d3f0;
        case 0x39d3f4u: goto label_39d3f4;
        case 0x39d3f8u: goto label_39d3f8;
        case 0x39d3fcu: goto label_39d3fc;
        case 0x39d400u: goto label_39d400;
        case 0x39d404u: goto label_39d404;
        case 0x39d408u: goto label_39d408;
        case 0x39d40cu: goto label_39d40c;
        case 0x39d410u: goto label_39d410;
        case 0x39d414u: goto label_39d414;
        case 0x39d418u: goto label_39d418;
        case 0x39d41cu: goto label_39d41c;
        case 0x39d420u: goto label_39d420;
        case 0x39d424u: goto label_39d424;
        case 0x39d428u: goto label_39d428;
        case 0x39d42cu: goto label_39d42c;
        case 0x39d430u: goto label_39d430;
        case 0x39d434u: goto label_39d434;
        case 0x39d438u: goto label_39d438;
        case 0x39d43cu: goto label_39d43c;
        case 0x39d440u: goto label_39d440;
        case 0x39d444u: goto label_39d444;
        case 0x39d448u: goto label_39d448;
        case 0x39d44cu: goto label_39d44c;
        case 0x39d450u: goto label_39d450;
        case 0x39d454u: goto label_39d454;
        case 0x39d458u: goto label_39d458;
        case 0x39d45cu: goto label_39d45c;
        case 0x39d460u: goto label_39d460;
        case 0x39d464u: goto label_39d464;
        case 0x39d468u: goto label_39d468;
        case 0x39d46cu: goto label_39d46c;
        case 0x39d470u: goto label_39d470;
        case 0x39d474u: goto label_39d474;
        case 0x39d478u: goto label_39d478;
        case 0x39d47cu: goto label_39d47c;
        case 0x39d480u: goto label_39d480;
        case 0x39d484u: goto label_39d484;
        case 0x39d488u: goto label_39d488;
        case 0x39d48cu: goto label_39d48c;
        case 0x39d490u: goto label_39d490;
        case 0x39d494u: goto label_39d494;
        case 0x39d498u: goto label_39d498;
        case 0x39d49cu: goto label_39d49c;
        case 0x39d4a0u: goto label_39d4a0;
        case 0x39d4a4u: goto label_39d4a4;
        case 0x39d4a8u: goto label_39d4a8;
        case 0x39d4acu: goto label_39d4ac;
        case 0x39d4b0u: goto label_39d4b0;
        case 0x39d4b4u: goto label_39d4b4;
        case 0x39d4b8u: goto label_39d4b8;
        case 0x39d4bcu: goto label_39d4bc;
        case 0x39d4c0u: goto label_39d4c0;
        case 0x39d4c4u: goto label_39d4c4;
        case 0x39d4c8u: goto label_39d4c8;
        case 0x39d4ccu: goto label_39d4cc;
        case 0x39d4d0u: goto label_39d4d0;
        case 0x39d4d4u: goto label_39d4d4;
        case 0x39d4d8u: goto label_39d4d8;
        case 0x39d4dcu: goto label_39d4dc;
        case 0x39d4e0u: goto label_39d4e0;
        case 0x39d4e4u: goto label_39d4e4;
        case 0x39d4e8u: goto label_39d4e8;
        case 0x39d4ecu: goto label_39d4ec;
        case 0x39d4f0u: goto label_39d4f0;
        case 0x39d4f4u: goto label_39d4f4;
        case 0x39d4f8u: goto label_39d4f8;
        case 0x39d4fcu: goto label_39d4fc;
        case 0x39d500u: goto label_39d500;
        case 0x39d504u: goto label_39d504;
        case 0x39d508u: goto label_39d508;
        case 0x39d50cu: goto label_39d50c;
        case 0x39d510u: goto label_39d510;
        case 0x39d514u: goto label_39d514;
        case 0x39d518u: goto label_39d518;
        case 0x39d51cu: goto label_39d51c;
        case 0x39d520u: goto label_39d520;
        case 0x39d524u: goto label_39d524;
        case 0x39d528u: goto label_39d528;
        case 0x39d52cu: goto label_39d52c;
        case 0x39d530u: goto label_39d530;
        case 0x39d534u: goto label_39d534;
        case 0x39d538u: goto label_39d538;
        case 0x39d53cu: goto label_39d53c;
        case 0x39d540u: goto label_39d540;
        case 0x39d544u: goto label_39d544;
        case 0x39d548u: goto label_39d548;
        case 0x39d54cu: goto label_39d54c;
        case 0x39d550u: goto label_39d550;
        case 0x39d554u: goto label_39d554;
        case 0x39d558u: goto label_39d558;
        case 0x39d55cu: goto label_39d55c;
        case 0x39d560u: goto label_39d560;
        case 0x39d564u: goto label_39d564;
        case 0x39d568u: goto label_39d568;
        case 0x39d56cu: goto label_39d56c;
        case 0x39d570u: goto label_39d570;
        case 0x39d574u: goto label_39d574;
        case 0x39d578u: goto label_39d578;
        case 0x39d57cu: goto label_39d57c;
        case 0x39d580u: goto label_39d580;
        case 0x39d584u: goto label_39d584;
        case 0x39d588u: goto label_39d588;
        case 0x39d58cu: goto label_39d58c;
        case 0x39d590u: goto label_39d590;
        case 0x39d594u: goto label_39d594;
        case 0x39d598u: goto label_39d598;
        case 0x39d59cu: goto label_39d59c;
        case 0x39d5a0u: goto label_39d5a0;
        case 0x39d5a4u: goto label_39d5a4;
        case 0x39d5a8u: goto label_39d5a8;
        case 0x39d5acu: goto label_39d5ac;
        case 0x39d5b0u: goto label_39d5b0;
        case 0x39d5b4u: goto label_39d5b4;
        case 0x39d5b8u: goto label_39d5b8;
        case 0x39d5bcu: goto label_39d5bc;
        case 0x39d5c0u: goto label_39d5c0;
        case 0x39d5c4u: goto label_39d5c4;
        case 0x39d5c8u: goto label_39d5c8;
        case 0x39d5ccu: goto label_39d5cc;
        case 0x39d5d0u: goto label_39d5d0;
        case 0x39d5d4u: goto label_39d5d4;
        case 0x39d5d8u: goto label_39d5d8;
        case 0x39d5dcu: goto label_39d5dc;
        case 0x39d5e0u: goto label_39d5e0;
        case 0x39d5e4u: goto label_39d5e4;
        case 0x39d5e8u: goto label_39d5e8;
        case 0x39d5ecu: goto label_39d5ec;
        case 0x39d5f0u: goto label_39d5f0;
        case 0x39d5f4u: goto label_39d5f4;
        case 0x39d5f8u: goto label_39d5f8;
        case 0x39d5fcu: goto label_39d5fc;
        case 0x39d600u: goto label_39d600;
        case 0x39d604u: goto label_39d604;
        case 0x39d608u: goto label_39d608;
        case 0x39d60cu: goto label_39d60c;
        case 0x39d610u: goto label_39d610;
        case 0x39d614u: goto label_39d614;
        default: break;
    }

    ctx->pc = 0x39d3a8u;

label_39d3a8:
    // 0x39d3a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x39d3a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_39d3ac:
    // 0x39d3ac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x39d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_39d3b0:
    // 0x39d3b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x39d3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_39d3b4:
    // 0x39d3b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x39d3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39d3b8:
    // 0x39d3b8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x39d3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_39d3bc:
    // 0x39d3bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39d3bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_39d3c0:
    // 0x39d3c0: 0xae0500a4  sw          $a1, 0xA4($s0)
    ctx->pc = 0x39d3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 5));
label_39d3c4:
    // 0x39d3c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x39d3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_39d3c8:
    // 0x39d3c8: 0xae0300a0  sw          $v1, 0xA0($s0)
    ctx->pc = 0x39d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
label_39d3cc:
    // 0x39d3cc: 0xa460001e  sh          $zero, 0x1E($v1)
    ctx->pc = 0x39d3ccu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 30), (uint16_t)GPR_U32(ctx, 0));
label_39d3d0:
    // 0x39d3d0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x39d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d3d4:
    // 0x39d3d4: 0x90430022  lbu         $v1, 0x22($v0)
    ctx->pc = 0x39d3d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 34)));
label_39d3d8:
    // 0x39d3d8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_39d3dc:
    if (ctx->pc == 0x39D3DCu) {
        ctx->pc = 0x39D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3D8u;
        // 0x39d3dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D3E0u;
        goto label_39d3e0;
    }
    ctx->pc = 0x39D3D8u;
    {
        const bool branch_taken_0x39d3d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D3D8u;
        // 0x39d3dc: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d3d8) {
            ctx->pc = 0x39D444u;
            goto label_39d444;
        }
    }
    ctx->pc = 0x39D3E0u;
label_39d3e0:
    // 0x39d3e0: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39d3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39d3e4:
    // 0x39d3e4: 0x8c4c27e4  lw          $t4, 0x27E4($v0)
    ctx->pc = 0x39d3e4u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_39d3e8:
    // 0x39d3e8: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x39d3e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_39d3ec:
    // 0x39d3ec: 0x24a51590  addiu       $a1, $a1, 0x1590
    ctx->pc = 0x39d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
label_39d3f0:
    // 0x39d3f0: 0x25081560  addiu       $t0, $t0, 0x1560
    ctx->pc = 0x39d3f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5472));
label_39d3f4:
    // 0x39d3f4: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x39d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_39d3f8:
    // 0x39d3f8: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x39d3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_39d3fc:
    // 0x39d3fc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x39d3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39d400:
    // 0x39d400: 0x2409018d  addiu       $t1, $zero, 0x18D
    ctx->pc = 0x39d400u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 397));
label_39d404:
    // 0x39d404: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39d404u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39d408:
    // 0x39d408: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39d408u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d40c:
    // 0x39d40c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39d40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39d410:
    // 0x39d410: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x39d410u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d414:
    // 0x39d414: 0x40f809  jalr        $v0
label_39d418:
    if (ctx->pc == 0x39D418u) {
        ctx->pc = 0x39D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D414u;
        // 0x39d418: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D41Cu;
        goto label_39d41c;
    }
    ctx->pc = 0x39D414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D41Cu);
        ctx->pc = 0x39D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D414u;
        // 0x39d418: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D414u, 0x39D41Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D41Cu;
label_39d41c:
    // 0x39d41c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39d420:
    if (ctx->pc == 0x39D420u) {
        ctx->pc = 0x39D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D41Cu;
        // 0x39d420: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D424u;
        goto label_39d424;
    }
    ctx->pc = 0x39D41Cu;
    {
        const bool branch_taken_0x39d41c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d41c) {
            ctx->pc = 0x39D420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D41Cu;
            // 0x39d420: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D430u;
            goto label_39d430;
        }
    }
    ctx->pc = 0x39D424u;
label_39d424:
    // 0x39d424: 0xc0d5320  jal         func_354C80
label_39d428:
    if (ctx->pc == 0x39D428u) {
        ctx->pc = 0x39D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D424u;
        // 0x39d428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D42Cu;
        goto label_39d42c;
    }
    ctx->pc = 0x39D424u;
    SET_GPR_U32(ctx, 31, 0x39D42Cu);
    ctx->pc = 0x39D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39D424u;
    // 0x39d428: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x354C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C80u, 0x39D424u, 0x39D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D42Cu;
label_39d42c:
    // 0x39d42c: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x39d42cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_39d430:
    // 0x39d430: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x39d430u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_39d434:
    // 0x39d434: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x39d434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_39d438:
    // 0x39d438: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x39d438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_39d43c:
    // 0x39d43c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x39d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_39d440:
    // 0x39d440: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x39d440u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_39d444:
    // 0x39d444: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d448:
    // 0x39d448: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39d448u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d44c:
    // 0x39d44c: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_39d450:
    if (ctx->pc == 0x39D450u) {
        ctx->pc = 0x39D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D44Cu;
        // 0x39d450: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D454u;
        goto label_39d454;
    }
    ctx->pc = 0x39D44Cu;
    {
        const bool branch_taken_0x39d44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D44Cu;
        // 0x39d450: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d44c) {
            ctx->pc = 0x39D528u;
            goto label_39d528;
        }
    }
    ctx->pc = 0x39D454u;
label_39d454:
    // 0x39d454: 0x90630021  lbu         $v1, 0x21($v1)
    ctx->pc = 0x39d454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d458:
    // 0x39d458: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x39d458u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_39d45c:
    // 0x39d45c: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x39d45cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_39d460:
    // 0x39d460: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x39d460u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39d464:
    // 0x39d464: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39d464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39d468:
    // 0x39d468: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x39d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_39d46c:
    // 0x39d46c: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x39d46cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_39d470:
    // 0x39d470: 0x24a51590  addiu       $a1, $a1, 0x1590
    ctx->pc = 0x39d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
label_39d474:
    // 0x39d474: 0x25081560  addiu       $t0, $t0, 0x1560
    ctx->pc = 0x39d474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5472));
label_39d478:
    // 0x39d478: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39d478u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39d47c:
    // 0x39d47c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x39d47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39d480:
    // 0x39d480: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39d480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39d484:
    // 0x39d484: 0x3012  mflo        $a2
    ctx->pc = 0x39d484u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_39d488:
    // 0x39d488: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x39d488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_39d48c:
    // 0x39d48c: 0x24090197  addiu       $t1, $zero, 0x197
    ctx->pc = 0x39d48cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 407));
label_39d490:
    // 0x39d490: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39d490u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d494:
    // 0x39d494: 0x40f809  jalr        $v0
label_39d498:
    if (ctx->pc == 0x39D498u) {
        ctx->pc = 0x39D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D494u;
        // 0x39d498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D49Cu;
        goto label_39d49c;
    }
    ctx->pc = 0x39D494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D49Cu);
        ctx->pc = 0x39D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D494u;
        // 0x39d498: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D494u, 0x39D49Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D49Cu;
label_39d49c:
    // 0x39d49c: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x39d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
label_39d4a0:
    // 0x39d4a0: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x39d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d4a4:
    // 0x39d4a4: 0x90430021  lbu         $v1, 0x21($v0)
    ctx->pc = 0x39d4a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 33)));
label_39d4a8:
    // 0x39d4a8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_39d4ac:
    if (ctx->pc == 0x39D4ACu) {
        ctx->pc = 0x39D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4A8u;
        // 0x39d4ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4B0u;
        goto label_39d4b0;
    }
    ctx->pc = 0x39D4A8u;
    {
        const bool branch_taken_0x39d4a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4A8u;
        // 0x39d4ac: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4a8) {
            ctx->pc = 0x39D4E8u;
            goto label_39d4e8;
        }
    }
    ctx->pc = 0x39D4B0u;
label_39d4b0:
    // 0x39d4b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d4b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d4b4:
    // 0x39d4b4: 0x0  nop
    ctx->pc = 0x39d4b4u;
    // NOP
label_39d4b8:
    // 0x39d4b8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x39d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_39d4bc:
    // 0x39d4bc: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x39d4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39d4c0:
    // 0x39d4c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39d4c4:
    if (ctx->pc == 0x39D4C4u) {
        ctx->pc = 0x39D4C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4C0u;
        // 0x39d4c4: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4C8u;
        goto label_39d4c8;
    }
    ctx->pc = 0x39D4C0u;
    {
        const bool branch_taken_0x39d4c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d4c0) {
            ctx->pc = 0x39D4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D4C0u;
            // 0x39d4c4: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D4D4u;
            goto label_39d4d4;
        }
    }
    ctx->pc = 0x39D4C8u;
label_39d4c8:
    // 0x39d4c8: 0xc0d5320  jal         func_354C80
label_39d4cc:
    if (ctx->pc == 0x39D4CCu) {
        ctx->pc = 0x39D4D0u;
        goto label_39d4d0;
    }
    ctx->pc = 0x39D4C8u;
    SET_GPR_U32(ctx, 31, 0x39D4D0u);
    ctx->pc = 0x354C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C80u, 0x39D4C8u, 0x39D4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D4D0u;
label_39d4d0:
    // 0x39d4d0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d4d4:
    // 0x39d4d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d4d8:
    // 0x39d4d8: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39d4d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d4dc:
    // 0x39d4dc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39d4dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d4e0:
    // 0x39d4e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_39d4e4:
    if (ctx->pc == 0x39D4E4u) {
        ctx->pc = 0x39D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4E0u;
        // 0x39d4e4: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4E8u;
        goto label_39d4e8;
    }
    ctx->pc = 0x39D4E0u;
    {
        const bool branch_taken_0x39d4e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4E0u;
        // 0x39d4e4: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4e0) {
            ctx->pc = 0x39D4B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d4b8;
        }
    }
    ctx->pc = 0x39D4E8u;
label_39d4e8:
    // 0x39d4e8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d4ec:
    // 0x39d4ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d4ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d4f0:
    // 0x39d4f0: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39d4f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d4f4:
    // 0x39d4f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_39d4f8:
    if (ctx->pc == 0x39D4F8u) {
        ctx->pc = 0x39D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4F4u;
        // 0x39d4f8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D4FCu;
        goto label_39d4fc;
    }
    ctx->pc = 0x39D4F4u;
    {
        const bool branch_taken_0x39d4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D4F4u;
        // 0x39d4f8: 0x8e040074  lw          $a0, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d4f4) {
            ctx->pc = 0x39D528u;
            goto label_39d528;
        }
    }
    ctx->pc = 0x39D4FCu;
label_39d4fc:
    // 0x39d4fc: 0x0  nop
    ctx->pc = 0x39d4fcu;
    // NOP
label_39d500:
    // 0x39d500: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x39d500u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_39d504:
    // 0x39d504: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39d504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39d508:
    // 0x39d508: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x39d508u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_39d50c:
    // 0x39d50c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x39d50cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_39d510:
    // 0x39d510: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d514:
    // 0x39d514: 0x90620021  lbu         $v0, 0x21($v1)
    ctx->pc = 0x39d514u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 33)));
label_39d518:
    // 0x39d518: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x39d518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d51c:
    // 0x39d51c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_39d520:
    if (ctx->pc == 0x39D520u) {
        ctx->pc = 0x39D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D51Cu;
        // 0x39d520: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D524u;
        goto label_39d524;
    }
    ctx->pc = 0x39D51Cu;
    {
        const bool branch_taken_0x39d51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D51Cu;
        // 0x39d520: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d51c) {
            ctx->pc = 0x39D500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d500;
        }
    }
    ctx->pc = 0x39D524u;
label_39d524:
    // 0x39d524: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d528:
    // 0x39d528: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39d528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d52c:
    // 0x39d52c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
label_39d530:
    if (ctx->pc == 0x39D530u) {
        ctx->pc = 0x39D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D52Cu;
        // 0x39d530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D534u;
        goto label_39d534;
    }
    ctx->pc = 0x39D52Cu;
    {
        const bool branch_taken_0x39d52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D52Cu;
        // 0x39d530: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d52c) {
            ctx->pc = 0x39D600u;
            goto label_39d600;
        }
    }
    ctx->pc = 0x39D534u;
label_39d534:
    // 0x39d534: 0x90630023  lbu         $v1, 0x23($v1)
    ctx->pc = 0x39d534u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d538:
    // 0x39d538: 0x8c4a27e4  lw          $t2, 0x27E4($v0)
    ctx->pc = 0x39d538u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10212)));
label_39d53c:
    // 0x39d53c: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x39d53cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_39d540:
    // 0x39d540: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x39d540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_39d544:
    // 0x39d544: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x39d544u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_39d548:
    // 0x39d548: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x39d548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_39d54c:
    // 0x39d54c: 0x3c080058  lui         $t0, 0x58
    ctx->pc = 0x39d54cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)88 << 16));
label_39d550:
    // 0x39d550: 0x24a51590  addiu       $a1, $a1, 0x1590
    ctx->pc = 0x39d550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5520));
label_39d554:
    // 0x39d554: 0x25081560  addiu       $t0, $t0, 0x1560
    ctx->pc = 0x39d554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5472));
label_39d558:
    // 0x39d558: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x39d558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_39d55c:
    // 0x39d55c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x39d55cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_39d560:
    // 0x39d560: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x39d560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_39d564:
    // 0x39d564: 0x3012  mflo        $a2
    ctx->pc = 0x39d564u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_39d568:
    // 0x39d568: 0x1442021  addu        $a0, $t2, $a0
    ctx->pc = 0x39d568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
label_39d56c:
    // 0x39d56c: 0x240901a8  addiu       $t1, $zero, 0x1A8
    ctx->pc = 0x39d56cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 424));
label_39d570:
    // 0x39d570: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x39d570u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d574:
    // 0x39d574: 0x40f809  jalr        $v0
label_39d578:
    if (ctx->pc == 0x39D578u) {
        ctx->pc = 0x39D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D574u;
        // 0x39d578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D57Cu;
        goto label_39d57c;
    }
    ctx->pc = 0x39D574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39D57Cu);
        ctx->pc = 0x39D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D574u;
        // 0x39d578: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D574u, 0x39D57Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39D57Cu;
label_39d57c:
    // 0x39d57c: 0xae020078  sw          $v0, 0x78($s0)
    ctx->pc = 0x39d57cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
label_39d580:
    // 0x39d580: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x39d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d584:
    // 0x39d584: 0x90430023  lbu         $v1, 0x23($v0)
    ctx->pc = 0x39d584u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 35)));
label_39d588:
    // 0x39d588: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_39d58c:
    if (ctx->pc == 0x39D58Cu) {
        ctx->pc = 0x39D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D588u;
        // 0x39d58c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D590u;
        goto label_39d590;
    }
    ctx->pc = 0x39D588u;
    {
        const bool branch_taken_0x39d588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D588u;
        // 0x39d58c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d588) {
            ctx->pc = 0x39D5C8u;
            goto label_39d5c8;
        }
    }
    ctx->pc = 0x39D590u;
label_39d590:
    // 0x39d590: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39d590u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d594:
    // 0x39d594: 0x0  nop
    ctx->pc = 0x39d594u;
    // NOP
label_39d598:
    // 0x39d598: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x39d598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_39d59c:
    // 0x39d59c: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x39d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_39d5a0:
    // 0x39d5a0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39d5a4:
    if (ctx->pc == 0x39D5A4u) {
        ctx->pc = 0x39D5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5A0u;
        // 0x39d5a4: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5A8u;
        goto label_39d5a8;
    }
    ctx->pc = 0x39D5A0u;
    {
        const bool branch_taken_0x39d5a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39d5a0) {
            ctx->pc = 0x39D5A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D5A0u;
            // 0x39d5a4: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D5B4u;
            goto label_39d5b4;
        }
    }
    ctx->pc = 0x39D5A8u;
label_39d5a8:
    // 0x39d5a8: 0xc0d5320  jal         func_354C80
label_39d5ac:
    if (ctx->pc == 0x39D5ACu) {
        ctx->pc = 0x39D5B0u;
        goto label_39d5b0;
    }
    ctx->pc = 0x39D5A8u;
    SET_GPR_U32(ctx, 31, 0x39D5B0u);
    ctx->pc = 0x354C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x354C80u, 0x39D5A8u, 0x39D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39D5B0u;
label_39d5b0:
    // 0x39d5b0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d5b4:
    // 0x39d5b4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x39d5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_39d5b8:
    // 0x39d5b8: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39d5b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d5bc:
    // 0x39d5bc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x39d5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d5c0:
    // 0x39d5c0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_39d5c4:
    if (ctx->pc == 0x39D5C4u) {
        ctx->pc = 0x39D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5C0u;
        // 0x39d5c4: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5C8u;
        goto label_39d5c8;
    }
    ctx->pc = 0x39D5C0u;
    {
        const bool branch_taken_0x39d5c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39D5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5C0u;
        // 0x39d5c4: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5c0) {
            ctx->pc = 0x39D598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d598;
        }
    }
    ctx->pc = 0x39D5C8u;
label_39d5c8:
    // 0x39d5c8: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d5cc:
    // 0x39d5cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39d5ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39d5d0:
    // 0x39d5d0: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39d5d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d5d4:
    // 0x39d5d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_39d5d8:
    if (ctx->pc == 0x39D5D8u) {
        ctx->pc = 0x39D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5D4u;
        // 0x39d5d8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D5DCu;
        goto label_39d5dc;
    }
    ctx->pc = 0x39D5D4u;
    {
        const bool branch_taken_0x39d5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x39D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5D4u;
        // 0x39d5d8: 0x8e040078  lw          $a0, 0x78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39d5d4) {
            ctx->pc = 0x39D600u;
            goto label_39d600;
        }
    }
    ctx->pc = 0x39D5DCu;
label_39d5dc:
    // 0x39d5dc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x39d5dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
label_39d5e0:
    // 0x39d5e0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x39d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_39d5e4:
    // 0x39d5e4: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x39d5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_39d5e8:
    // 0x39d5e8: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x39d5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_39d5ec:
    // 0x39d5ec: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x39d5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_39d5f0:
    // 0x39d5f0: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x39d5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
label_39d5f4:
    // 0x39d5f4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x39d5f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_39d5f8:
    // 0x39d5f8: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
label_39d5fc:
    if (ctx->pc == 0x39D5FCu) {
        ctx->pc = 0x39D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D5F8u;
        // 0x39d5fc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D600u;
        goto label_39d600;
    }
    ctx->pc = 0x39D5F8u;
    {
        const bool branch_taken_0x39d5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39d5f8) {
            ctx->pc = 0x39D5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39D5F8u;
            // 0x39d5fc: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39D5E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39d5e0;
        }
    }
    ctx->pc = 0x39D600u;
label_39d600:
    // 0x39d600: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x39d600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_39d604:
    // 0x39d604: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x39d604u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_39d608:
    // 0x39d608: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x39d608u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39d60c:
    // 0x39d60c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39d60cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39d610:
    // 0x39d610: 0x3e00008  jr          $ra
label_39d614:
    if (ctx->pc == 0x39D614u) {
        ctx->pc = 0x39D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D610u;
        // 0x39d614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39D618u;
        goto label_fallthrough_0x39d610;
    }
    ctx->pc = 0x39D610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39D610u;
        // 0x39d614: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39D610u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39d610:
    ctx->pc = 0x39D618u;
}
