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

// Function: sub_00413018
// Address: 0x413018 - 0x413198
void sub_00413018_0x413018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00413018_0x413018");
#endif

    switch (ctx->pc) {
        case 0x413018u: goto label_413018;
        case 0x41301cu: goto label_41301c;
        case 0x413020u: goto label_413020;
        case 0x413024u: goto label_413024;
        case 0x413028u: goto label_413028;
        case 0x41302cu: goto label_41302c;
        case 0x413030u: goto label_413030;
        case 0x413034u: goto label_413034;
        case 0x413038u: goto label_413038;
        case 0x41303cu: goto label_41303c;
        case 0x413040u: goto label_413040;
        case 0x413044u: goto label_413044;
        case 0x413048u: goto label_413048;
        case 0x41304cu: goto label_41304c;
        case 0x413050u: goto label_413050;
        case 0x413054u: goto label_413054;
        case 0x413058u: goto label_413058;
        case 0x41305cu: goto label_41305c;
        case 0x413060u: goto label_413060;
        case 0x413064u: goto label_413064;
        case 0x413068u: goto label_413068;
        case 0x41306cu: goto label_41306c;
        case 0x413070u: goto label_413070;
        case 0x413074u: goto label_413074;
        case 0x413078u: goto label_413078;
        case 0x41307cu: goto label_41307c;
        case 0x413080u: goto label_413080;
        case 0x413084u: goto label_413084;
        case 0x413088u: goto label_413088;
        case 0x41308cu: goto label_41308c;
        case 0x413090u: goto label_413090;
        case 0x413094u: goto label_413094;
        case 0x413098u: goto label_413098;
        case 0x41309cu: goto label_41309c;
        case 0x4130a0u: goto label_4130a0;
        case 0x4130a4u: goto label_4130a4;
        case 0x4130a8u: goto label_4130a8;
        case 0x4130acu: goto label_4130ac;
        case 0x4130b0u: goto label_4130b0;
        case 0x4130b4u: goto label_4130b4;
        case 0x4130b8u: goto label_4130b8;
        case 0x4130bcu: goto label_4130bc;
        case 0x4130c0u: goto label_4130c0;
        case 0x4130c4u: goto label_4130c4;
        case 0x4130c8u: goto label_4130c8;
        case 0x4130ccu: goto label_4130cc;
        case 0x4130d0u: goto label_4130d0;
        case 0x4130d4u: goto label_4130d4;
        case 0x4130d8u: goto label_4130d8;
        case 0x4130dcu: goto label_4130dc;
        case 0x4130e0u: goto label_4130e0;
        case 0x4130e4u: goto label_4130e4;
        case 0x4130e8u: goto label_4130e8;
        case 0x4130ecu: goto label_4130ec;
        case 0x4130f0u: goto label_4130f0;
        case 0x4130f4u: goto label_4130f4;
        case 0x4130f8u: goto label_4130f8;
        case 0x4130fcu: goto label_4130fc;
        case 0x413100u: goto label_413100;
        case 0x413104u: goto label_413104;
        case 0x413108u: goto label_413108;
        case 0x41310cu: goto label_41310c;
        case 0x413110u: goto label_413110;
        case 0x413114u: goto label_413114;
        case 0x413118u: goto label_413118;
        case 0x41311cu: goto label_41311c;
        case 0x413120u: goto label_413120;
        case 0x413124u: goto label_413124;
        case 0x413128u: goto label_413128;
        case 0x41312cu: goto label_41312c;
        case 0x413130u: goto label_413130;
        case 0x413134u: goto label_413134;
        case 0x413138u: goto label_413138;
        case 0x41313cu: goto label_41313c;
        case 0x413140u: goto label_413140;
        case 0x413144u: goto label_413144;
        case 0x413148u: goto label_413148;
        case 0x41314cu: goto label_41314c;
        case 0x413150u: goto label_413150;
        case 0x413154u: goto label_413154;
        case 0x413158u: goto label_413158;
        case 0x41315cu: goto label_41315c;
        case 0x413160u: goto label_413160;
        case 0x413164u: goto label_413164;
        case 0x413168u: goto label_413168;
        case 0x41316cu: goto label_41316c;
        case 0x413170u: goto label_413170;
        case 0x413174u: goto label_413174;
        case 0x413178u: goto label_413178;
        case 0x41317cu: goto label_41317c;
        case 0x413180u: goto label_413180;
        case 0x413184u: goto label_413184;
        case 0x413188u: goto label_413188;
        case 0x41318cu: goto label_41318c;
        case 0x413190u: goto label_413190;
        case 0x413194u: goto label_413194;
        default: break;
    }

    ctx->pc = 0x413018u;

label_413018:
    // 0x413018: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x413018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_41301c:
    // 0x41301c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x41301cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_413020:
    // 0x413020: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x413020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_413024:
    // 0x413024: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x413024u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_413028:
    // 0x413028: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x413028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_41302c:
    // 0x41302c: 0x2411026c  addiu       $s1, $zero, 0x26C
    ctx->pc = 0x41302cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 620));
label_413030:
    // 0x413030: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x413030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_413034:
    // 0x413034: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x413034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_413038:
    // 0x413038: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x413038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_41303c:
    // 0x41303c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x41303cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_413040:
    // 0x413040: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x413040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_413044:
    // 0x413044: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x413044u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_413048:
    // 0x413048: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x413048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41304c:
    // 0x41304c: 0x846500a8  lh          $a1, 0xA8($v1)
    ctx->pc = 0x41304cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_413050:
    // 0x413050: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x413050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_413054:
    // 0x413054: 0x40f809  jalr        $v0
label_413058:
    if (ctx->pc == 0x413058u) {
        ctx->pc = 0x413058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413054u;
        // 0x413058: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41305Cu;
        goto label_41305c;
    }
    ctx->pc = 0x413054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41305Cu);
        ctx->pc = 0x413058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413054u;
        // 0x413058: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413054u, 0x41305Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41305Cu;
label_41305c:
    // 0x41305c: 0x7ba30010  lq          $v1, 0x10($sp)
    ctx->pc = 0x41305cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_413060:
    // 0x413060: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x413060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_413064:
    // 0x413064: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x413064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_413068:
    // 0x413068: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x413068u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41306c:
    // 0x41306c: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x41306cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
label_413070:
    // 0x413070: 0xac820020  sw          $v0, 0x20($a0)
    ctx->pc = 0x413070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
label_413074:
    // 0x413074: 0xafb00034  sw          $s0, 0x34($sp)
    ctx->pc = 0x413074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 16));
label_413078:
    // 0x413078: 0xafb20054  sw          $s2, 0x54($sp)
    ctx->pc = 0x413078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 18));
label_41307c:
    // 0x41307c: 0x112400  sll         $a0, $s1, 16
    ctx->pc = 0x41307cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_413080:
    // 0x413080: 0xc0e403c  jal         func_3900F0
label_413084:
    if (ctx->pc == 0x413084u) {
        ctx->pc = 0x413084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413080u;
        // 0x413084: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413088u;
        goto label_413088;
    }
    ctx->pc = 0x413080u;
    SET_GPR_U32(ctx, 31, 0x413088u);
    ctx->pc = 0x413084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413080u;
    // 0x413084: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900F0u, 0x413080u, 0x413088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413088u;
label_413088:
    // 0x413088: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x413088u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41308c:
    // 0x41308c: 0x5200002a  beql        $s0, $zero, . + 4 + (0x2A << 2)
label_413090:
    if (ctx->pc == 0x413090u) {
        ctx->pc = 0x413090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41308Cu;
        // 0x413090: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413094u;
        goto label_413094;
    }
    ctx->pc = 0x41308Cu;
    {
        const bool branch_taken_0x41308c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x41308c) {
            ctx->pc = 0x413090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x41308Cu;
            // 0x413090: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413138u;
            goto label_413138;
        }
    }
    ctx->pc = 0x413094u;
label_413094:
    // 0x413094: 0x92020068  lbu         $v0, 0x68($s0)
    ctx->pc = 0x413094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
label_413098:
    // 0x413098: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_41309c:
    if (ctx->pc == 0x41309Cu) {
        ctx->pc = 0x41309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413098u;
        // 0x41309c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130A0u;
        goto label_4130a0;
    }
    ctx->pc = 0x413098u;
    {
        const bool branch_taken_0x413098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x413098) {
            ctx->pc = 0x41309Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x413098u;
            // 0x41309c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413138u;
            goto label_413138;
        }
    }
    ctx->pc = 0x4130A0u;
label_4130a0:
    // 0x4130a0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4130a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4130a4:
    // 0x4130a4: 0x84640060  lh          $a0, 0x60($v1)
    ctx->pc = 0x4130a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 96)));
label_4130a8:
    // 0x4130a8: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x4130a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_4130ac:
    // 0x4130ac: 0x40f809  jalr        $v0
label_4130b0:
    if (ctx->pc == 0x4130B0u) {
        ctx->pc = 0x4130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130ACu;
        // 0x4130b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130B4u;
        goto label_4130b4;
    }
    ctx->pc = 0x4130ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4130B4u);
        ctx->pc = 0x4130B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130ACu;
        // 0x4130b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4130ACu, 0x4130B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4130B4u;
label_4130b4:
    // 0x4130b4: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_4130b8:
    if (ctx->pc == 0x4130B8u) {
        ctx->pc = 0x4130B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130B4u;
        // 0x4130b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130BCu;
        goto label_4130bc;
    }
    ctx->pc = 0x4130B4u;
    {
        const bool branch_taken_0x4130b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4130b4) {
            ctx->pc = 0x4130B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4130B4u;
            // 0x4130b8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413138u;
            goto label_413138;
        }
    }
    ctx->pc = 0x4130BCu;
label_4130bc:
    // 0x4130bc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4130bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4130c0:
    // 0x4130c0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x4130c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_4130c4:
    // 0x4130c4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x4130c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_4130c8:
    // 0x4130c8: 0x40f809  jalr        $v0
label_4130cc:
    if (ctx->pc == 0x4130CCu) {
        ctx->pc = 0x4130CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130C8u;
        // 0x4130cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130D0u;
        goto label_4130d0;
    }
    ctx->pc = 0x4130C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4130D0u);
        ctx->pc = 0x4130CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130C8u;
        // 0x4130cc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4130C8u, 0x4130D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4130D0u;
label_4130d0:
    // 0x4130d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4130d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4130d4:
    // 0x4130d4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4130d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4130d8:
    // 0x4130d8: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x4130d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_4130dc:
    // 0x4130dc: 0x8c66001c  lw          $a2, 0x1C($v1)
    ctx->pc = 0x4130dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_4130e0:
    // 0x4130e0: 0xc0f809  jalr        $a2
label_4130e4:
    if (ctx->pc == 0x4130E4u) {
        ctx->pc = 0x4130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130E0u;
        // 0x4130e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130E8u;
        goto label_4130e8;
    }
    ctx->pc = 0x4130E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x4130E8u);
        ctx->pc = 0x4130E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130E0u;
        // 0x4130e4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4130E0u, 0x4130E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4130E8u;
label_4130e8:
    // 0x4130e8: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4130ec:
    if (ctx->pc == 0x4130ECu) {
        ctx->pc = 0x4130ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130E8u;
        // 0x4130ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130F0u;
        goto label_4130f0;
    }
    ctx->pc = 0x4130E8u;
    {
        const bool branch_taken_0x4130e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4130e8) {
            ctx->pc = 0x4130ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4130E8u;
            // 0x4130ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413138u;
            goto label_413138;
        }
    }
    ctx->pc = 0x4130F0u;
label_4130f0:
    // 0x4130f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4130f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4130f4:
    // 0x4130f4: 0xc104a86  jal         func_412A18
label_4130f8:
    if (ctx->pc == 0x4130F8u) {
        ctx->pc = 0x4130F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130F4u;
        // 0x4130f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4130FCu;
        goto label_4130fc;
    }
    ctx->pc = 0x4130F4u;
    SET_GPR_U32(ctx, 31, 0x4130FCu);
    ctx->pc = 0x4130F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4130F4u;
    // 0x4130f8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412A18u, 0x4130F4u, 0x4130FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4130FCu;
label_4130fc:
    // 0x4130fc: 0x5454000e  bnel        $v0, $s4, . + 4 + (0xE << 2)
label_413100:
    if (ctx->pc == 0x413100u) {
        ctx->pc = 0x413100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4130FCu;
        // 0x413100: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413104u;
        goto label_413104;
    }
    ctx->pc = 0x4130FCu;
    {
        const bool branch_taken_0x4130fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x4130fc) {
            ctx->pc = 0x413100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4130FCu;
            // 0x413100: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x413138u;
            goto label_413138;
        }
    }
    ctx->pc = 0x413104u;
label_413104:
    // 0x413104: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x413104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_413108:
    // 0x413108: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x413108u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_41310c:
    // 0x41310c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x41310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_413110:
    // 0x413110: 0x40f809  jalr        $v0
label_413114:
    if (ctx->pc == 0x413114u) {
        ctx->pc = 0x413114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413110u;
        // 0x413114: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413118u;
        goto label_413118;
    }
    ctx->pc = 0x413110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413118u);
        ctx->pc = 0x413114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413110u;
        // 0x413114: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413110u, 0x413118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413118u;
label_413118:
    // 0x413118: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x413118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_41311c:
    // 0x41311c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x41311cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_413120:
    // 0x413120: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x413120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_413124:
    // 0x413124: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x413124u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_413128:
    // 0x413128: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x413128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_41312c:
    // 0x41312c: 0x40f809  jalr        $v0
label_413130:
    if (ctx->pc == 0x413130u) {
        ctx->pc = 0x413130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41312Cu;
        // 0x413130: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413134u;
        goto label_413134;
    }
    ctx->pc = 0x41312Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x413134u);
        ctx->pc = 0x413130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41312Cu;
        // 0x413130: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41312Cu, 0x413134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x413134u;
label_413134:
    // 0x413134: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x413134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_413138:
    // 0x413138: 0x2a2202ec  slti        $v0, $s1, 0x2EC
    ctx->pc = 0x413138u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)748) ? 1 : 0);
label_41313c:
    // 0x41313c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_413140:
    if (ctx->pc == 0x413140u) {
        ctx->pc = 0x413140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41313Cu;
        // 0x413140: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413144u;
        goto label_413144;
    }
    ctx->pc = 0x41313Cu;
    {
        const bool branch_taken_0x41313c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x413140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41313Cu;
        // 0x413140: 0x112400  sll         $a0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41313c) {
            ctx->pc = 0x413080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_413080;
        }
    }
    ctx->pc = 0x413144u;
label_413144:
    // 0x413144: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x413144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_413148:
    // 0x413148: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x413148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_41314c:
    // 0x41314c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x41314cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_413150:
    // 0x413150: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x413150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_413154:
    // 0x413154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x413154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_413158:
    // 0x413158: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x413158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41315c:
    // 0x41315c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x41315cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_413160:
    // 0x413160: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x413160u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_413164:
    // 0x413164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x413164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_413168:
    // 0x413168: 0xc0a4dda  jal         func_293768
label_41316c:
    if (ctx->pc == 0x41316Cu) {
        ctx->pc = 0x41316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413168u;
        // 0x41316c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413170u;
        goto label_413170;
    }
    ctx->pc = 0x413168u;
    SET_GPR_U32(ctx, 31, 0x413170u);
    ctx->pc = 0x41316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x413168u;
    // 0x41316c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293768u, 0x413168u, 0x413170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x413170u;
label_413170:
    // 0x413170: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x413170u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_413174:
    // 0x413174: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x413174u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_413178:
    // 0x413178: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x413178u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41317c:
    // 0x41317c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x41317cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_413180:
    // 0x413180: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x413180u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_413184:
    // 0x413184: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x413184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_413188:
    // 0x413188: 0x3e00008  jr          $ra
label_41318c:
    if (ctx->pc == 0x41318Cu) {
        ctx->pc = 0x41318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413188u;
        // 0x41318c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x413190u;
        goto label_413190;
    }
    ctx->pc = 0x413188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x413188u;
        // 0x41318c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x413188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x413190u;
label_413190:
    // 0x413190: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x413190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_413194:
    // 0x413194: 0x0  nop
    ctx->pc = 0x413194u;
    // NOP
    ctx->pc = 0x413198u;
}
