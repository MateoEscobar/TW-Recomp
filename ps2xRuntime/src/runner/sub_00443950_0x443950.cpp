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

// Function: sub_00443950
// Address: 0x443950 - 0x443ab0
void sub_00443950_0x443950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00443950_0x443950");
#endif

    switch (ctx->pc) {
        case 0x4439acu: goto label_4439ac;
        case 0x4439c0u: goto label_4439c0;
        case 0x4439e8u: goto label_4439e8;
        case 0x443a00u: goto label_443a00;
        case 0x443a20u: goto label_443a20;
        case 0x443a58u: goto label_443a58;
        case 0x443a60u: goto label_443a60;
        case 0x443a68u: goto label_443a68;
        case 0x443a70u: goto label_443a70;
        case 0x443a80u: goto label_443a80;
        default: break;
    }

    ctx->pc = 0x443950u;

    // 0x443950: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x443950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x443954: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x443954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x443958: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x443958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x44395c: 0x3c120052  lui         $s2, 0x52
    ctx->pc = 0x44395cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)82 << 16));
    // 0x443960: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x443960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x443964: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x443964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x443968: 0x26519ea0  addiu       $s1, $s2, -0x6160
    ctx->pc = 0x443968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942368));
    // 0x44396c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x44396cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x443970: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x443970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x443974: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x443974u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x519EA8u));
    // 0x443978: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x443978u;
    {
        const bool branch_taken_0x443978 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x44397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443978u;
        // 0x44397c: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443978) {
            ctx->pc = 0x44398Cu;
            goto label_44398c;
        }
    }
    ctx->pc = 0x443980u;
    // 0x443980: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x443980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x443984: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x443984u;
    {
        const bool branch_taken_0x443984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443984u;
        // 0x443988: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x443984) {
            ctx->pc = 0x443A84u;
            goto label_443a84;
        }
    }
    ctx->pc = 0x44398Cu;
label_44398c:
    // 0x44398c: 0x3c130070  lui         $s3, 0x70
    ctx->pc = 0x44398cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)112 << 16));
    // 0x443990: 0xfe409ea0  sd          $zero, -0x6160($s2)
    ctx->pc = 0x443990u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294942368), GPR_U64(ctx, 0));
    // 0x443994: 0x26703b80  addiu       $s0, $s3, 0x3B80
    ctx->pc = 0x443994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 15232));
    // 0x443998: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x443998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x44399c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x44399cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4439a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4439a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4439a4: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x4439A4u;
    SET_GPR_U32(ctx, 31, 0x4439ACu);
    ctx->pc = 0x4439A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4439A4u;
    // 0x4439a8: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x4439A4u, 0x4439ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4439ACu;
label_4439ac:
    // 0x4439ac: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x4439acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
    // 0x4439b0: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x4439b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
    // 0x4439b4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x4439b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x4439b8: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x4439b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
    // 0x4439bc: 0x0  nop
    ctx->pc = 0x4439bcu;
    // NOP
label_4439c0:
    // 0x4439c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4439c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4439c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4439c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4439c8: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x4439c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
    // 0x4439cc: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x4439ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
    // 0x4439d0: 0x0  nop
    ctx->pc = 0x4439d0u;
    // NOP
    // 0x4439d4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x4439D4u;
    {
        const bool branch_taken_0x4439d4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x4439d4) {
            ctx->pc = 0x4439C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4439c0;
        }
    }
    ctx->pc = 0x4439DCu;
    // 0x4439dc: 0x26623b80  addiu       $v0, $s3, 0x3B80
    ctx->pc = 0x4439dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 15232));
    // 0x4439e0: 0xc111122  jal         func_444488
    ctx->pc = 0x4439E0u;
    SET_GPR_U32(ctx, 31, 0x4439E8u);
    ctx->pc = 0x4439E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4439E0u;
    // 0x4439e4: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x444488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x444488u, 0x4439E0u, 0x4439E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4439E8u;
label_4439e8:
    // 0x4439e8: 0x3c050044  lui         $a1, 0x44
    ctx->pc = 0x4439e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)68 << 16));
    // 0x4439ec: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x4439ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x4439f0: 0x24a53d98  addiu       $a1, $a1, 0x3D98
    ctx->pc = 0x4439f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15768));
    // 0x4439f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4439f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4439f8: 0xc10f364  jal         func_43CD90
    ctx->pc = 0x4439F8u;
    SET_GPR_U32(ctx, 31, 0x443A00u);
    ctx->pc = 0x4439FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4439F8u;
    // 0x4439fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43CD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43CD90u, 0x4439F8u, 0x443A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A00u;
label_443a00:
    // 0x443a00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x443a00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443a04: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x443A04u;
    {
        const bool branch_taken_0x443a04 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x443a04) {
            ctx->pc = 0x443A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x443A04u;
            // 0x443a08: 0x26429ea0  addiu       $v0, $s2, -0x6160 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294942368));
            ctx->in_delay_slot = false;
            ctx->pc = 0x443A18u;
            goto label_443a18;
        }
    }
    ctx->pc = 0x443A0Cu;
    // 0x443a0c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x443a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x443a10: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x443A10u;
    {
        const bool branch_taken_0x443a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x443A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A10u;
        // 0x443a14: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x443a10) {
            ctx->pc = 0x443A84u;
            goto label_443a84;
        }
    }
    ctx->pc = 0x443A18u;
label_443a18:
    // 0x443a18: 0xc110cb0  jal         func_4432C0
    ctx->pc = 0x443A18u;
    SET_GPR_U32(ctx, 31, 0x443A20u);
    ctx->pc = 0x443A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443A18u;
    // 0x443a1c: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4432C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4432C0u, 0x443A18u, 0x443A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A20u;
label_443a20:
    // 0x443a20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x443a20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x443a24: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x443a24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x443a28: 0x34631010  ori         $v1, $v1, 0x1010
    ctx->pc = 0x443a28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4112);
    // 0x443a2c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x443a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x443a30: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x443a30u;
    SET_GPR_S32(ctx, 16, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10000000
    // 0x443a34: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x443a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x443a38: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x443a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x443a3c: 0x548025  or          $s0, $v0, $s4
    ctx->pc = 0x443a3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
    // 0x443a40: 0x36100300  ori         $s0, $s0, 0x300
    ctx->pc = 0x443a40u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)768);
    // 0x443a44: 0x32020080  andi        $v0, $s0, 0x80
    ctx->pc = 0x443a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)128);
    // 0x443a48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x443A48u;
    {
        const bool branch_taken_0x443a48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x443A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A48u;
        // 0x443a4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443a48) {
            ctx->pc = 0x443A60u;
            goto label_443a60;
        }
    }
    ctx->pc = 0x443A50u;
    // 0x443a50: 0xc110e48  jal         func_443920
    ctx->pc = 0x443A50u;
    SET_GPR_U32(ctx, 31, 0x443A58u);
    ctx->pc = 0x443A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443A50u;
    // 0x443a54: 0x36100c80  ori         $s0, $s0, 0xC80 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)3200);
    ctx->in_delay_slot = false;
    ctx->pc = 0x443920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443920u, 0x443A50u, 0x443A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A58u;
label_443a58:
    // 0x443a58: 0xc110e50  jal         func_443940
    ctx->pc = 0x443A58u;
    SET_GPR_U32(ctx, 31, 0x443A60u);
    ctx->pc = 0x443A5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443A58u;
    // 0x443a5c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x443940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443940u, 0x443A58u, 0x443A60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A60u;
label_443a60:
    // 0x443a60: 0xc110e4c  jal         func_443930
    ctx->pc = 0x443A60u;
    SET_GPR_U32(ctx, 31, 0x443A68u);
    ctx->pc = 0x443A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443A60u;
    // 0x443a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443930u, 0x443A60u, 0x443A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A68u;
label_443a68:
    // 0x443a68: 0xc10f6d0  jal         func_43DB40
    ctx->pc = 0x443A68u;
    SET_GPR_U32(ctx, 31, 0x443A70u);
    ctx->pc = 0x443A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x443A68u;
    // 0x443a6c: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43DB40u, 0x443A68u, 0x443A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A70u;
label_443a70:
    // 0x443a70: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x443A70u;
    {
        const bool branch_taken_0x443a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x443A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A70u;
        // 0x443a74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x443a70) {
            ctx->pc = 0x443A84u;
            goto label_443a84;
        }
    }
    ctx->pc = 0x443A78u;
    // 0x443a78: 0xc110cc4  jal         func_443310
    ctx->pc = 0x443A78u;
    SET_GPR_U32(ctx, 31, 0x443A80u);
    ctx->pc = 0x443310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443310u, 0x443A78u, 0x443A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x443A80u;
label_443a80:
    // 0x443a80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x443a80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_443a84:
    // 0x443a84: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x443a84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x443a88: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x443a88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x443a8c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x443a8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x443a90: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x443a90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x443a94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x443a94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x443a98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x443a98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x443a9c: 0x3e00008  jr          $ra
    ctx->pc = 0x443A9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x443AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x443A9Cu;
        // 0x443aa0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x443A9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x443AA4u;
    // 0x443aa4: 0x0  nop
    ctx->pc = 0x443aa4u;
    // NOP
    // 0x443aa8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x443aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x443aac: 0x0  nop
    ctx->pc = 0x443aacu;
    // NOP
    ctx->pc = 0x443ab0u;
}
