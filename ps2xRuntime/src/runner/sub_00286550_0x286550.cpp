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

// Function: sub_00286550
// Address: 0x286550 - 0x286ba8
void sub_00286550_0x286550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286550_0x286550");
#endif

    switch (ctx->pc) {
        case 0x2865b4u: goto label_2865b4;
        case 0x2865c8u: goto label_2865c8;
        case 0x2865d4u: goto label_2865d4;
        case 0x2865e0u: goto label_2865e0;
        case 0x286600u: goto label_286600;
        case 0x28660cu: goto label_28660c;
        case 0x286650u: goto label_286650;
        case 0x286848u: goto label_286848;
        case 0x286968u: goto label_286968;
        case 0x286984u: goto label_286984;
        case 0x286994u: goto label_286994;
        case 0x286a54u: goto label_286a54;
        case 0x286a74u: goto label_286a74;
        case 0x286accu: goto label_286acc;
        case 0x286ae4u: goto label_286ae4;
        default: break;
    }

    ctx->pc = 0x286550u;

    // 0x286550: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x286550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x286554: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x286554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x286558: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x286558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x28655c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x28655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x286560: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x286560u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286564: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x286564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x286568: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x286568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x28656c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x28656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x286570: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x286570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x286574: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x286574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x286578: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x286578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x28657c: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x28657cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x286580: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x286580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x286584: 0x8c43deb8  lw          $v1, -0x2148($v0)
    ctx->pc = 0x286584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5FDEB8u));
    // 0x286588: 0x8c6401e8  lw          $a0, 0x1E8($v1)
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 488)));
    // 0x28658c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28658Cu;
    {
        const bool branch_taken_0x28658c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28658Cu;
        // 0x286590: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28658c) {
            ctx->pc = 0x2865A8u;
            goto label_2865a8;
        }
    }
    ctx->pc = 0x286594u;
    // 0x286594: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x286594u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286598: 0x8c64b734  lw          $a0, -0x48CC($v1)
    ctx->pc = 0x286598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948660)));
    // 0x28659c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x28659cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x2865a0: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x2865A0u;
    {
        const bool branch_taken_0x2865a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2865A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2865A0u;
        // 0x2865a4: 0xae4505ac  sw          $a1, 0x5AC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2865a0) {
            ctx->pc = 0x286B78u;
            goto label_286b78;
        }
    }
    ctx->pc = 0x2865A8u;
label_2865a8:
    // 0x2865a8: 0x264400c4  addiu       $a0, $s2, 0xC4
    ctx->pc = 0x2865a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 196));
    // 0x2865ac: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2865ACu;
    SET_GPR_U32(ctx, 31, 0x2865B4u);
    ctx->pc = 0x2865B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865ACu;
    // 0x2865b0: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2865ACu, 0x2865B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865B4u;
label_2865b4:
    // 0x2865b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2865b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2865b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865bc: 0x8e5100d4  lw          $s1, 0xD4($s2)
    ctx->pc = 0x2865bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
    // 0x2865c0: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2865C0u;
    SET_GPR_U32(ctx, 31, 0x2865C8u);
    ctx->pc = 0x2865C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865C0u;
    // 0x2865c4: 0x269000c4  addiu       $s0, $s4, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2865C0u, 0x2865C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865C8u;
label_2865c8:
    // 0x2865c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2865c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865cc: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2865CCu;
    SET_GPR_U32(ctx, 31, 0x2865D4u);
    ctx->pc = 0x2865D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865CCu;
    // 0x2865d0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2865CCu, 0x2865D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865D4u;
label_2865d4:
    // 0x2865d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2865d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865d8: 0xc0a1328  jal         func_284CA0
    ctx->pc = 0x2865D8u;
    SET_GPR_U32(ctx, 31, 0x2865E0u);
    ctx->pc = 0x2865DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865D8u;
    // 0x2865dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284CA0u, 0x2865D8u, 0x2865E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865E0u;
label_2865e0:
    // 0x2865e0: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x2865e0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865e4: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x2865e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2865e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2865ec: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2865ecu;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2865f0: 0x52c00008  beql        $s6, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2865F0u;
    {
        const bool branch_taken_0x2865f0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x2865f0) {
            ctx->pc = 0x2865F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2865F0u;
            // 0x2865f4: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286614u;
            goto label_286614;
        }
    }
    ctx->pc = 0x2865F8u;
    // 0x2865f8: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2865F8u;
    SET_GPR_U32(ctx, 31, 0x286600u);
    ctx->pc = 0x2865FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2865F8u;
    // 0x2865fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2865F8u, 0x286600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286600u;
label_286600:
    // 0x286600: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x286600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286604: 0xc0a14ea  jal         func_2853A8
    ctx->pc = 0x286604u;
    SET_GPR_U32(ctx, 31, 0x28660Cu);
    ctx->pc = 0x286608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286604u;
    // 0x286608: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2853A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2853A8u, 0x286604u, 0x28660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28660Cu;
label_28660c:
    // 0x28660c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286610: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_286614:
    // 0x286614: 0x8e420380  lw          $v0, 0x380($s2)
    ctx->pc = 0x286614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x286618: 0x8e05b734  lw          $a1, -0x48CC($s0)
    ctx->pc = 0x286618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
    // 0x28661c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x286620: 0x8e4605ac  lw          $a2, 0x5AC($s2)
    ctx->pc = 0x286620u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1452)));
    // 0x286624: 0x24670840  addiu       $a3, $v1, 0x840
    ctx->pc = 0x286624u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x286628: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x286628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x28662c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28662cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x286630: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x286634: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286638: 0xae4405ac  sw          $a0, 0x5AC($s2)
    ctx->pc = 0x286638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1452), GPR_U32(ctx, 4));
    // 0x28663c: 0x86f023  subu        $fp, $a0, $a2
    ctx->pc = 0x28663cu;
    SET_GPR_S32(ctx, 30, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x286640: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x286640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x286644: 0x7fa70000  sq          $a3, 0x0($sp)
    ctx->pc = 0x286644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 7));
    // 0x286648: 0xc070192  jal         func_1C0648
    ctx->pc = 0x286648u;
    SET_GPR_U32(ctx, 31, 0x286650u);
    ctx->pc = 0x28664Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286648u;
    // 0x28664c: 0x24843480  addiu       $a0, $a0, 0x3480 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C0648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C0648u, 0x286648u, 0x286650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286650u;
label_286650:
    // 0x286650: 0x12c0007f  beqz        $s6, . + 4 + (0x7F << 2)
    ctx->pc = 0x286650u;
    {
        const bool branch_taken_0x286650 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x286654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286650u;
        // 0x286654: 0x7ba70000  lq          $a3, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286650) {
            ctx->pc = 0x286850u;
            goto label_286850;
        }
    }
    ctx->pc = 0x286658u;
    // 0x286658: 0x828201b0  lb          $v0, 0x1B0($s4)
    ctx->pc = 0x286658u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 432)));
    // 0x28665c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28665cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x286660: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x286660u;
    {
        const bool branch_taken_0x286660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286660u;
        // 0x286664: 0x8e02b734  lw          $v0, -0x48CC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286660) {
            ctx->pc = 0x286734u;
            goto label_286734;
        }
    }
    ctx->pc = 0x286668u;
    // 0x286668: 0x8e8200d4  lw          $v0, 0xD4($s4)
    ctx->pc = 0x286668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 212)));
    // 0x28666c: 0x8c42012c  lw          $v0, 0x12C($v0)
    ctx->pc = 0x28666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
    // 0x286670: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286670u;
    {
        const bool branch_taken_0x286670 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286670u;
        // 0x286674: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286670) {
            ctx->pc = 0x28668Cu;
            goto label_28668c;
        }
    }
    ctx->pc = 0x286678u;
    // 0x286678: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286678u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28667c: 0x0  nop
    ctx->pc = 0x28667cu;
    // NOP
    // 0x286680: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286684u;
    {
        const bool branch_taken_0x286684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286684u;
        // 0x286688: 0x8ee20004  lw          $v0, 0x4($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286684) {
            ctx->pc = 0x2866A8u;
            goto label_2866a8;
        }
    }
    ctx->pc = 0x28668Cu;
label_28668c:
    // 0x28668c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28668cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286690: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x286690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286694: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286698: 0x0  nop
    ctx->pc = 0x286698u;
    // NOP
    // 0x28669c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28669cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2866a0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2866a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2866a4: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2866a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2866a8:
    // 0x2866a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2866A8u;
    {
        const bool branch_taken_0x2866a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2866ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866A8u;
        // 0x2866ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866a8) {
            ctx->pc = 0x2866C4u;
            goto label_2866c4;
        }
    }
    ctx->pc = 0x2866B0u;
    // 0x2866b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2866b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2866b4: 0x0  nop
    ctx->pc = 0x2866b4u;
    // NOP
    // 0x2866b8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2866b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2866bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2866BCu;
    {
        const bool branch_taken_0x2866bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866BCu;
        // 0x2866c0: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866bc) {
            ctx->pc = 0x2866E0u;
            goto label_2866e0;
        }
    }
    ctx->pc = 0x2866C4u;
label_2866c4:
    // 0x2866c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2866c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2866c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2866c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2866cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2866ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2866d0: 0x0  nop
    ctx->pc = 0x2866d0u;
    // NOP
    // 0x2866d4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2866d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2866d8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2866d8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2866dc: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x2866dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_2866e0:
    // 0x2866e0: 0x0  nop
    ctx->pc = 0x2866e0u;
    // NOP
    // 0x2866e4: 0x0  nop
    ctx->pc = 0x2866e4u;
    // NOP
    // 0x2866e8: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2866e8u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2866ec: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2866ECu;
    {
        const bool branch_taken_0x2866ec = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2866F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866ECu;
        // 0x2866f0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866ec) {
            ctx->pc = 0x286708u;
            goto label_286708;
        }
    }
    ctx->pc = 0x2866F4u;
    // 0x2866f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2866f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2866f8: 0x0  nop
    ctx->pc = 0x2866f8u;
    // NOP
    // 0x2866fc: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2866fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x286700: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286700u;
    {
        const bool branch_taken_0x286700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286700u;
        // 0x286704: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286700) {
            ctx->pc = 0x286724u;
            goto label_286724;
        }
    }
    ctx->pc = 0x286708u;
label_286708:
    // 0x286708: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28670c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28670cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286710: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x286710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x286714: 0x0  nop
    ctx->pc = 0x286714u;
    // NOP
    // 0x286718: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x286718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x28671c: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x28671cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x286720: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x286720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_286724:
    // 0x286724: 0x4410037  bgez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x286724u;
    {
        const bool branch_taken_0x286724 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x286728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286724u;
        // 0x286728: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286724) {
            ctx->pc = 0x286804u;
            goto label_286804;
        }
    }
    ctx->pc = 0x28672Cu;
    // 0x28672c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28672Cu;
    {
        const bool branch_taken_0x28672c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28672Cu;
        // 0x286730: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28672c) {
            ctx->pc = 0x28681Cu;
            goto label_28681c;
        }
    }
    ctx->pc = 0x286734u;
label_286734:
    // 0x286734: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x286734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x286738: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x286738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x28673c: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x28673cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286740: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286740u;
    {
        const bool branch_taken_0x286740 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286740u;
        // 0x286744: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286740) {
            ctx->pc = 0x28675Cu;
            goto label_28675c;
        }
    }
    ctx->pc = 0x286748u;
    // 0x286748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28674c: 0x0  nop
    ctx->pc = 0x28674cu;
    // NOP
    // 0x286750: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286750u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286754: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x286754u;
    {
        const bool branch_taken_0x286754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286754u;
        // 0x286758: 0x8e220134  lw          $v0, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286754) {
            ctx->pc = 0x28677Cu;
            goto label_28677c;
        }
    }
    ctx->pc = 0x28675Cu;
label_28675c:
    // 0x28675c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28675cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286760: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286764: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x286764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28676c: 0x0  nop
    ctx->pc = 0x28676cu;
    // NOP
    // 0x286770: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286770u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286774: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x286774u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x286778: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_28677c:
    // 0x28677c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x28677cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x286780: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286780u;
    {
        const bool branch_taken_0x286780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286780u;
        // 0x286784: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286780) {
            ctx->pc = 0x28679Cu;
            goto label_28679c;
        }
    }
    ctx->pc = 0x286788u;
    // 0x286788: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x286788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x28678c: 0x0  nop
    ctx->pc = 0x28678cu;
    // NOP
    // 0x286790: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x286790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x286794: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x286794u;
    {
        const bool branch_taken_0x286794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286794u;
        // 0x286798: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286794) {
            ctx->pc = 0x2867B8u;
            goto label_2867b8;
        }
    }
    ctx->pc = 0x28679Cu;
label_28679c:
    // 0x28679c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2867a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2867a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2867a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2867a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2867a8: 0x0  nop
    ctx->pc = 0x2867a8u;
    // NOP
    // 0x2867ac: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2867acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2867b0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2867b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2867b4: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x2867b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_2867b8:
    // 0x2867b8: 0x0  nop
    ctx->pc = 0x2867b8u;
    // NOP
    // 0x2867bc: 0x0  nop
    ctx->pc = 0x2867bcu;
    // NOP
    // 0x2867c0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2867c0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2867c4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2867C4u;
    {
        const bool branch_taken_0x2867c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2867C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867C4u;
        // 0x2867c8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867c4) {
            ctx->pc = 0x2867E0u;
            goto label_2867e0;
        }
    }
    ctx->pc = 0x2867CCu;
    // 0x2867cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2867ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2867d0: 0x0  nop
    ctx->pc = 0x2867d0u;
    // NOP
    // 0x2867d4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2867d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2867d8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2867D8u;
    {
        const bool branch_taken_0x2867d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2867DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867D8u;
        // 0x2867dc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867d8) {
            ctx->pc = 0x2867FCu;
            goto label_2867fc;
        }
    }
    ctx->pc = 0x2867E0u;
label_2867e0:
    // 0x2867e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2867e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2867e4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2867e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2867e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2867e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2867ec: 0x0  nop
    ctx->pc = 0x2867ecu;
    // NOP
    // 0x2867f0: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2867f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2867f4: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2867f4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2867f8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x2867f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_2867fc:
    // 0x2867fc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2867FCu;
    {
        const bool branch_taken_0x2867fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867FCu;
        // 0x286800: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2867fc) {
            ctx->pc = 0x286818u;
            goto label_286818;
        }
    }
    ctx->pc = 0x286804u;
label_286804:
    // 0x286804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286808: 0x0  nop
    ctx->pc = 0x286808u;
    // NOP
    // 0x28680c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28680cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286810: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286810u;
    {
        const bool branch_taken_0x286810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286810) {
            ctx->pc = 0x286830u;
            goto label_286830;
        }
    }
    ctx->pc = 0x286818u;
label_286818:
    // 0x286818: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_28681c:
    // 0x28681c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286820: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286824: 0x0  nop
    ctx->pc = 0x286824u;
    // NOP
    // 0x286828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28682c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28682cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_286830:
    // 0x286830: 0x0  nop
    ctx->pc = 0x286830u;
    // NOP
    // 0x286834: 0x0  nop
    ctx->pc = 0x286834u;
    // NOP
    // 0x286838: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x286838u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x28683c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x28683cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x286840: 0xc06ca2e  jal         func_1B28B8
    ctx->pc = 0x286840u;
    SET_GPR_U32(ctx, 31, 0x286848u);
    ctx->pc = 0x286844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286840u;
    // 0x286844: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x286840u, 0x286848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286848u;
label_286848:
    // 0x286848: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x286848u;
    {
        const bool branch_taken_0x286848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286848u;
        // 0x28684c: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286848) {
            ctx->pc = 0x28696Cu;
            goto label_28696c;
        }
    }
    ctx->pc = 0x286850u;
label_286850:
    // 0x286850: 0x8e02b734  lw          $v0, -0x48CC($s0)
    ctx->pc = 0x286850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948660)));
    // 0x286854: 0x8e230130  lw          $v1, 0x130($s1)
    ctx->pc = 0x286854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 304)));
    // 0x286858: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x286858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x28685c: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x28685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x286860: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x286860u;
    {
        const bool branch_taken_0x286860 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286860u;
        // 0x286864: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286860) {
            ctx->pc = 0x28687Cu;
            goto label_28687c;
        }
    }
    ctx->pc = 0x286868u;
    // 0x286868: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286868u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28686c: 0x0  nop
    ctx->pc = 0x28686cu;
    // NOP
    // 0x286870: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286870u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286874: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x286874u;
    {
        const bool branch_taken_0x286874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286874u;
        // 0x286878: 0x8e220134  lw          $v0, 0x134($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286874) {
            ctx->pc = 0x28689Cu;
            goto label_28689c;
        }
    }
    ctx->pc = 0x28687Cu;
label_28687c:
    // 0x28687c: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x28687cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x286880: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286884: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x286884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28688c: 0x0  nop
    ctx->pc = 0x28688cu;
    // NOP
    // 0x286890: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286890u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286894: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x286894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x286898: 0x8e220134  lw          $v0, 0x134($s1)
    ctx->pc = 0x286898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 308)));
label_28689c:
    // 0x28689c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x28689cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2868a0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2868A0u;
    {
        const bool branch_taken_0x2868a0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2868A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868A0u;
        // 0x2868a4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868a0) {
            ctx->pc = 0x2868BCu;
            goto label_2868bc;
        }
    }
    ctx->pc = 0x2868A8u;
    // 0x2868a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2868a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2868ac: 0x0  nop
    ctx->pc = 0x2868acu;
    // NOP
    // 0x2868b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2868b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2868b4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2868B4u;
    {
        const bool branch_taken_0x2868b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868B4u;
        // 0x2868b8: 0x8e22012c  lw          $v0, 0x12C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868b4) {
            ctx->pc = 0x2868D8u;
            goto label_2868d8;
        }
    }
    ctx->pc = 0x2868BCu;
label_2868bc:
    // 0x2868bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2868bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2868c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2868c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2868c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2868c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2868c8: 0x0  nop
    ctx->pc = 0x2868c8u;
    // NOP
    // 0x2868cc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2868ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2868d0: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2868d0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2868d4: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x2868d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_2868d8:
    // 0x2868d8: 0x0  nop
    ctx->pc = 0x2868d8u;
    // NOP
    // 0x2868dc: 0x0  nop
    ctx->pc = 0x2868dcu;
    // NOP
    // 0x2868e0: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x2868e0u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x2868e4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2868E4u;
    {
        const bool branch_taken_0x2868e4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2868E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868E4u;
        // 0x2868e8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868e4) {
            ctx->pc = 0x286900u;
            goto label_286900;
        }
    }
    ctx->pc = 0x2868ECu;
    // 0x2868ec: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2868ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2868f0: 0x0  nop
    ctx->pc = 0x2868f0u;
    // NOP
    // 0x2868f4: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x2868f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x2868f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2868F8u;
    {
        const bool branch_taken_0x2868f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2868FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2868F8u;
        // 0x2868fc: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2868f8) {
            ctx->pc = 0x28691Cu;
            goto label_28691c;
        }
    }
    ctx->pc = 0x286900u;
label_286900:
    // 0x286900: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x286904: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x286904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286908: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x286908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x28690c: 0x0  nop
    ctx->pc = 0x28690cu;
    // NOP
    // 0x286910: 0x46806b60  cvt.s.w     $f13, $f13
    ctx->pc = 0x286910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[13], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x286914: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x286914u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x286918: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x286918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_28691c:
    // 0x28691c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28691Cu;
    {
        const bool branch_taken_0x28691c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x286920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28691Cu;
        // 0x286920: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28691c) {
            ctx->pc = 0x286938u;
            goto label_286938;
        }
    }
    ctx->pc = 0x286924u;
    // 0x286924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286928: 0x0  nop
    ctx->pc = 0x286928u;
    // NOP
    // 0x28692c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28692cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x286930: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286930u;
    {
        const bool branch_taken_0x286930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286930) {
            ctx->pc = 0x286950u;
            goto label_286950;
        }
    }
    ctx->pc = 0x286938u;
label_286938:
    // 0x286938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x286938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28693c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28693cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x286940: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x286940u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x286944: 0x0  nop
    ctx->pc = 0x286944u;
    // NOP
    // 0x286948: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x286948u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x28694c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x28694cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_286950:
    // 0x286950: 0x0  nop
    ctx->pc = 0x286950u;
    // NOP
    // 0x286954: 0x0  nop
    ctx->pc = 0x286954u;
    // NOP
    // 0x286958: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x286958u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = FPU_DIV_S(ctx->f[13], ctx->f[0]); }
    // 0x28695c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x28695cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x286960: 0xc06ca2e  jal         func_1B28B8
    ctx->pc = 0x286960u;
    SET_GPR_U32(ctx, 31, 0x286968u);
    ctx->pc = 0x286964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286960u;
    // 0x286964: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28B8u, 0x286960u, 0x286968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286968u;
label_286968:
    // 0x286968: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x286968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_28696c:
    // 0x28696c: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x28696cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x286970: 0x24500840  addiu       $s0, $v0, 0x840
    ctx->pc = 0x286970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x286974: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x286974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286978: 0xc66d0004  lwc1        $f13, 0x4($s3)
    ctx->pc = 0x286978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x28697c: 0xc06ca3a  jal         func_1B28E8
    ctx->pc = 0x28697Cu;
    SET_GPR_U32(ctx, 31, 0x286984u);
    ctx->pc = 0x286980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28697Cu;
    // 0x286980: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B28E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B28E8u, 0x28697Cu, 0x286984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286984u;
label_286984:
    // 0x286984: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x286984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x286988: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28698c: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x28698Cu;
    SET_GPR_U32(ctx, 31, 0x286994u);
    ctx->pc = 0x286990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28698Cu;
    // 0x286990: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x28698Cu, 0x286994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286994u;
label_286994:
    // 0x286994: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x286994u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x286998: 0xc64205a8  lwc1        $f2, 0x5A8($s2)
    ctx->pc = 0x286998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x28699c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x28699cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2869a0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2869a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2869a4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2869a4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x2869a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2869a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2869ac: 0x2631021  addu        $v0, $s3, $v1
    ctx->pc = 0x2869acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2869b0: 0xc6a30014  lwc1        $f3, 0x14($s5)
    ctx->pc = 0x2869b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2869b4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2869b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2869b8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2869b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2869bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2869bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2869c0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2869c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2869c4: 0x460100a9  min.s       $f2, $f0, $f1
    ctx->pc = 0x2869c4u;
    ctx->f[2] = std::min(ctx->f[0], ctx->f[1]);
    // 0x2869c8: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2869c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2869cc: 0x0  nop
    ctx->pc = 0x2869ccu;
    // NOP
    // 0x2869d0: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
    ctx->pc = 0x2869D0u;
    {
        const bool branch_taken_0x2869d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2869d0) {
            ctx->pc = 0x2869D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2869D0u;
            // 0x2869d4: 0x92a2001c  lbu         $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286A0Cu;
            goto label_286a0c;
        }
    }
    ctx->pc = 0x2869D8u;
    // 0x2869d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2869dc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2869dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2869e0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2869e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2869e4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2869e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2869e8: 0x0  nop
    ctx->pc = 0x2869e8u;
    // NOP
    // 0x2869ec: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2869ECu;
    {
        const bool branch_taken_0x2869ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2869ec) {
            ctx->pc = 0x2869F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2869ECu;
            // 0x2869f0: 0x92a2001c  lbu         $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286A0Cu;
            goto label_286a0c;
        }
    }
    ctx->pc = 0x2869F4u;
    // 0x2869f4: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x2869f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2869f8: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2869f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2869fc: 0x0  nop
    ctx->pc = 0x2869fcu;
    // NOP
    // 0x286a00: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x286A00u;
    {
        const bool branch_taken_0x286a00 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x286a00) {
            ctx->pc = 0x286A04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286A00u;
            // 0x286a04: 0x92a2001c  lbu         $v0, 0x1C($s5) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286A0Cu;
            goto label_286a0c;
        }
    }
    ctx->pc = 0x286A08u;
    // 0x286a08: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x286a08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
label_286a0c:
    // 0x286a0c: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x286a0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x286a10: 0xa262001c  sb          $v0, 0x1C($s3)
    ctx->pc = 0x286a10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 2));
    // 0x286a14: 0xa263001d  sb          $v1, 0x1D($s3)
    ctx->pc = 0x286a14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 3));
    // 0x286a18: 0x92230128  lbu         $v1, 0x128($s1)
    ctx->pc = 0x286a18u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 296)));
    // 0x286a1c: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x286a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x286a20: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x286A20u;
    {
        const bool branch_taken_0x286a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A20u;
        // 0x286a24: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a20) {
            ctx->pc = 0x286B68u;
            goto label_286b68;
        }
    }
    ctx->pc = 0x286A28u;
    // 0x286a28: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x286a28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x286a2c: 0x2442f190  addiu       $v0, $v0, -0xE70
    ctx->pc = 0x286a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963600));
    // 0x286a30: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x286a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x286a34: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x286a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x286a38: 0x800008  jr          $a0
    ctx->pc = 0x286A38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x286A40u: goto label_286a40;
            case 0x286A5Cu: goto label_286a5c;
            case 0x286A80u: goto label_286a80;
            case 0x286B00u: goto label_286b00;
            case 0x286B08u: goto label_286b08;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286A38u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x286A40u;
label_286a40:
    // 0x286a40: 0xa28005b4  sb          $zero, 0x5B4($s4)
    ctx->pc = 0x286a40u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a44: 0xa28005b5  sb          $zero, 0x5B5($s4)
    ctx->pc = 0x286a44u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1461), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a48: 0xc6ad0014  lwc1        $f13, 0x14($s5)
    ctx->pc = 0x286a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x286a4c: 0xc0a157e  jal         func_2855F8
    ctx->pc = 0x286A4Cu;
    SET_GPR_U32(ctx, 31, 0x286A54u);
    ctx->pc = 0x286A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A4Cu;
    // 0x286a50: 0xc64c05a8  lwc1        $f12, 0x5A8($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x286A4Cu, 0x286A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A54u;
label_286a54:
    // 0x286a54: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x286A54u;
    {
        const bool branch_taken_0x286a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A54u;
        // 0x286a58: 0xe64005a8  swc1        $f0, 0x5A8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1448), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a54) {
            ctx->pc = 0x286B00u;
            goto label_286b00;
        }
    }
    ctx->pc = 0x286A5Cu;
label_286a5c:
    // 0x286a5c: 0xa260001d  sb          $zero, 0x1D($s3)
    ctx->pc = 0x286a5cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 29), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x286a60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286a64: 0xa260001c  sb          $zero, 0x1C($s3)
    ctx->pc = 0x286a64u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a68: 0x928505b4  lbu         $a1, 0x5B4($s4)
    ctx->pc = 0x286a68u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1460)));
    // 0x286a6c: 0xc09cc44  jal         func_273110
    ctx->pc = 0x286A6Cu;
    SET_GPR_U32(ctx, 31, 0x286A74u);
    ctx->pc = 0x286A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286A6Cu;
    // 0x286a70: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x273110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x273110u, 0x286A6Cu, 0x286A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286A74u;
label_286a74:
    // 0x286a74: 0xa28005b6  sb          $zero, 0x5B6($s4)
    ctx->pc = 0x286a74u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1462), (uint8_t)GPR_U32(ctx, 0));
    // 0x286a78: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x286A78u;
    {
        const bool branch_taken_0x286a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A78u;
        // 0x286a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a78) {
            ctx->pc = 0x286B78u;
            goto label_286b78;
        }
    }
    ctx->pc = 0x286A80u;
label_286a80:
    // 0x286a80: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x286a80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x286a84: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x286a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x286a88: 0x14620039  bne         $v1, $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x286A88u;
    {
        const bool branch_taken_0x286a88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286A88u;
        // 0x286a8c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286a88) {
            ctx->pc = 0x286B70u;
            goto label_286b70;
        }
    }
    ctx->pc = 0x286A90u;
    // 0x286a90: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x286a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x286a94: 0x9e1821  addu        $v1, $a0, $fp
    ctx->pc = 0x286a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x286a98: 0xae23012c  sw          $v1, 0x12C($s1)
    ctx->pc = 0x286a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 300), GPR_U32(ctx, 3));
    // 0x286a9c: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x286a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x286aa0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x286aa0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x286aa4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x286AA4u;
    {
        const bool branch_taken_0x286aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286aa4) {
            ctx->pc = 0x286AA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286AA4u;
            // 0x286aa8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x286AACu;
            goto label_286aac;
        }
    }
    ctx->pc = 0x286AACu;
label_286aac:
    // 0x286aac: 0x2012  mflo        $a0
    ctx->pc = 0x286aacu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x286ab0: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x286ab0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x286ab4: 0x1812  mflo        $v1
    ctx->pc = 0x286ab4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x286ab8: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286AB8u;
    {
        const bool branch_taken_0x286ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x286ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AB8u;
        // 0x286abc: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286ab8) {
            ctx->pc = 0x286AD4u;
            goto label_286ad4;
        }
    }
    ctx->pc = 0x286AC0u;
    // 0x286ac0: 0xc64c05a8  lwc1        $f12, 0x5A8($s2)
    ctx->pc = 0x286ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x286ac4: 0xc0a157e  jal         func_2855F8
    ctx->pc = 0x286AC4u;
    SET_GPR_U32(ctx, 31, 0x286ACCu);
    ctx->pc = 0x286AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286AC4u;
    // 0x286ac8: 0xc6ad0014  lwc1        $f13, 0x14($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2855F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2855F8u, 0x286AC4u, 0x286ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286ACCu;
label_286acc:
    // 0x286acc: 0xe64005a8  swc1        $f0, 0x5A8($s2)
    ctx->pc = 0x286accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1448), bits); }
    // 0x286ad0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x286ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_286ad4:
    // 0x286ad4: 0x8e450380  lw          $a1, 0x380($s2)
    ctx->pc = 0x286ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 896)));
    // 0x286ad8: 0x24440840  addiu       $a0, $v0, 0x840
    ctx->pc = 0x286ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2112));
    // 0x286adc: 0xc06ca46  jal         func_1B2918
    ctx->pc = 0x286ADCu;
    SET_GPR_U32(ctx, 31, 0x286AE4u);
    ctx->pc = 0x286AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286ADCu;
    // 0x286ae0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2918u, 0x286ADCu, 0x286AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286AE4u;
label_286ae4:
    // 0x286ae4: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x286ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x286ae8: 0x8e22012c  lw          $v0, 0x12C($s1)
    ctx->pc = 0x286ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
    // 0x286aec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x286aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x286af0: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x286AF0u;
    {
        const bool branch_taken_0x286af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AF0u;
        // 0x286af4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286af0) {
            ctx->pc = 0x286B78u;
            goto label_286b78;
        }
    }
    ctx->pc = 0x286AF8u;
    // 0x286af8: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x286AF8u;
    {
        const bool branch_taken_0x286af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286AF8u;
        // 0x286afc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286af8) {
            ctx->pc = 0x286B6Cu;
            goto label_286b6c;
        }
    }
    ctx->pc = 0x286B00u;
label_286b00:
    // 0x286b00: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x286B00u;
    {
        const bool branch_taken_0x286b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B00u;
        // 0x286b04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b00) {
            ctx->pc = 0x286B70u;
            goto label_286b70;
        }
    }
    ctx->pc = 0x286B08u;
label_286b08:
    // 0x286b08: 0x9263001c  lbu         $v1, 0x1C($s3)
    ctx->pc = 0x286b08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x286b0c: 0x92a20002  lbu         $v0, 0x2($s5)
    ctx->pc = 0x286b0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x286b10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x286B10u;
    {
        const bool branch_taken_0x286b10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x286B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B10u;
        // 0x286b14: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b10) {
            ctx->pc = 0x286B20u;
            goto label_286b20;
        }
    }
    ctx->pc = 0x286B18u;
    // 0x286b18: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x286B18u;
    {
        const bool branch_taken_0x286b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B18u;
        // 0x286b1c: 0xa2220128  sb          $v0, 0x128($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b18) {
            ctx->pc = 0x286B38u;
            goto label_286b38;
        }
    }
    ctx->pc = 0x286B20u;
label_286b20:
    // 0x286b20: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x286B20u;
    {
        const bool branch_taken_0x286b20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x286b20) {
            ctx->pc = 0x286B24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286B20u;
            // 0x286b24: 0x8e220138  lw          $v0, 0x138($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286B30u;
            goto label_286b30;
        }
    }
    ctx->pc = 0x286B28u;
    // 0x286b28: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x286B28u;
    {
        const bool branch_taken_0x286b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B28u;
        // 0x286b2c: 0xae200138  sw          $zero, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b28) {
            ctx->pc = 0x286B38u;
            goto label_286b38;
        }
    }
    ctx->pc = 0x286B30u;
label_286b30:
    // 0x286b30: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x286b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x286b34: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x286b34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_286b38:
    // 0x286b38: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x286b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x286b3c: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x286b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x286b40: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x286b40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x286b44: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x286B44u;
    {
        const bool branch_taken_0x286b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B44u;
        // 0x286b48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b44) {
            ctx->pc = 0x286B74u;
            goto label_286b74;
        }
    }
    ctx->pc = 0x286B4Cu;
    // 0x286b4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x286b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x286b50: 0xa28205b4  sb          $v0, 0x5B4($s4)
    ctx->pc = 0x286b50u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 2));
    // 0x286b54: 0xa2230128  sb          $v1, 0x128($s1)
    ctx->pc = 0x286b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 3));
    // 0x286b58: 0x8e220138  lw          $v0, 0x138($s1)
    ctx->pc = 0x286b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
    // 0x286b5c: 0x5e1021  addu        $v0, $v0, $fp
    ctx->pc = 0x286b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x286b60: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x286B60u;
    {
        const bool branch_taken_0x286b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286B60u;
        // 0x286b64: 0xae220138  sw          $v0, 0x138($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286b60) {
            ctx->pc = 0x286B74u;
            goto label_286b74;
        }
    }
    ctx->pc = 0x286B68u;
label_286b68:
    // 0x286b68: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x286b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_286b6c:
    // 0x286b6c: 0xa28005b4  sb          $zero, 0x5B4($s4)
    ctx->pc = 0x286b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1460), (uint8_t)GPR_U32(ctx, 0));
label_286b70:
    // 0x286b70: 0xa2220128  sb          $v0, 0x128($s1)
    ctx->pc = 0x286b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 296), (uint8_t)GPR_U32(ctx, 2));
label_286b74:
    // 0x286b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x286b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286b78:
    // 0x286b78: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x286b78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x286b7c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x286b7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x286b80: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x286b80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x286b84: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x286b84u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x286b88: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x286b88u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x286b8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x286b8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x286b90: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x286b90u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x286b94: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x286b94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x286b98: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x286b98u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286b9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286ba0: 0x3e00008  jr          $ra
    ctx->pc = 0x286BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286BA0u;
        // 0x286ba4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286BA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286BA8u;
}
